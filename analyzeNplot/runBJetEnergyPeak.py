#!/usr/bin/env python

import optparse
import os,sys
import json
import pickle
import ROOT
from subprocess import Popen, PIPE
from array import array

from btagUtility import *

"""
Perform the analysis on a single file
"""
def runBJetEnergyPeak(inFileURL, outFileURL, xsec=None):

    print '...analysing %s' % inFileURL

    csv_binedges = [0., 0.5426, 0.8484, 0.9535, 1.0]

    #book some histograms
    histos={
        'nvtx'  :ROOT.TH1F('nvtx',';Vertex multiplicity; Events',40,0,40),
        'nbtags':ROOT.TH1F('nbtags',';b-tag multiplicity; Events',2,0.5,2.5),
        'bjet_en_MED':ROOT.TH1F('bjet_en_MED',';Energy [GeV]; Jets',50,0,400),
        'bjet_en_ls_MED':ROOT.TH1F('bjet_en_ls_MED',';log(E);  1/E dN_{b jets}/dlog(E)',20,3.,7.),
        'bjet_en_LOO':ROOT.TH1F('bjet_en_LOO',';Energy [GeV]; Jets',50,0,400),
        'bjet_en_ls_LOO':ROOT.TH1F('bjet_en_ls_LOO',';log(E);  1/E dN_{b jets}/dlog(E)',20,3.,7.),
        'bjet_en_TIG':ROOT.TH1F('bjet_en_TIG',';Energy [GeV]; Jets',50,0,400),
        'bjet_en_ls_TIG':ROOT.TH1F('bjet_en_ls_TIG',';log(E);  1/E dN_{b jets}/dlog(E)',20,3.,7.),
#########################################################################################
        'bjet_pt_loose':ROOT.TH1F('bjet_pt_loose',';pt [GeV]; Events',50,0,350),
        'bjet_pt_medium':ROOT.TH1F('bjet_pt_medium',';pt [GeV]; Events',50,0,350),
        'bjet_pt_tight':ROOT.TH1F('bjet_pt_tight',';pt [GeV]; Events',50,0,350),
        'met_pt':ROOT.TH1F('met_pt',';pt [GeV]; Events',50,0,350),
        'lepton_pt':ROOT.TH1F('lepton_pt',';pt [GeV]; Events',50,0,350),
        'jet_pt':ROOT.TH1F('jet_pt',';pt [GeV]; Events',50,0,350),
        'jet_gen_pt':ROOT.TH1F('jet_gen_pt',';pt [GeV]; Events',50,0,350),
#########################################################################################
        'jet_mass':ROOT.TH1F('jet_mass',';mass [GeV]; Events',50,0,100),
        'bjet_mass':ROOT.TH1F('bjet_mass',';mass [GeV]; Events',50,0,100),
        'dilepton_mass':ROOT.TH1F('dilepton_mass',';mass [GeV]; Events',100,0,200),
        'vis_top_mass':ROOT.TH1F('vis_top_mass',';mass [GeV]; Events',50,0,200),
########################################################################################
        'csv_discriminator':ROOT.TH1F('csv_discriminator',';B-Tag Criterion; Events',4, array('d',csv_binedges)),
        'cut_flow':ROOT.TH1F('cut_flow',';mass [GeV]; Events',4,0.5,4.5),
        'nleptons':ROOT.TH1F('nleptons',';Number of leptons; Events',10,0,4)
        }
    for key in histos:
        histos[key].Sumw2()
        histos[key].SetDirectory(0)

    #open file and loop over events tree
    fIn=ROOT.TFile.Open(inFileURL)
    tree=fIn.Get('data')
    totalEntries=tree.GetEntriesFast()
    for i in xrange(0,totalEntries):

        #generator level weight only for MC
        evWgt=1.0
        if xsec              : evWgt  = xsec*tree.LepSelEffWeights[0]*tree.PUWeights[0]
        if tree.nGenWeight>0 : evWgt *= tree.GenWeights[0]

        histos['cut_flow'].Fill(1, evWgt)

        tree.GetEntry(i)
        if i%100==0 : sys.stdout.write('\r [ %d/100 ] done' %(int(float(100.*i)/float(totalEntries))) )
        #require at least two jets
        nJets, nBtags, nLeptons = 0, 0, 0

        JetsP4=[]
        MedtaggedJetsP4=[]  # this is the Medium tag condition

        LootagJetsP4=[]
        TigtagJetsP4=[]

        # Looping over JETS
        for ij in xrange(0,tree.nJet):

            #get the kinematics and select the jet
            jp4=ROOT.TLorentzVector()
            jp4.SetPtEtaPhiM(tree.Jet_pt[ij],tree.Jet_eta[ij],tree.Jet_phi[ij],tree.Jet_mass[ij])
            if jp4.Pt()<30 or ROOT.TMath.Abs(jp4.Eta())>2.4 : continue

            #count selected jet
            nJets +=1
            JetsP4.append(jp4)


             #save P4 for b-tagged jet
            # if tree.Jet_CombIVF[ij]>0.8484: # medium cut
	    istagged = tree.Jet_CombIVF[ij]>0.5426
           # istagged = tree.Jet_CombIVF[ij]>0.8484   
            heavySF = 1.0;
            heavySFerr = 0.0;
            heavySFup = 1.0;
            heavySFdn = 1.0;
            heavyEff = 1.0;
            lightSF = 1.0;
            lightSFerr = 0.0;
            lightSFup = 1.0;
            lightSFdn = 1.0;
            lightEff = 1.0;
            
             #set the initial tagged/untagged state
            ijetPt = jp4.Pt()
            ijetEta= jp4.Eta()
            
            if tree.Jet_flavour[ij] == 5:
                heavySF   = GetBtagSF2016Loose_comb('central', ijetPt, ijetEta);
                heavySFerr= GetBtagSF2016Loose_comb('uncert', ijetPt, ijetEta);
                if ijetPt>1000: heavySFerr *=2.0
                heavySFup = heavySF + heavySFerr;
                heavySFdn = heavySF - heavySFerr;
                heavyEff  = GetBtagEfficiency(ijetPt);
                
                isBtagged = applySF(istagged,heavySF,heavyEff);
                isBtagged_bSFup = applySF(istagged,heavySFup,heavyEff);
                isBtagged_bSFdn = applySF(istagged,heavySFdn,heavyEff);
                isBtagged_lSFup = applySF(istagged,heavySF,heavyEff);
                isBtagged_lSFdn = applySF(istagged,heavySF,heavyEff);
                
            elif tree.Jet_flavour[ij] == 4: # c-quarks
                heavySF   = GetCtagSF2016Loose_comb('central', ijetPt, ijetEta);
                heavySFerr= GetCtagSF2016Loose_comb('uncert', ijetPt, ijetEta);
                if ijetPt>1000: heavySFerr *=2.0;
                heavySFup = heavySF + heavySFerr;
                heavySFdn = heavySF - heavySFerr;
                heavyEff  = GetCtagEfficiency(ijetPt);
                
                isBtagged = applySF(istagged,heavySF,heavyEff);
                isBtagged_bSFup = applySF(istagged,heavySFup,heavyEff);
                isBtagged_bSFdn = applySF(istagged,heavySFdn,heavyEff);
                isBtagged_lSFup = applySF(istagged,heavySF,heavyEff);
                isBtagged_lSFdn = applySF(istagged,heavySF,heavyEff);
                
            else: # udsg-quarks
                lightSF   = GetLFSF2016Loose('central', ijetPt, ijetEta);
                lightSFerr= GetLFSF2016Loose('uncert', ijetPt, ijetEta);
                if ijetPt>1000: lightSFerr *=2.0;
                lightSFup = lightSF + lightSFerr;
                lightSFdn = lightSF - lightSFerr;
                lightEff  = GetMistagRate(ijetPt);
                
                isBtagged = applySF(istagged,lightSF,lightEff);
                isBtagged_bSFup = applySF(istagged,lightSF,lightEff);
                isBtagged_bSFdn = applySF(istagged,lightSF,lightEff);
                isBtagged_lSFup = applySF(istagged,lightSFup,lightEff);
                isBtagged_lSFdn = applySF(istagged,lightSFdn,lightEff);
	     
            # Take the Pt of bjets tagged as Loose cut
            if (isBtagged == 1):
                LootagJetsP4.append(jp4)
                btagID = 0
		nBtags+=1

                if tree.Jet_CombIVF[ij]>0.8484:
                    MedtaggedJetsP4.append(jp4)
                    btagID = 1

                    


                    if tree.Jet_CombIVF[ij]>0.9535: # tight cut
                        TigtagJetsP4.append(jp4)
                        btagID = 2

        if nJets<2 : continue
        histos['cut_flow'].Fill(2,evWgt)
        if nBtags < 1 : continue
        histos['cut_flow'].Fill(3,evWgt)

        # Create lepton four-vector which will be used to compute dilepton invariant mass
        leptons_p4 = []

        # Looping over LEPTONS
        for ij in xrange(0,tree.nLepton):
            #get the kinematics and select the lepton
            lp4=ROOT.TLorentzVector()
            lp4.SetPtEtaPhiM(tree.Lepton_pt[ij],tree.Lepton_eta[ij],tree.Lepton_phi[ij],0)
            if lp4.Pt()<20 or ROOT.TMath.Abs(lp4.Eta())>2.4 : continue

            #count selected leptons
            nLeptons +=1

            leptons_p4.append(lp4)

        if nLeptons<2 : continue

        histos['cut_flow'].Fill(4, evWgt)

        # dilepton invariant mass
        l2_mass = (leptons_p4[0]+leptons_p4[1]).M()

        # construct vis_top_mass -> invariant mass of b and l (excluding neutrino)
        m11 = ROOT.TLorentzVector()
        m12 = ROOT.TLorentzVector()
        m21 = ROOT.TLorentzVector()
        m22 = ROOT.TLorentzVector()
        vis_tmass = 0

        if nBtags == 2:
            m11 = (LootaggedJetsP4[0]+leptons_p4[0]).M()
            m22 = (LootaggedJetsP4[1]+leptons_p4[1]).M()
            m12 = (LootaggedJetsP4[0]+leptons_p4[1]).M()
            m21 = (LootaggedJetsP4[1]+leptons_p4[0]).M()

            vis_tmass = min(max(m11,m22), max(m12,m21))
        elif nBtags == 1:
            m11 = (LootaggedJetsP4[0]+leptons_p4[0]).M()
            m12 = (LootaggedJetsP4[0]+leptons_p4[0]).M()

            vis_tmass = min(m11,m12)



        #ready to fill the histograms
        histos['nvtx'].Fill(tree.nPV,evWgt)
        histos['nbtags'].Fill(nBtags,evWgt)

        histos['dilepton_mass'].Fill(l2_mass,evWgt)
        histos['met_pt'].Fill(tree.MET_pt,evWgt)
        histos['vis_top_mass'].Fill(vis_tmass,evWgt)

        for k in xrange(0,tree.nJet):
            histos['csv_discriminator'].Fill(tree.Jet_CombIVF[k],evWgt)

        for lepton in leptons_p4:
            histos['lepton_pt'].Fill(lepton.Pt(),evWgt)

        histos['nleptons'].Fill(nLeptons,evWgt)

        #use up to two leading b-tagged jets
        for ij in xrange(0,len(MedtaggedJetsP4)):
            if ij>1 : break

            histos['bjet_en_MED'].Fill(MedtaggedJetsP4[ij].E(),evWgt)
            histos['bjet_en_ls_MED'].Fill(ROOT.TMath.Log(MedtaggedJetsP4[ij].E()),evWgt/MedtaggedJetsP4[ij].E())
            histos['bjet_mass'].Fill(MedtaggedJetsP4[ij].M(),evWgt)
            histos['bjet_pt_medium'].Fill(MedtaggedJetsP4[ij].Pt(),evWgt)

        for k in xrange(0,len(LootagJetsP4)):
            if k>1 : break
            histos['bjet_pt_loose'].Fill(LootagJetsP4[k].Pt(),evWgt)
            histos['bjet_en_LOO'].Fill(LootagJetsP4[k].E(),evWgt)
            histos['bjet_en_ls_LOO'].Fill(ROOT.TMath.Log(LootagJetsP4[k].E()),evWgt/LootagJetsP4[k].E())

        for k in xrange(0,len(TigtagJetsP4)):
            if k>1 : break
            histos['bjet_pt_tight'].Fill(TigtagJetsP4[k].Pt(),evWgt)
            histos['bjet_en_TIG'].Fill(TigtagJetsP4[k].E(),evWgt)
            histos['bjet_en_ls_TIG'].Fill(ROOT.TMath.Log(TigtagJetsP4[k].E()),evWgt/TigtagJetsP4[k].E())

        for jet in JetsP4:
            histos['jet_pt'].Fill(jet.Pt(),evWgt)
            histos['jet_mass'].Fill(jet.M(),evWgt)

    fIn.Close()

    #save histograms to file
    fOut=ROOT.TFile.Open(outFileURL,'RECREATE')
    for key in histos: histos[key].Write()
    fOut.Close()


"""
Wrapper to be used when run in parallel
"""
def runBJetEnergyPeakPacked(args):

    try:
        return runBJetEnergyPeak(inFileURL=args[0],
                                 outFileURL=args[1],
                                 xsec=args[2])
    except :
        print 50*'<'
        print "  Problem  (%s) with %s continuing without"%(sys.exc_info()[1],args[0])
        print 50*'<'
        return False


"""
steer the script
"""
def main():

    #configuration
    usage = 'usage: %prog [options]'
    parser = optparse.OptionParser(usage)
    parser.add_option('-j', '--json',        dest='json'  ,      help='json with list of files',      default=None,        type='string')
    parser.add_option('-i', '--inDir',       dest='inDir',       help='input directory with files',   default=None,        type='string')
    parser.add_option('-o', '--outDir',      dest='outDir',      help='output directory',             default='analysis',  type='string')
    parser.add_option('-n', '--njobs',       dest='njobs',       help='# jobs to run in parallel',    default=0,           type='int')
    (opt, args) = parser.parse_args()

    #read list of samples
    jsonFile = open(opt.json,'r')
    samplesList=json.load(jsonFile,encoding='utf-8').items()
    jsonFile.close()

    #prepare output
    if len(opt.outDir)==0    : opt.outDir='./'
    os.system('mkdir -p %s' % opt.outDir)

    #create the analysis jobs
    taskList = []
    for sample, sampleInfo in samplesList:
        inFileURL  = 'root://cmseos.fnal.gov//%s/%s.root' % (opt.inDir,sample)
        #if not os.path.isfile(inFileURL): continue
        xsec=sampleInfo[0] if sampleInfo[1]==0 else None
        outFileURL = '%s/%s.root' % (opt.outDir,sample)
        taskList.append( (inFileURL,outFileURL,xsec) )

    #run the analysis jobs
    if opt.njobs == 0:
        for inFileURL, outFileURL, xsec in taskList:
            runBJetEnergyPeak(inFileURL=inFileURL, outFileURL=outFileURL, xsec=xsec)
    else:
        from multiprocessing import Pool
        pool = Pool(opt.njobs)
        pool.map(runBJetEnergyPeakPacked,taskList)

    #all done here
    print 'Analysis results are available in %s' % opt.outDir
    exit(0)



"""
for execution from another script
"""
if __name__ == "__main__":
    sys.exit(main())
