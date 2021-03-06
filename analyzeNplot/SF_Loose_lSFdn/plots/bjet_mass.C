void bjet_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 20:12:54 2018) by ROOT version6.08/07
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-14.45783,-7247.606,106.0241,53149.95);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__120 = new TH1F("frame__120","t#bar{t}",50,0,100);
   frame__120->SetMinimum(0.1);
   frame__120->SetMaximum(52545.97);
   frame__120->SetEntries(463672);
   frame__120->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__120->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__120->SetMarkerColor(ci);
   frame__120->GetXaxis()->SetTitle("mass [GeV]");
   frame__120->GetXaxis()->SetLabelFont(42);
   frame__120->GetXaxis()->SetLabelSize(0.035);
   frame__120->GetXaxis()->SetTitleSize(0.035);
   frame__120->GetXaxis()->SetTitleFont(42);
   frame__120->GetYaxis()->SetTitle(" Events");
   frame__120->GetYaxis()->SetNoExponent();
   frame__120->GetYaxis()->SetLabelFont(42);
   frame__120->GetYaxis()->SetTitleSize(0.045);
   frame__120->GetYaxis()->SetTitleOffset(1.3);
   frame__120->GetYaxis()->SetTitleFont(42);
   frame__120->GetZaxis()->SetLabelFont(42);
   frame__120->GetZaxis()->SetLabelSize(0.035);
   frame__120->GetZaxis()->SetTitleSize(0.035);
   frame__120->GetZaxis()->SetTitleFont(42);
   frame__120->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_18 = new TH1F("mc_stack_18","mc",50,0,100);
   mc_stack_18->SetMinimum(-1.768051e-06);
   mc_stack_18->SetMaximum(42440.98);
   mc_stack_18->SetDirectory(0);
   mc_stack_18->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_18->SetLineColor(ci);
   mc_stack_18->GetXaxis()->SetLabelFont(42);
   mc_stack_18->GetXaxis()->SetLabelSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleFont(42);
   mc_stack_18->GetYaxis()->SetLabelFont(42);
   mc_stack_18->GetYaxis()->SetLabelSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleFont(42);
   mc_stack_18->GetZaxis()->SetLabelFont(42);
   mc_stack_18->GetZaxis()->SetLabelSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_18);
   
   
   TH1F *bjet_mass_t#bar{t}__121 = new TH1F("bjet_mass_t#bar{t}__121","t#bar{t}",50,0,100);
   bjet_mass_t#bar{t}__121->SetBinContent(1,2.63939);
   bjet_mass_t#bar{t}__121->SetBinContent(2,311.7876);
   bjet_mass_t#bar{t}__121->SetBinContent(3,9144.771);
   bjet_mass_t#bar{t}__121->SetBinContent(4,32785.49);
   bjet_mass_t#bar{t}__121->SetBinContent(5,38721.89);
   bjet_mass_t#bar{t}__121->SetBinContent(6,31600.15);
   bjet_mass_t#bar{t}__121->SetBinContent(7,22442.29);
   bjet_mass_t#bar{t}__121->SetBinContent(8,14788.66);
   bjet_mass_t#bar{t}__121->SetBinContent(9,9299.311);
   bjet_mass_t#bar{t}__121->SetBinContent(10,5706.174);
   bjet_mass_t#bar{t}__121->SetBinContent(11,3575.174);
   bjet_mass_t#bar{t}__121->SetBinContent(12,2208.655);
   bjet_mass_t#bar{t}__121->SetBinContent(13,1365.453);
   bjet_mass_t#bar{t}__121->SetBinContent(14,868.5881);
   bjet_mass_t#bar{t}__121->SetBinContent(15,586.3759);
   bjet_mass_t#bar{t}__121->SetBinContent(16,394.6941);
   bjet_mass_t#bar{t}__121->SetBinContent(17,250.2656);
   bjet_mass_t#bar{t}__121->SetBinContent(18,209.7124);
   bjet_mass_t#bar{t}__121->SetBinContent(19,141.1042);
   bjet_mass_t#bar{t}__121->SetBinContent(20,103.6691);
   bjet_mass_t#bar{t}__121->SetBinContent(21,73.40689);
   bjet_mass_t#bar{t}__121->SetBinContent(22,46.08706);
   bjet_mass_t#bar{t}__121->SetBinContent(23,43.72533);
   bjet_mass_t#bar{t}__121->SetBinContent(24,25.80975);
   bjet_mass_t#bar{t}__121->SetBinContent(25,22.58979);
   bjet_mass_t#bar{t}__121->SetBinContent(26,21.91438);
   bjet_mass_t#bar{t}__121->SetBinContent(27,14.36017);
   bjet_mass_t#bar{t}__121->SetBinContent(28,12.47348);
   bjet_mass_t#bar{t}__121->SetBinContent(29,9.197757);
   bjet_mass_t#bar{t}__121->SetBinContent(30,10.60369);
   bjet_mass_t#bar{t}__121->SetBinContent(31,7.185697);
   bjet_mass_t#bar{t}__121->SetBinContent(32,4.315735);
   bjet_mass_t#bar{t}__121->SetBinContent(33,2.746315);
   bjet_mass_t#bar{t}__121->SetBinContent(34,6.34406);
   bjet_mass_t#bar{t}__121->SetBinContent(35,4.308263);
   bjet_mass_t#bar{t}__121->SetBinContent(36,3.48253);
   bjet_mass_t#bar{t}__121->SetBinContent(37,2.672583);
   bjet_mass_t#bar{t}__121->SetBinContent(38,2.265268);
   bjet_mass_t#bar{t}__121->SetBinContent(39,0.8847574);
   bjet_mass_t#bar{t}__121->SetBinContent(41,1.246346);
   bjet_mass_t#bar{t}__121->SetBinContent(42,0.7869518);
   bjet_mass_t#bar{t}__121->SetBinContent(43,0.8404778);
   bjet_mass_t#bar{t}__121->SetBinContent(44,0.9110916);
   bjet_mass_t#bar{t}__121->SetBinContent(45,0.4699354);
   bjet_mass_t#bar{t}__121->SetBinContent(47,0.3878116);
   bjet_mass_t#bar{t}__121->SetBinContent(48,0.41871);
   bjet_mass_t#bar{t}__121->SetBinContent(50,0.3575801);
   bjet_mass_t#bar{t}__121->SetBinContent(51,2.968901);
   bjet_mass_t#bar{t}__121->SetBinError(1,1.028389);
   bjet_mass_t#bar{t}__121->SetBinError(2,11.3169);
   bjet_mass_t#bar{t}__121->SetBinError(3,61.29095);
   bjet_mass_t#bar{t}__121->SetBinError(4,116.0789);
   bjet_mass_t#bar{t}__121->SetBinError(5,126.0955);
   bjet_mass_t#bar{t}__121->SetBinError(6,113.9439);
   bjet_mass_t#bar{t}__121->SetBinError(7,96.00671);
   bjet_mass_t#bar{t}__121->SetBinError(8,77.916);
   bjet_mass_t#bar{t}__121->SetBinError(9,61.79622);
   bjet_mass_t#bar{t}__121->SetBinError(10,48.44421);
   bjet_mass_t#bar{t}__121->SetBinError(11,38.31383);
   bjet_mass_t#bar{t}__121->SetBinError(12,30.13025);
   bjet_mass_t#bar{t}__121->SetBinError(13,23.68574);
   bjet_mass_t#bar{t}__121->SetBinError(14,18.89255);
   bjet_mass_t#bar{t}__121->SetBinError(15,15.51474);
   bjet_mass_t#bar{t}__121->SetBinError(16,12.71859);
   bjet_mass_t#bar{t}__121->SetBinError(17,10.11948);
   bjet_mass_t#bar{t}__121->SetBinError(18,9.293759);
   bjet_mass_t#bar{t}__121->SetBinError(19,7.583623);
   bjet_mass_t#bar{t}__121->SetBinError(20,6.495779);
   bjet_mass_t#bar{t}__121->SetBinError(21,5.469198);
   bjet_mass_t#bar{t}__121->SetBinError(22,4.33623);
   bjet_mass_t#bar{t}__121->SetBinError(23,4.213337);
   bjet_mass_t#bar{t}__121->SetBinError(24,3.237448);
   bjet_mass_t#bar{t}__121->SetBinError(25,3.011227);
   bjet_mass_t#bar{t}__121->SetBinError(26,3.022384);
   bjet_mass_t#bar{t}__121->SetBinError(27,2.429891);
   bjet_mass_t#bar{t}__121->SetBinError(28,2.26211);
   bjet_mass_t#bar{t}__121->SetBinError(29,1.944766);
   bjet_mass_t#bar{t}__121->SetBinError(30,2.054473);
   bjet_mass_t#bar{t}__121->SetBinError(31,1.688662);
   bjet_mass_t#bar{t}__121->SetBinError(32,1.324969);
   bjet_mass_t#bar{t}__121->SetBinError(33,1.03099);
   bjet_mass_t#bar{t}__121->SetBinError(34,1.643498);
   bjet_mass_t#bar{t}__121->SetBinError(35,1.362066);
   bjet_mass_t#bar{t}__121->SetBinError(36,1.233139);
   bjet_mass_t#bar{t}__121->SetBinError(37,1.046328);
   bjet_mass_t#bar{t}__121->SetBinError(38,1.014274);
   bjet_mass_t#bar{t}__121->SetBinError(39,0.6271662);
   bjet_mass_t#bar{t}__121->SetBinError(41,0.7196395);
   bjet_mass_t#bar{t}__121->SetBinError(42,0.5564647);
   bjet_mass_t#bar{t}__121->SetBinError(43,0.5944186);
   bjet_mass_t#bar{t}__121->SetBinError(44,0.6442722);
   bjet_mass_t#bar{t}__121->SetBinError(45,0.4699354);
   bjet_mass_t#bar{t}__121->SetBinError(47,0.3878116);
   bjet_mass_t#bar{t}__121->SetBinError(48,0.41871);
   bjet_mass_t#bar{t}__121->SetBinError(50,0.3575801);
   bjet_mass_t#bar{t}__121->SetBinError(51,1.124327);
   bjet_mass_t#bar{t}__121->SetEntries(457171);
   bjet_mass_t#bar{t}__121->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_mass_t#bar{t}__121->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_mass_t#bar{t}__121->SetMarkerColor(ci);
   bjet_mass_t#bar{t}__121->GetXaxis()->SetTitle("mass [GeV]");
   bjet_mass_t#bar{t}__121->GetXaxis()->SetLabelFont(42);
   bjet_mass_t#bar{t}__121->GetXaxis()->SetLabelSize(0.035);
   bjet_mass_t#bar{t}__121->GetXaxis()->SetTitleSize(0.035);
   bjet_mass_t#bar{t}__121->GetXaxis()->SetTitleFont(42);
   bjet_mass_t#bar{t}__121->GetYaxis()->SetTitle(" Events");
   bjet_mass_t#bar{t}__121->GetYaxis()->SetLabelFont(42);
   bjet_mass_t#bar{t}__121->GetYaxis()->SetLabelSize(0.035);
   bjet_mass_t#bar{t}__121->GetYaxis()->SetTitleSize(0.035);
   bjet_mass_t#bar{t}__121->GetYaxis()->SetTitleFont(42);
   bjet_mass_t#bar{t}__121->GetZaxis()->SetLabelFont(42);
   bjet_mass_t#bar{t}__121->GetZaxis()->SetLabelSize(0.035);
   bjet_mass_t#bar{t}__121->GetZaxis()->SetTitleSize(0.035);
   bjet_mass_t#bar{t}__121->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_mass_t#bar{t},"hist");
   
   TH1F *bjet_mass_Diboson__122 = new TH1F("bjet_mass_Diboson__122","Diboson",50,0,100);
   bjet_mass_Diboson__122->SetBinContent(2,1.453951);
   bjet_mass_Diboson__122->SetBinContent(3,14.70188);
   bjet_mass_Diboson__122->SetBinContent(4,38.26636);
   bjet_mass_Diboson__122->SetBinContent(5,40.6423);
   bjet_mass_Diboson__122->SetBinContent(6,17.3169);
   bjet_mass_Diboson__122->SetBinContent(7,18.43611);
   bjet_mass_Diboson__122->SetBinContent(8,7.304528);
   bjet_mass_Diboson__122->SetBinContent(9,9.972981);
   bjet_mass_Diboson__122->SetBinContent(10,4.970776);
   bjet_mass_Diboson__122->SetBinContent(11,5.042116);
   bjet_mass_Diboson__122->SetBinContent(12,4.336793);
   bjet_mass_Diboson__122->SetBinContent(13,4.724025);
   bjet_mass_Diboson__122->SetBinContent(14,1.489638);
   bjet_mass_Diboson__122->SetBinContent(15,1.866626);
   bjet_mass_Diboson__122->SetBinContent(16,1.162241);
   bjet_mass_Diboson__122->SetBinContent(17,1.845544);
   bjet_mass_Diboson__122->SetBinContent(18,1.52058);
   bjet_mass_Diboson__122->SetBinContent(19,0.8174824);
   bjet_mass_Diboson__122->SetBinContent(20,2.197939);
   bjet_mass_Diboson__122->SetBinContent(21,2.654902);
   bjet_mass_Diboson__122->SetBinContent(22,0.4268801);
   bjet_mass_Diboson__122->SetBinContent(23,1.391334);
   bjet_mass_Diboson__122->SetBinContent(26,0.7656003);
   bjet_mass_Diboson__122->SetBinContent(29,0.69929);
   bjet_mass_Diboson__122->SetBinContent(30,0.3817545);
   bjet_mass_Diboson__122->SetBinContent(31,0.003944129);
   bjet_mass_Diboson__122->SetBinContent(34,0.4029604);
   bjet_mass_Diboson__122->SetBinContent(35,0.3779458);
   bjet_mass_Diboson__122->SetBinContent(36,0.381347);
   bjet_mass_Diboson__122->SetBinContent(37,0.4392546);
   bjet_mass_Diboson__122->SetBinError(2,0.7343745);
   bjet_mass_Diboson__122->SetBinError(3,2.364654);
   bjet_mass_Diboson__122->SetBinError(4,3.860137);
   bjet_mass_Diboson__122->SetBinError(5,3.999157);
   bjet_mass_Diboson__122->SetBinError(6,2.559353);
   bjet_mass_Diboson__122->SetBinError(7,2.708062);
   bjet_mass_Diboson__122->SetBinError(8,1.643526);
   bjet_mass_Diboson__122->SetBinError(9,1.972365);
   bjet_mass_Diboson__122->SetBinError(10,1.400677);
   bjet_mass_Diboson__122->SetBinError(11,1.375526);
   bjet_mass_Diboson__122->SetBinError(12,1.283258);
   bjet_mass_Diboson__122->SetBinError(13,1.341187);
   bjet_mass_Diboson__122->SetBinError(14,0.728317);
   bjet_mass_Diboson__122->SetBinError(15,0.837917);
   bjet_mass_Diboson__122->SetBinError(16,0.6753892);
   bjet_mass_Diboson__122->SetBinError(17,0.8271201);
   bjet_mass_Diboson__122->SetBinError(18,0.7606885);
   bjet_mass_Diboson__122->SetBinError(19,0.5808625);
   bjet_mass_Diboson__122->SetBinError(20,0.9830506);
   bjet_mass_Diboson__122->SetBinError(21,1.001858);
   bjet_mass_Diboson__122->SetBinError(22,0.4268801);
   bjet_mass_Diboson__122->SetBinError(23,0.7056913);
   bjet_mass_Diboson__122->SetBinError(26,0.5413945);
   bjet_mass_Diboson__122->SetBinError(29,0.4970324);
   bjet_mass_Diboson__122->SetBinError(30,0.3817545);
   bjet_mass_Diboson__122->SetBinError(31,0.003944129);
   bjet_mass_Diboson__122->SetBinError(34,0.4029604);
   bjet_mass_Diboson__122->SetBinError(35,0.3779458);
   bjet_mass_Diboson__122->SetBinError(36,0.3813469);
   bjet_mass_Diboson__122->SetBinError(37,0.4392546);
   bjet_mass_Diboson__122->SetEntries(525);
   bjet_mass_Diboson__122->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_mass_Diboson__122->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_mass_Diboson__122->SetMarkerColor(ci);
   bjet_mass_Diboson__122->GetXaxis()->SetTitle("mass [GeV]");
   bjet_mass_Diboson__122->GetXaxis()->SetLabelFont(42);
   bjet_mass_Diboson__122->GetXaxis()->SetLabelSize(0.035);
   bjet_mass_Diboson__122->GetXaxis()->SetTitleSize(0.035);
   bjet_mass_Diboson__122->GetXaxis()->SetTitleFont(42);
   bjet_mass_Diboson__122->GetYaxis()->SetTitle(" Events");
   bjet_mass_Diboson__122->GetYaxis()->SetLabelFont(42);
   bjet_mass_Diboson__122->GetYaxis()->SetLabelSize(0.035);
   bjet_mass_Diboson__122->GetYaxis()->SetTitleSize(0.035);
   bjet_mass_Diboson__122->GetYaxis()->SetTitleFont(42);
   bjet_mass_Diboson__122->GetZaxis()->SetLabelFont(42);
   bjet_mass_Diboson__122->GetZaxis()->SetLabelSize(0.035);
   bjet_mass_Diboson__122->GetZaxis()->SetTitleSize(0.035);
   bjet_mass_Diboson__122->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_mass_Diboson,"hist");
   
   TH1F *bjet_mass_DY__123 = new TH1F("bjet_mass_DY__123","DY",50,0,100);
   bjet_mass_DY__123->SetBinContent(3,16.5393);
   bjet_mass_DY__123->SetBinContent(4,104.1878);
   bjet_mass_DY__123->SetBinContent(5,69.94917);
   bjet_mass_DY__123->SetBinContent(6,70.84422);
   bjet_mass_DY__123->SetBinContent(7,18.52124);
   bjet_mass_DY__123->SetBinContent(8,16.46047);
   bjet_mass_DY__123->SetBinContent(9,19.12663);
   bjet_mass_DY__123->SetBinContent(10,1.98969);
   bjet_mass_DY__123->SetBinContent(11,16.02805);
   bjet_mass_DY__123->SetBinContent(12,15.61073);
   bjet_mass_DY__123->SetBinContent(13,17.96951);
   bjet_mass_DY__123->SetBinContent(25,19.12663);
   bjet_mass_DY__123->SetBinError(3,16.5393);
   bjet_mass_DY__123->SetBinError(4,42.73703);
   bjet_mass_DY__123->SetBinError(5,34.51192);
   bjet_mass_DY__123->SetBinError(6,35.63076);
   bjet_mass_DY__123->SetBinError(7,18.52124);
   bjet_mass_DY__123->SetBinError(8,16.46048);
   bjet_mass_DY__123->SetBinError(9,19.12663);
   bjet_mass_DY__123->SetBinError(10,1.98969);
   bjet_mass_DY__123->SetBinError(11,16.02805);
   bjet_mass_DY__123->SetBinError(12,15.61073);
   bjet_mass_DY__123->SetBinError(13,17.96951);
   bjet_mass_DY__123->SetBinError(25,19.12663);
   bjet_mass_DY__123->SetEntries(24);
   bjet_mass_DY__123->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_mass_DY__123->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_mass_DY__123->SetMarkerColor(ci);
   bjet_mass_DY__123->GetXaxis()->SetTitle("mass [GeV]");
   bjet_mass_DY__123->GetXaxis()->SetLabelFont(42);
   bjet_mass_DY__123->GetXaxis()->SetLabelSize(0.035);
   bjet_mass_DY__123->GetXaxis()->SetTitleSize(0.035);
   bjet_mass_DY__123->GetXaxis()->SetTitleFont(42);
   bjet_mass_DY__123->GetYaxis()->SetTitle(" Events");
   bjet_mass_DY__123->GetYaxis()->SetLabelFont(42);
   bjet_mass_DY__123->GetYaxis()->SetLabelSize(0.035);
   bjet_mass_DY__123->GetYaxis()->SetTitleSize(0.035);
   bjet_mass_DY__123->GetYaxis()->SetTitleFont(42);
   bjet_mass_DY__123->GetZaxis()->SetLabelFont(42);
   bjet_mass_DY__123->GetZaxis()->SetLabelSize(0.035);
   bjet_mass_DY__123->GetZaxis()->SetTitleSize(0.035);
   bjet_mass_DY__123->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_mass_DY,"hist");
   
   TH1F *bjet_mass_W__124 = new TH1F("bjet_mass_W__124","W",50,0,100);
   bjet_mass_W__124->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_mass_W__124->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_mass_W__124->SetMarkerColor(ci);
   bjet_mass_W__124->GetXaxis()->SetTitle("mass [GeV]");
   bjet_mass_W__124->GetXaxis()->SetLabelFont(42);
   bjet_mass_W__124->GetXaxis()->SetLabelSize(0.035);
   bjet_mass_W__124->GetXaxis()->SetTitleSize(0.035);
   bjet_mass_W__124->GetXaxis()->SetTitleFont(42);
   bjet_mass_W__124->GetYaxis()->SetTitle(" Events");
   bjet_mass_W__124->GetYaxis()->SetLabelFont(42);
   bjet_mass_W__124->GetYaxis()->SetLabelSize(0.035);
   bjet_mass_W__124->GetYaxis()->SetTitleSize(0.035);
   bjet_mass_W__124->GetYaxis()->SetTitleFont(42);
   bjet_mass_W__124->GetZaxis()->SetLabelFont(42);
   bjet_mass_W__124->GetZaxis()->SetLabelSize(0.035);
   bjet_mass_W__124->GetZaxis()->SetTitleSize(0.035);
   bjet_mass_W__124->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_mass_W,"hist");
   
   TH1F *bjet_mass_SinglesPtop__125 = new TH1F("bjet_mass_SinglesPtop__125","Single top",50,0,100);
   bjet_mass_SinglesPtop__125->SetBinContent(2,12.19297);
   bjet_mass_SinglesPtop__125->SetBinContent(3,425.1741);
   bjet_mass_SinglesPtop__125->SetBinContent(4,1409.302);
   bjet_mass_SinglesPtop__125->SetBinContent(5,1587.493);
   bjet_mass_SinglesPtop__125->SetBinContent(6,1318.947);
   bjet_mass_SinglesPtop__125->SetBinContent(7,844.7472);
   bjet_mass_SinglesPtop__125->SetBinContent(8,561.0851);
   bjet_mass_SinglesPtop__125->SetBinContent(9,394.4231);
   bjet_mass_SinglesPtop__125->SetBinContent(10,234.4491);
   bjet_mass_SinglesPtop__125->SetBinContent(11,166.4453);
   bjet_mass_SinglesPtop__125->SetBinContent(12,123.7939);
   bjet_mass_SinglesPtop__125->SetBinContent(13,79.40822);
   bjet_mass_SinglesPtop__125->SetBinContent(14,46.45384);
   bjet_mass_SinglesPtop__125->SetBinContent(15,35.15298);
   bjet_mass_SinglesPtop__125->SetBinContent(16,25.93474);
   bjet_mass_SinglesPtop__125->SetBinContent(17,21.08655);
   bjet_mass_SinglesPtop__125->SetBinContent(18,22.96585);
   bjet_mass_SinglesPtop__125->SetBinContent(19,10.95963);
   bjet_mass_SinglesPtop__125->SetBinContent(20,11.69486);
   bjet_mass_SinglesPtop__125->SetBinContent(21,7.869304);
   bjet_mass_SinglesPtop__125->SetBinContent(22,7.179382);
   bjet_mass_SinglesPtop__125->SetBinContent(23,7.669213);
   bjet_mass_SinglesPtop__125->SetBinContent(24,1.362872);
   bjet_mass_SinglesPtop__125->SetBinContent(25,4.871318);
   bjet_mass_SinglesPtop__125->SetBinContent(26,3.199446);
   bjet_mass_SinglesPtop__125->SetBinContent(27,0.9396802);
   bjet_mass_SinglesPtop__125->SetBinContent(28,0.1506665);
   bjet_mass_SinglesPtop__125->SetBinContent(31,2.600322);
   bjet_mass_SinglesPtop__125->SetBinContent(32,2.615382);
   bjet_mass_SinglesPtop__125->SetBinContent(36,1.399856);
   bjet_mass_SinglesPtop__125->SetBinContent(38,1.279825);
   bjet_mass_SinglesPtop__125->SetBinContent(39,1.191233);
   bjet_mass_SinglesPtop__125->SetBinContent(41,2.921847);
   bjet_mass_SinglesPtop__125->SetBinContent(42,1.288945);
   bjet_mass_SinglesPtop__125->SetBinContent(44,1.328573);
   bjet_mass_SinglesPtop__125->SetBinContent(51,3.039886);
   bjet_mass_SinglesPtop__125->SetBinError(2,3.924102);
   bjet_mass_SinglesPtop__125->SetBinError(3,23.91104);
   bjet_mass_SinglesPtop__125->SetBinError(4,43.32778);
   bjet_mass_SinglesPtop__125->SetBinError(5,46.09354);
   bjet_mass_SinglesPtop__125->SetBinError(6,42.06013);
   bjet_mass_SinglesPtop__125->SetBinError(7,33.51926);
   bjet_mass_SinglesPtop__125->SetBinError(8,27.43407);
   bjet_mass_SinglesPtop__125->SetBinError(9,22.94852);
   bjet_mass_SinglesPtop__125->SetBinError(10,17.72189);
   bjet_mass_SinglesPtop__125->SetBinError(11,14.87568);
   bjet_mass_SinglesPtop__125->SetBinError(12,13.07451);
   bjet_mass_SinglesPtop__125->SetBinError(13,10.24311);
   bjet_mass_SinglesPtop__125->SetBinError(14,7.803955);
   bjet_mass_SinglesPtop__125->SetBinError(15,6.945359);
   bjet_mass_SinglesPtop__125->SetBinError(16,5.969561);
   bjet_mass_SinglesPtop__125->SetBinError(17,5.216119);
   bjet_mass_SinglesPtop__125->SetBinError(18,5.598382);
   bjet_mass_SinglesPtop__125->SetBinError(19,3.832454);
   bjet_mass_SinglesPtop__125->SetBinError(20,3.950964);
   bjet_mass_SinglesPtop__125->SetBinError(21,3.214189);
   bjet_mass_SinglesPtop__125->SetBinError(22,2.97708);
   bjet_mass_SinglesPtop__125->SetBinError(23,3.225878);
   bjet_mass_SinglesPtop__125->SetBinError(24,1.362872);
   bjet_mass_SinglesPtop__125->SetBinError(25,2.451231);
   bjet_mass_SinglesPtop__125->SetBinError(26,2.03153);
   bjet_mass_SinglesPtop__125->SetBinError(27,0.9297694);
   bjet_mass_SinglesPtop__125->SetBinError(28,0.1506665);
   bjet_mass_SinglesPtop__125->SetBinError(31,1.838742);
   bjet_mass_SinglesPtop__125->SetBinError(32,1.851328);
   bjet_mass_SinglesPtop__125->SetBinError(36,1.399856);
   bjet_mass_SinglesPtop__125->SetBinError(38,1.279825);
   bjet_mass_SinglesPtop__125->SetBinError(39,1.191233);
   bjet_mass_SinglesPtop__125->SetBinError(41,2.070498);
   bjet_mass_SinglesPtop__125->SetBinError(42,1.288945);
   bjet_mass_SinglesPtop__125->SetBinError(44,1.328573);
   bjet_mass_SinglesPtop__125->SetBinError(51,2.149955);
   bjet_mass_SinglesPtop__125->SetEntries(5952);
   bjet_mass_SinglesPtop__125->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_mass_SinglesPtop__125->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_mass_SinglesPtop__125->SetMarkerColor(ci);
   bjet_mass_SinglesPtop__125->GetXaxis()->SetTitle("mass [GeV]");
   bjet_mass_SinglesPtop__125->GetXaxis()->SetLabelFont(42);
   bjet_mass_SinglesPtop__125->GetXaxis()->SetLabelSize(0.035);
   bjet_mass_SinglesPtop__125->GetXaxis()->SetTitleSize(0.035);
   bjet_mass_SinglesPtop__125->GetXaxis()->SetTitleFont(42);
   bjet_mass_SinglesPtop__125->GetYaxis()->SetTitle(" Events");
   bjet_mass_SinglesPtop__125->GetYaxis()->SetLabelFont(42);
   bjet_mass_SinglesPtop__125->GetYaxis()->SetLabelSize(0.035);
   bjet_mass_SinglesPtop__125->GetYaxis()->SetTitleSize(0.035);
   bjet_mass_SinglesPtop__125->GetYaxis()->SetTitleFont(42);
   bjet_mass_SinglesPtop__125->GetZaxis()->SetLabelFont(42);
   bjet_mass_SinglesPtop__125->GetZaxis()->SetLabelSize(0.035);
   bjet_mass_SinglesPtop__125->GetZaxis()->SetTitleSize(0.035);
   bjet_mass_SinglesPtop__125->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_mass_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_mass_fx3035[51] = {
   1,
   3,
   5,
   7,
   9,
   11,
   13,
   15,
   17,
   19,
   21,
   23,
   25,
   27,
   29,
   31,
   33,
   35,
   37,
   39,
   41,
   43,
   45,
   47,
   49,
   51,
   53,
   55,
   57,
   59,
   61,
   63,
   65,
   67,
   69,
   71,
   73,
   75,
   77,
   79,
   81,
   83,
   85,
   87,
   89,
   91,
   93,
   95,
   97,
   99,
   0};
   Double_t Graph_from_bjet_mass_fy3035[51] = {
   2,
   358,
   9154,
   32994,
   38262,
   30418,
   20867,
   13138,
   8076,
   4954,
   2900,
   1872,
   1200,
   730,
   511,
   362,
   260,
   170,
   123,
   85,
   73,
   51,
   36,
   23,
   23,
   9,
   12,
   14,
   14,
   8,
   8,
   2,
   6,
   4,
   4,
   2,
   1,
   5,
   3,
   0,
   4,
   1,
   1,
   1,
   0,
   1,
   0,
   1,
   0,
   0,
   0};
   Double_t Graph_from_bjet_mass_felx3035[51] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0};
   Double_t Graph_from_bjet_mass_fely3035[51] = {
   1.29183,
   18.92089,
   95.67654,
   181.6425,
   195.6067,
   174.4076,
   144.4541,
   114.6211,
   89.86657,
   70.38466,
   53.85165,
   43.26662,
   34.64102,
   27.01851,
   22.60531,
   19.0263,
   16.12452,
   13.02584,
   11.07567,
   9.20156,
   8.524559,
   7.118073,
   5.972111,
   4.760806,
   4.760806,
   2.943511,
   3.415326,
   3.696566,
   3.696566,
   2.768432,
   2.768432,
   1.29183,
   2.379969,
   1.914367,
   1.914367,
   1.29183,
   0.8272525,
   2.159724,
   1.632727,
   0,
   1.914367,
   0.8272525,
   0.8272525,
   0.8272525,
   0,
   0.8272525,
   0,
   0.8272525,
   0,
   0,
   0};
   Double_t Graph_from_bjet_mass_fehx3035[51] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0};
   Double_t Graph_from_bjet_mass_fehy3035[51] = {
   2.63791,
   18.92089,
   95.67654,
   181.6425,
   195.6067,
   174.4076,
   144.4541,
   114.6211,
   89.86657,
   70.38466,
   53.85165,
   43.26662,
   34.64102,
   27.01851,
   22.60531,
   19.0263,
   16.12452,
   14.06429,
   12.12087,
   10.25594,
   9.583245,
   8.188292,
   7.055691,
   5.865355,
   5.865355,
   4.110286,
   4.559911,
   4.830479,
   4.830479,
   3.94522,
   3.94522,
   2.63791,
   3.583712,
   3.162815,
   3.162815,
   2.63791,
   2.29957,
   3.382539,
   2.918242,
   1.841055,
   3.162815,
   2.29957,
   2.29957,
   2.29957,
   1.841055,
   2.29957,
   1.841055,
   2.29957,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_bjet_mass_fx3035,Graph_from_bjet_mass_fy3035,Graph_from_bjet_mass_felx3035,Graph_from_bjet_mass_fehx3035,Graph_from_bjet_mass_fely3035,Graph_from_bjet_mass_fehy3035);
   grae->SetName("Graph_from_bjet_mass");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_mass3035 = new TH1F("Graph_Graph_from_bjet_mass3035","Data",100,0,110);
   Graph_Graph_from_bjet_mass3035->SetMinimum(0);
   Graph_Graph_from_bjet_mass3035->SetMaximum(42303.37);
   Graph_Graph_from_bjet_mass3035->SetDirectory(0);
   Graph_Graph_from_bjet_mass3035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_mass3035->SetLineColor(ci);
   Graph_Graph_from_bjet_mass3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_mass3035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_mass3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_mass3035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_mass3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_mass3035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_mass3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_mass3035);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_mass","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_mass_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_mass_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_mass_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_mass_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_mass_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-14.45783,0.4485106,106.0241,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__126 = new TH1F("ratioframe__126","t#bar{t}",50,0,100);
   ratioframe__126->SetMinimum(0.46);
   ratioframe__126->SetMaximum(1.54);
   ratioframe__126->SetEntries(463672);

   ci = TColor::GetColor("#cc0000");
   ratioframe__126->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__126->SetMarkerColor(ci);
   ratioframe__126->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__126->GetXaxis()->SetLabelFont(42);
   ratioframe__126->GetXaxis()->SetLabelSize(0);
   ratioframe__126->GetXaxis()->SetTitleSize(0);
   ratioframe__126->GetXaxis()->SetTitleOffset(0);
   ratioframe__126->GetXaxis()->SetTitleFont(42);
   ratioframe__126->GetYaxis()->SetTitle("Data/MC");
   ratioframe__126->GetYaxis()->SetNoExponent();
   ratioframe__126->GetYaxis()->SetNdivisions(5);
   ratioframe__126->GetYaxis()->SetLabelFont(42);
   ratioframe__126->GetYaxis()->SetLabelSize(0.18);
   ratioframe__126->GetYaxis()->SetTitleSize(0.2);
   ratioframe__126->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__126->GetYaxis()->SetTitleFont(42);
   ratioframe__126->GetZaxis()->SetLabelFont(42);
   ratioframe__126->GetZaxis()->SetLabelSize(0.035);
   ratioframe__126->GetZaxis()->SetTitleSize(0.035);
   ratioframe__126->GetZaxis()->SetTitleFont(42);
   ratioframe__126->Draw("");
   
   Double_t Graph_from_ratio_fx3036[50] = {
   1,
   3,
   5,
   7,
   9,
   11,
   13,
   15,
   17,
   19,
   21,
   23,
   25,
   27,
   29,
   31,
   33,
   35,
   37,
   39,
   41,
   43,
   45,
   47,
   49,
   51,
   53,
   55,
   57,
   59,
   61,
   63,
   65,
   67,
   69,
   71,
   73,
   75,
   77,
   79,
   81,
   83,
   85,
   87,
   89,
   91,
   93,
   95,
   97,
   99};
   Double_t Graph_from_ratio_fy3036[50] = {
   0.7577507,
   1.100068,
   0.9534238,
   0.9608809,
   0.9466112,
   0.921555,
   0.8946583,
   0.854587,
   0.8306221,
   0.8329433,
   0.7707253,
   0.7957841,
   0.8176866,
   0.796481,
   0.8197044,
   0.858245,
   0.9516918,
   0.7258789,
   0.8045458,
   0.7230232,
   0.8697611,
   0.9498388,
   0.6820006,
   0.8464401,
   0.4936922,
   0.3477666,
   0.7843215,
   1.108986,
   1.414563,
   0.7282361,
   0.8171635,
   0.2885538,
   2.184746,
   0.5928543,
   0.8535684,
   0.3799585,
   0.3213535,
   1.4104,
   1.445093,
   0,
   0.9596486,
   0.4817194,
   1.189799,
   0.4464954,
   0,
   0,
   0,
   2.388288,
   0,
   0};
   Double_t Graph_from_ratio_felx3036[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_ratio_fely3036[50] = {
   0.6117694,
   0.07089309,
   0.01203067,
   0.006437947,
   0.005828155,
   0.006357209,
   0.00735446,
   0.008804487,
   0.01094726,
   0.01386912,
   0.01692828,
   0.02213177,
   0.02940604,
   0.03442322,
   0.04261096,
   0.05342221,
   0.07116645,
   0.06508296,
   0.08527255,
   0.09150489,
   0.1216232,
   0.1624956,
   0.1330555,
   0.2076611,
   0.2310228,
   0.1260385,
   0.2627763,
   0.357086,
   0.4745913,
   0.2923695,
   0.3562202,
   0.2249771,
   1.211694,
   0.3316289,
   0.4984315,
   0.3017879,
   0.3420541,
   0.9055027,
   1.254707,
   0,
   0.6963613,
   0.5815424,
   1.457291,
   0.5347962,
   0,
   0,
   0,
   3.377549,
   0,
   0};
   Double_t Graph_from_ratio_fehx3036[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_ratio_fehy3036[50] = {
   0.6117694,
   0.07089309,
   0.01203067,
   0.006437947,
   0.005828155,
   0.006357209,
   0.00735446,
   0.008804487,
   0.01094726,
   0.01386912,
   0.01692828,
   0.02213177,
   0.02940604,
   0.03442322,
   0.04261096,
   0.05342221,
   0.07116645,
   0.06508296,
   0.08527255,
   0.09150489,
   0.1216232,
   0.1624956,
   0.1330555,
   0.2076611,
   0.2310228,
   0.1260385,
   0.2627763,
   0.357086,
   0.4745913,
   0.2923695,
   0.3562202,
   0.2249771,
   1.211694,
   0.3316289,
   0.4984315,
   0.3017879,
   0.3420541,
   0.9055027,
   1.254707,
   0,
   0.6963613,
   0.5815424,
   1.457291,
   0.5347962,
   0,
   0,
   0,
   3.377549,
   0,
   0};
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3036,Graph_from_ratio_fy3036,Graph_from_ratio_felx3036,Graph_from_ratio_fehx3036,Graph_from_ratio_fely3036,Graph_from_ratio_fehy3036);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3036 = new TH1F("Graph_Graph_from_ratio3036","Data",100,0,110);
   Graph_Graph_from_ratio3036->SetMinimum(-1.664771);
   Graph_Graph_from_ratio3036->SetMaximum(6.441346);
   Graph_Graph_from_ratio3036->SetDirectory(0);
   Graph_Graph_from_ratio3036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3036->SetLineColor(ci);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3036);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
