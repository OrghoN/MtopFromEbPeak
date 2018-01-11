from ROOT import TRandom3

def applySF(isTagged, tag_SF, tag_eff):
  
  newTag = isTagged;
  if (tag_SF == 1.): return newTag; #no correction needed 

  #throw die
  Rand = TRandom3(0)
  coin = Rand.Uniform(1.);    

  if(tag_SF > 1):  # use this if SF>1

    if( not isTagged ):

      #fraction of jets that need to be upgraded
      mistagPercent = (1.0 - tag_SF) / (1.0 - (tag_SF/tag_eff) );

      #upgrade to tagged
      if( coin < mistagPercent ): newTag = True

  else:  # use this if SF<1
      
    # downgrade tagged to untagged
    if( isTagged and coin > tag_SF ): newTag = False

  return newTag


def GetBtagSF2016Medium_comb(Shift, pt, eta):
    if pt > 1000.: pt = 1000.;
    if abs(eta) > 2.4 or pt<20.: return 1.0; 
    if Shift == 'uncert':
      if pt<30: return 0.040213499218225479;
      elif pt<50: return 0.014046305790543556;
      elif pt<70: return 0.012372690252959728;
      elif pt<100: return 0.012274007312953472;
      elif pt<140: return 0.011465910822153091;
      elif pt<200: return 0.012079551815986633;
      elif pt<300: return 0.014995276927947998;
      elif pt<600: return 0.021414462476968765;
      else:  return 0.032377112656831741;
    else: return 0.561694*((1.+(0.31439*pt))/(1.+(0.17756*pt)));
    #end switch on shift

def GetBtagSF2016Loose_comb(Shift,pt,eta):
    if pt > 1000.: pt = 1000.;
    if abs(eta) > 2.4 or pt<20.: return 1.0; 
    if Shift == 'uncert':
      if(pt<30): return 0.025381835177540779;      
      elif(pt<50): return 0.012564006261527538; 
      elif(pt<70): return 0.011564776301383972; 
      elif(pt<100): return 0.011248723603785038;
      elif(pt<140): return 0.010811596177518368; 
      elif(pt<200): return 0.010882497765123844;
      elif(pt<300): return 0.013456921093165874; 
      elif(pt<600): return 0.017094610258936882;                                                                                                                                                   
      else: return 0.02186630479991436
    else: return   0.887973*((1.+(0.0523821*pt))/(1.+(0.0460876*pt)));

def GetCtagsSF2016Loose_comb(shift, pt, eta):
  if pt > 1000.: pt = 1000.;
  if abs(eta) > 2.4 or pt<20.: return 1.0; 
  if Shift == 'uncert':
    return 2.5 * GetBtagSF2016Loose_comb(uncert, pt, eta)
  return GetBtagSF2016Loose_comb(central, pt, eta);
    
def GetCtagsSF2016Medium_comb(shift, pt, eta):
  if pt > 1000.: pt = 1000.;
  if abs(eta) > 2.4 or pt<20.: return 1.0; 
  if Shift == 'uncert':
    return 3.0 * GetBtagSF2016Medium_comb(uncert, pt, eta)
  return GetBtagSF2016Medium_comb(central, pt, eta);

def GetLFSF2016Medium(Shift, pt, eta):
    if pt > 1000.: pt = 1000.;
    if (abs(eta) > 2.4) or (pt<20.): return 1.;
    if Shift == 'uncert':
      return  (1.0589+0.000382569*pt+-2.4252e-07*pt*pt+2.20966e-10*pt*pt*pt)*((0.100485+3.95509e-05*pt+-4.90326e-08*pt*pt));
    else:
      return  1.0589+0.000382569*pt+-2.4252e-07*pt*pt+2.20966e-10*pt*pt*pt;
    #end switch Shift
#end GetLFSF2016

def GetLFSF2016Loose(Shift, pt, eta):
    if pt > 1000.: pt = 1000.;
    if (abs(eta) > 2.4) or (pt<20.): return 1.;
    if Shift == 'uncert':
      return (1.13904+-0.000594946*pt+1.97303e-06*pt*pt+-1.38194e-09*pt*pt*pt)*((0.0996438+-8.33354e-05*pt+4.74359e-08*pt*pt));
    else:
      return 1.13904+-0.000594946*pt+1.97303e-06*pt*pt+-1.38194e-09*pt*pt*pt;
    #end switch Shift
#end GetLFSF2016

def GetBtagEfficiency(pt):
  # Efficiencies from TT powheg sample for Moriond17.
  # See distribution in /uscms_data/d3/jmanagan/EffsAndNewWeights/TagEffsM17/BEff.png
  # Uses hadronFlavour() rather than partonFlavour() as recommended in BTV physics plenary CMS Week 10/2015
  if pt < 30: return 0.331971;
  elif pt < 50: return 0.550937;
  elif pt < 70: return 0.599929;
  elif pt < 100: return 0.624677;
  elif pt < 140: return 0.635101;
  elif pt < 200: return 0.632463;
  elif pt < 300: return 0.598059;
  elif pt < 400: return 0.558359;
  elif pt < 500: return 0.514297;
  elif pt < 600: return 0.494422;
  elif pt < 800: return 0.474555;
  elif pt < 1000: return 0.451810;
  elif pt < 1200: return 0.427328;
  else: return 0.414162;

def GetCtagEfficiency(pt):
  if pt < 30: return 0.057985;
  elif pt < 50: return 0.111536;
  elif pt < 70: return 0.112216;
  elif pt < 100: return 0.120075;
  elif pt < 140: return 0.128499;
  elif pt < 200: return 0.132918;
  elif pt < 300: return 0.126724;
  elif pt < 400: return 0.126281;
  elif pt < 500: return 0.123026;
  elif pt < 600: return 0.124840;
  elif pt < 800: return 0.130060;
  elif pt < 1000: return 0.128022;
  elif pt < 1200: return 0.134100;
  else: return 0.125348;


def GetMistagRate(pt):
  # Mistag rates from TT powheg sample for Moriond17.
  # See distribution in /uscms_data/d3/jmanagan/EffsAndNewWeights/TagEffsM17/BE   f.png
  # Uses hadronFlavour() rather than partonFlavour() as recommended in BTV physics plenary CMS Week 10/2015
  if pt < 30:    return 0.003385;
  elif pt < 50:   return 0.009673;
  elif pt < 70:   return 0.008316;
  elif pt < 100:  return 0.008524;
  elif pt < 140:  return 0.009092;
  elif pt < 200:  return 0.011431;
  elif pt < 300:  return 0.013666;
  elif pt < 400:  return 0.020405;
  elif pt < 500:  return 0.023609;
  elif pt < 600:  return 0.025348;
  elif pt < 800:  return 0.028858;
  elif pt < 1000: return 0.030427;
  elif pt < 1200: return 0.034091;
  else: return 0.047619;
