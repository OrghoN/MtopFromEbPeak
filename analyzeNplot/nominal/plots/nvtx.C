void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 10 16:18:41 2018) by ROOT version6.08/07
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
   p1->Range(-5.783133,-1664.091,42.40964,12204.17);
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
   
   TH1F *frame__113 = new TH1F("frame__113","t#bar{t}",40,0,40);
   frame__113->SetMinimum(0.1);
   frame__113->SetMaximum(12065.49);
   frame__113->SetEntries(365945);
   frame__113->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__113->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__113->SetMarkerColor(ci);
   frame__113->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__113->GetXaxis()->SetLabelFont(42);
   frame__113->GetXaxis()->SetLabelSize(0.035);
   frame__113->GetXaxis()->SetTitleSize(0.035);
   frame__113->GetXaxis()->SetTitleFont(42);
   frame__113->GetYaxis()->SetTitle(" Events");
   frame__113->GetYaxis()->SetNoExponent();
   frame__113->GetYaxis()->SetLabelFont(42);
   frame__113->GetYaxis()->SetTitleSize(0.045);
   frame__113->GetYaxis()->SetTitleOffset(1.3);
   frame__113->GetYaxis()->SetTitleFont(42);
   frame__113->GetZaxis()->SetLabelFont(42);
   frame__113->GetZaxis()->SetLabelSize(0.035);
   frame__113->GetZaxis()->SetTitleSize(0.035);
   frame__113->GetZaxis()->SetTitleFont(42);
   frame__113->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_17 = new TH1F("mc_stack_17","mc",40,0,40);
   mc_stack_17->SetMinimum(-9.345868e-07);
   mc_stack_17->SetMaximum(9745.201);
   mc_stack_17->SetDirectory(0);
   mc_stack_17->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_17->SetLineColor(ci);
   mc_stack_17->GetXaxis()->SetLabelFont(42);
   mc_stack_17->GetXaxis()->SetLabelSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleFont(42);
   mc_stack_17->GetYaxis()->SetLabelFont(42);
   mc_stack_17->GetYaxis()->SetLabelSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleFont(42);
   mc_stack_17->GetZaxis()->SetLabelFont(42);
   mc_stack_17->GetZaxis()->SetLabelSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_17);
   
   
   TH1F *nvtx_t#bar{t}__114 = new TH1F("nvtx_t#bar{t}__114","t#bar{t}",40,0,40);
   nvtx_t#bar{t}__114->SetBinContent(2,2.562006);
   nvtx_t#bar{t}__114->SetBinContent(3,10.0119);
   nvtx_t#bar{t}__114->SetBinContent(4,25.13856);
   nvtx_t#bar{t}__114->SetBinContent(5,68.96152);
   nvtx_t#bar{t}__114->SetBinContent(6,155.562);
   nvtx_t#bar{t}__114->SetBinContent(7,341.6103);
   nvtx_t#bar{t}__114->SetBinContent(8,649.5957);
   nvtx_t#bar{t}__114->SetBinContent(9,1179.327);
   nvtx_t#bar{t}__114->SetBinContent(10,1871.554);
   nvtx_t#bar{t}__114->SetBinContent(11,2762.877);
   nvtx_t#bar{t}__114->SetBinContent(12,3750.854);
   nvtx_t#bar{t}__114->SetBinContent(13,4813.021);
   nvtx_t#bar{t}__114->SetBinContent(14,5909.667);
   nvtx_t#bar{t}__114->SetBinContent(15,6853.557);
   nvtx_t#bar{t}__114->SetBinContent(16,7678.413);
   nvtx_t#bar{t}__114->SetBinContent(17,8273.009);
   nvtx_t#bar{t}__114->SetBinContent(18,8742.105);
   nvtx_t#bar{t}__114->SetBinContent(19,8830.601);
   nvtx_t#bar{t}__114->SetBinContent(20,8846.322);
   nvtx_t#bar{t}__114->SetBinContent(21,8532.307);
   nvtx_t#bar{t}__114->SetBinContent(22,8186.598);
   nvtx_t#bar{t}__114->SetBinContent(23,7518.168);
   nvtx_t#bar{t}__114->SetBinContent(24,6920.785);
   nvtx_t#bar{t}__114->SetBinContent(25,6148.84);
   nvtx_t#bar{t}__114->SetBinContent(26,5457.532);
   nvtx_t#bar{t}__114->SetBinContent(27,4732.139);
   nvtx_t#bar{t}__114->SetBinContent(28,3926.77);
   nvtx_t#bar{t}__114->SetBinContent(29,3297.779);
   nvtx_t#bar{t}__114->SetBinContent(30,2698.574);
   nvtx_t#bar{t}__114->SetBinContent(31,2231.021);
   nvtx_t#bar{t}__114->SetBinContent(32,1780.446);
   nvtx_t#bar{t}__114->SetBinContent(33,1404.175);
   nvtx_t#bar{t}__114->SetBinContent(34,1110.572);
   nvtx_t#bar{t}__114->SetBinContent(35,863.9863);
   nvtx_t#bar{t}__114->SetBinContent(36,627.7006);
   nvtx_t#bar{t}__114->SetBinContent(37,490.9953);
   nvtx_t#bar{t}__114->SetBinContent(38,402.2416);
   nvtx_t#bar{t}__114->SetBinContent(39,266.0336);
   nvtx_t#bar{t}__114->SetBinContent(40,200.1754);
   nvtx_t#bar{t}__114->SetBinContent(41,539.7565);
   nvtx_t#bar{t}__114->SetBinError(2,0.7411694);
   nvtx_t#bar{t}__114->SetBinError(3,1.584981);
   nvtx_t#bar{t}__114->SetBinError(4,2.609561);
   nvtx_t#bar{t}__114->SetBinError(5,4.438539);
   nvtx_t#bar{t}__114->SetBinError(6,6.8606);
   nvtx_t#bar{t}__114->SetBinError(7,10.44306);
   nvtx_t#bar{t}__114->SetBinError(8,14.74589);
   nvtx_t#bar{t}__114->SetBinError(9,20.32084);
   nvtx_t#bar{t}__114->SetBinError(10,25.92133);
   nvtx_t#bar{t}__114->SetBinError(11,32.0428);
   nvtx_t#bar{t}__114->SetBinError(12,37.7285);
   nvtx_t#bar{t}__114->SetBinError(13,43.14853);
   nvtx_t#bar{t}__114->SetBinError(14,48.1949);
   nvtx_t#bar{t}__114->SetBinError(15,52.2831);
   nvtx_t#bar{t}__114->SetBinError(16,55.71614);
   nvtx_t#bar{t}__114->SetBinError(17,58.14388);
   nvtx_t#bar{t}__114->SetBinError(18,60.09102);
   nvtx_t#bar{t}__114->SetBinError(19,60.73117);
   nvtx_t#bar{t}__114->SetBinError(20,61.05951);
   nvtx_t#bar{t}__114->SetBinError(21,60.27061);
   nvtx_t#bar{t}__114->SetBinError(22,59.21454);
   nvtx_t#bar{t}__114->SetBinError(23,56.98262);
   nvtx_t#bar{t}__114->SetBinError(24,54.81125);
   nvtx_t#bar{t}__114->SetBinError(25,51.6883);
   nvtx_t#bar{t}__114->SetBinError(26,48.68847);
   nvtx_t#bar{t}__114->SetBinError(27,45.22499);
   nvtx_t#bar{t}__114->SetBinError(28,40.97046);
   nvtx_t#bar{t}__114->SetBinError(29,37.37539);
   nvtx_t#bar{t}__114->SetBinError(30,33.54333);
   nvtx_t#bar{t}__114->SetBinError(31,30.25637);
   nvtx_t#bar{t}__114->SetBinError(32,26.73853);
   nvtx_t#bar{t}__114->SetBinError(33,23.32787);
   nvtx_t#bar{t}__114->SetBinError(34,20.40331);
   nvtx_t#bar{t}__114->SetBinError(35,17.83819);
   nvtx_t#bar{t}__114->SetBinError(36,14.77329);
   nvtx_t#bar{t}__114->SetBinError(37,12.83389);
   nvtx_t#bar{t}__114->SetBinError(38,11.36984);
   nvtx_t#bar{t}__114->SetBinError(39,9.112085);
   nvtx_t#bar{t}__114->SetBinError(40,7.632594);
   nvtx_t#bar{t}__114->SetBinError(41,11.23049);
   nvtx_t#bar{t}__114->SetEntries(360257);
   nvtx_t#bar{t}__114->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__114->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__114->SetMarkerColor(ci);
   nvtx_t#bar{t}__114->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}__114->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__114->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__114->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__114->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__114->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}__114->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__114->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__114->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__114->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__114->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__114->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__114->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__114->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t},"hist");
   
   TH1F *nvtx_Diboson__115 = new TH1F("nvtx_Diboson__115","Diboson",40,0,40);
   nvtx_Diboson__115->SetBinContent(5,0.3669195);
   nvtx_Diboson__115->SetBinContent(7,0.09181011);
   nvtx_Diboson__115->SetBinContent(8,1.146145);
   nvtx_Diboson__115->SetBinContent(9,1.543194);
   nvtx_Diboson__115->SetBinContent(10,2.768166);
   nvtx_Diboson__115->SetBinContent(11,5.098091);
   nvtx_Diboson__115->SetBinContent(12,4.497828);
   nvtx_Diboson__115->SetBinContent(13,4.938346);
   nvtx_Diboson__115->SetBinContent(14,5.920607);
   nvtx_Diboson__115->SetBinContent(15,8.456815);
   nvtx_Diboson__115->SetBinContent(16,9.319703);
   nvtx_Diboson__115->SetBinContent(17,10.07892);
   nvtx_Diboson__115->SetBinContent(18,9.204708);
   nvtx_Diboson__115->SetBinContent(19,10.14536);
   nvtx_Diboson__115->SetBinContent(20,9.527121);
   nvtx_Diboson__115->SetBinContent(21,13.44261);
   nvtx_Diboson__115->SetBinContent(22,9.876287);
   nvtx_Diboson__115->SetBinContent(23,11.63869);
   nvtx_Diboson__115->SetBinContent(24,6.451887);
   nvtx_Diboson__115->SetBinContent(25,10.72303);
   nvtx_Diboson__115->SetBinContent(26,6.973422);
   nvtx_Diboson__115->SetBinContent(27,7.719114);
   nvtx_Diboson__115->SetBinContent(28,7.10872);
   nvtx_Diboson__115->SetBinContent(29,4.093088);
   nvtx_Diboson__115->SetBinContent(30,4.55119);
   nvtx_Diboson__115->SetBinContent(31,1.732036);
   nvtx_Diboson__115->SetBinContent(32,3.091868);
   nvtx_Diboson__115->SetBinContent(33,3.079247);
   nvtx_Diboson__115->SetBinContent(34,2.802826);
   nvtx_Diboson__115->SetBinContent(35,1.436749);
   nvtx_Diboson__115->SetBinContent(36,1.35002);
   nvtx_Diboson__115->SetBinContent(37,0.6941931);
   nvtx_Diboson__115->SetBinContent(38,0.09624204);
   nvtx_Diboson__115->SetBinContent(39,1.112209);
   nvtx_Diboson__115->SetBinContent(40,0.02195357);
   nvtx_Diboson__115->SetBinContent(41,1.052072);
   nvtx_Diboson__115->SetBinError(5,0.3669195);
   nvtx_Diboson__115->SetBinError(7,0.09181012);
   nvtx_Diboson__115->SetBinError(8,0.5971013);
   nvtx_Diboson__115->SetBinError(9,0.6923629);
   nvtx_Diboson__115->SetBinError(10,0.9869253);
   nvtx_Diboson__115->SetBinError(11,1.334074);
   nvtx_Diboson__115->SetBinError(12,1.263528);
   nvtx_Diboson__115->SetBinError(13,1.373103);
   nvtx_Diboson__115->SetBinError(14,1.490765);
   nvtx_Diboson__115->SetBinError(15,1.776876);
   nvtx_Diboson__115->SetBinError(16,1.90657);
   nvtx_Diboson__115->SetBinError(17,1.980869);
   nvtx_Diboson__115->SetBinError(18,1.923862);
   nvtx_Diboson__115->SetBinError(19,1.996713);
   nvtx_Diboson__115->SetBinError(20,1.949833);
   nvtx_Diboson__115->SetBinError(21,2.350604);
   nvtx_Diboson__115->SetBinError(22,2.022037);
   nvtx_Diboson__115->SetBinError(23,2.17853);
   nvtx_Diboson__115->SetBinError(24,1.591758);
   nvtx_Diboson__115->SetBinError(25,2.106668);
   nvtx_Diboson__115->SetBinError(26,1.708095);
   nvtx_Diboson__115->SetBinError(27,1.772229);
   nvtx_Diboson__115->SetBinError(28,1.74729);
   nvtx_Diboson__115->SetBinError(29,1.248554);
   nvtx_Diboson__115->SetBinError(30,1.311594);
   nvtx_Diboson__115->SetBinError(31,0.8202787);
   nvtx_Diboson__115->SetBinError(32,1.10039);
   nvtx_Diboson__115->SetBinError(33,1.042974);
   nvtx_Diboson__115->SetBinError(34,1.008988);
   nvtx_Diboson__115->SetBinError(35,0.7336144);
   nvtx_Diboson__115->SetBinError(36,0.6845534);
   nvtx_Diboson__115->SetBinError(37,0.3930007);
   nvtx_Diboson__115->SetBinError(38,0.07870088);
   nvtx_Diboson__115->SetBinError(39,0.5869388);
   nvtx_Diboson__115->SetBinError(40,0.0204632);
   nvtx_Diboson__115->SetBinError(41,0.394902);
   nvtx_Diboson__115->SetEntries(511);
   nvtx_Diboson__115->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__115->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__115->SetMarkerColor(ci);
   nvtx_Diboson__115->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson__115->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson__115->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson__115->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson__115->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson__115->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson__115->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson__115->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson__115->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson__115->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson__115->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson__115->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson__115->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson__115->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson,"hist");
   
   TH1F *nvtx_DY__116 = new TH1F("nvtx_DY__116","DY",40,0,40);
   nvtx_DY__116->SetBinContent(13,33.40588);
   nvtx_DY__116->SetBinContent(14,16.99263);
   nvtx_DY__116->SetBinContent(15,50.66055);
   nvtx_DY__116->SetBinContent(16,31.8248);
   nvtx_DY__116->SetBinContent(18,17.70657);
   nvtx_DY__116->SetBinContent(21,34.73302);
   nvtx_DY__116->SetBinContent(22,20.71554);
   nvtx_DY__116->SetBinContent(23,34.53849);
   nvtx_DY__116->SetBinContent(26,16.98714);
   nvtx_DY__116->SetBinContent(27,15.6875);
   nvtx_DY__116->SetBinContent(30,20.7678);
   nvtx_DY__116->SetBinContent(31,26.93724);
   nvtx_DY__116->SetBinContent(34,17.97306);
   nvtx_DY__116->SetBinContent(41,0.3771112);
   nvtx_DY__116->SetBinError(13,23.62208);
   nvtx_DY__116->SetBinError(14,16.99263);
   nvtx_DY__116->SetBinError(15,29.26659);
   nvtx_DY__116->SetBinError(16,22.52096);
   nvtx_DY__116->SetBinError(18,17.70657);
   nvtx_DY__116->SetBinError(21,24.61815);
   nvtx_DY__116->SetBinError(22,20.71554);
   nvtx_DY__116->SetBinError(23,24.43033);
   nvtx_DY__116->SetBinError(26,16.98714);
   nvtx_DY__116->SetBinError(27,15.6875);
   nvtx_DY__116->SetBinError(30,20.7678);
   nvtx_DY__116->SetBinError(31,20.05369);
   nvtx_DY__116->SetBinError(34,17.97306);
   nvtx_DY__116->SetBinError(41,0.3771112);
   nvtx_DY__116->SetEntries(21);
   nvtx_DY__116->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__116->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__116->SetMarkerColor(ci);
   nvtx_DY__116->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY__116->GetXaxis()->SetLabelFont(42);
   nvtx_DY__116->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY__116->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY__116->GetXaxis()->SetTitleFont(42);
   nvtx_DY__116->GetYaxis()->SetTitle(" Events");
   nvtx_DY__116->GetYaxis()->SetLabelFont(42);
   nvtx_DY__116->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY__116->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY__116->GetYaxis()->SetTitleFont(42);
   nvtx_DY__116->GetZaxis()->SetLabelFont(42);
   nvtx_DY__116->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY__116->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY__116->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY,"hist");
   
   TH1F *nvtx_W__117 = new TH1F("nvtx_W__117","W",40,0,40);
   nvtx_W__117->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__117->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__117->SetMarkerColor(ci);
   nvtx_W__117->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W__117->GetXaxis()->SetLabelFont(42);
   nvtx_W__117->GetXaxis()->SetLabelSize(0.035);
   nvtx_W__117->GetXaxis()->SetTitleSize(0.035);
   nvtx_W__117->GetXaxis()->SetTitleFont(42);
   nvtx_W__117->GetYaxis()->SetTitle(" Events");
   nvtx_W__117->GetYaxis()->SetLabelFont(42);
   nvtx_W__117->GetYaxis()->SetLabelSize(0.035);
   nvtx_W__117->GetYaxis()->SetTitleSize(0.035);
   nvtx_W__117->GetYaxis()->SetTitleFont(42);
   nvtx_W__117->GetZaxis()->SetLabelFont(42);
   nvtx_W__117->GetZaxis()->SetLabelSize(0.035);
   nvtx_W__117->GetZaxis()->SetTitleSize(0.035);
   nvtx_W__117->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W,"hist");
   
   TH1F *nvtx_SinglesPtop__118 = new TH1F("nvtx_SinglesPtop__118","Single top",40,0,40);
   nvtx_SinglesPtop__118->SetBinContent(2,0.599883);
   nvtx_SinglesPtop__118->SetBinContent(3,0.6295625);
   nvtx_SinglesPtop__118->SetBinContent(5,3.39625);
   nvtx_SinglesPtop__118->SetBinContent(6,9.10181);
   nvtx_SinglesPtop__118->SetBinContent(7,14.4647);
   nvtx_SinglesPtop__118->SetBinContent(8,47.10493);
   nvtx_SinglesPtop__118->SetBinContent(9,55.53765);
   nvtx_SinglesPtop__118->SetBinContent(10,81.44025);
   nvtx_SinglesPtop__118->SetBinContent(11,108.1657);
   nvtx_SinglesPtop__118->SetBinContent(12,161.6067);
   nvtx_SinglesPtop__118->SetBinContent(13,247.0246);
   nvtx_SinglesPtop__118->SetBinContent(14,268.3194);
   nvtx_SinglesPtop__118->SetBinContent(15,298.417);
   nvtx_SinglesPtop__118->SetBinContent(16,376.8653);
   nvtx_SinglesPtop__118->SetBinContent(17,365.1441);
   nvtx_SinglesPtop__118->SetBinContent(18,436.1141);
   nvtx_SinglesPtop__118->SetBinContent(19,404.8253);
   nvtx_SinglesPtop__118->SetBinContent(20,425.2941);
   nvtx_SinglesPtop__118->SetBinContent(21,394.7953);
   nvtx_SinglesPtop__118->SetBinContent(22,361.4669);
   nvtx_SinglesPtop__118->SetBinContent(23,331.4504);
   nvtx_SinglesPtop__118->SetBinContent(24,296.874);
   nvtx_SinglesPtop__118->SetBinContent(25,297.5699);
   nvtx_SinglesPtop__118->SetBinContent(26,263.9673);
   nvtx_SinglesPtop__118->SetBinContent(27,247.4348);
   nvtx_SinglesPtop__118->SetBinContent(28,172.4242);
   nvtx_SinglesPtop__118->SetBinContent(29,152.3854);
   nvtx_SinglesPtop__118->SetBinContent(30,142.146);
   nvtx_SinglesPtop__118->SetBinContent(31,121.1571);
   nvtx_SinglesPtop__118->SetBinContent(32,82.86644);
   nvtx_SinglesPtop__118->SetBinContent(33,67.37107);
   nvtx_SinglesPtop__118->SetBinContent(34,52.68162);
   nvtx_SinglesPtop__118->SetBinContent(35,38.19365);
   nvtx_SinglesPtop__118->SetBinContent(36,30.36678);
   nvtx_SinglesPtop__118->SetBinContent(37,17.04907);
   nvtx_SinglesPtop__118->SetBinContent(38,20.12409);
   nvtx_SinglesPtop__118->SetBinContent(39,11.87034);
   nvtx_SinglesPtop__118->SetBinContent(40,7.838285);
   nvtx_SinglesPtop__118->SetBinContent(41,24.28397);
   nvtx_SinglesPtop__118->SetBinError(2,0.5998829);
   nvtx_SinglesPtop__118->SetBinError(3,0.6295625);
   nvtx_SinglesPtop__118->SetBinError(5,1.761843);
   nvtx_SinglesPtop__118->SetBinError(6,3.168554);
   nvtx_SinglesPtop__118->SetBinError(7,3.579887);
   nvtx_SinglesPtop__118->SetBinError(8,7.167945);
   nvtx_SinglesPtop__118->SetBinError(9,7.960236);
   nvtx_SinglesPtop__118->SetBinError(10,9.581911);
   nvtx_SinglesPtop__118->SetBinError(11,11.36632);
   nvtx_SinglesPtop__118->SetBinError(12,14.12865);
   nvtx_SinglesPtop__118->SetBinError(13,17.77617);
   nvtx_SinglesPtop__118->SetBinError(14,18.58171);
   nvtx_SinglesPtop__118->SetBinError(15,19.66219);
   nvtx_SinglesPtop__118->SetBinError(16,22.31968);
   nvtx_SinglesPtop__118->SetBinError(17,22.10865);
   nvtx_SinglesPtop__118->SetBinError(18,24.29003);
   nvtx_SinglesPtop__118->SetBinError(19,23.42982);
   nvtx_SinglesPtop__118->SetBinError(20,24.12603);
   nvtx_SinglesPtop__118->SetBinError(21,23.34488);
   nvtx_SinglesPtop__118->SetBinError(22,22.5275);
   nvtx_SinglesPtop__118->SetBinError(23,21.63856);
   nvtx_SinglesPtop__118->SetBinError(24,20.43867);
   nvtx_SinglesPtop__118->SetBinError(25,20.46513);
   nvtx_SinglesPtop__118->SetBinError(26,19.30615);
   nvtx_SinglesPtop__118->SetBinError(27,18.68835);
   nvtx_SinglesPtop__118->SetBinError(28,15.6317);
   nvtx_SinglesPtop__118->SetBinError(29,14.65401);
   nvtx_SinglesPtop__118->SetBinError(30,13.87727);
   nvtx_SinglesPtop__118->SetBinError(31,12.68941);
   nvtx_SinglesPtop__118->SetBinError(32,10.38759);
   nvtx_SinglesPtop__118->SetBinError(33,9.217772);
   nvtx_SinglesPtop__118->SetBinError(34,7.885163);
   nvtx_SinglesPtop__118->SetBinError(35,6.416066);
   nvtx_SinglesPtop__118->SetBinError(36,5.6512);
   nvtx_SinglesPtop__118->SetBinError(37,4.382412);
   nvtx_SinglesPtop__118->SetBinError(38,4.686496);
   nvtx_SinglesPtop__118->SetBinError(39,3.524281);
   nvtx_SinglesPtop__118->SetBinError(40,2.479579);
   nvtx_SinglesPtop__118->SetBinError(41,3.979522);
   nvtx_SinglesPtop__118->SetEntries(5156);
   nvtx_SinglesPtop__118->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__118->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__118->SetMarkerColor(ci);
   nvtx_SinglesPtop__118->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop__118->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__118->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__118->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__118->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__118->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop__118->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__118->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__118->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__118->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__118->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__118->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__118->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__118->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3033[41] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5,
   0};
   Double_t Graph_from_nvtx_fy3033[41] = {
   0,
   9,
   16,
   47,
   114,
   292,
   613,
   1089,
   1901,
   2810,
   3803,
   5064,
   6214,
   7335,
   8136,
   8625,
   8835,
   8912,
   8427,
   8134,
   7499,
   6736,
   6017,
   5270,
   4515,
   3885,
   3212,
   2710,
   2247,
   1739,
   1359,
   1189,
   890,
   736,
   580,
   451,
   336,
   291,
   225,
   162,
   0};
   Double_t Graph_from_nvtx_felx3033[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fely3033[41] = {
   0,
   2.943511,
   3.957873,
   6.831306,
   10.66162,
   17.08801,
   24.75884,
   33,
   43.60046,
   53.00943,
   61.66847,
   71.16179,
   78.82893,
   85.64461,
   90.19978,
   92.87088,
   93.99468,
   94.40339,
   91.79869,
   90.18869,
   86.59677,
   82.07314,
   77.56932,
   72.59477,
   67.19375,
   62.32977,
   56.67451,
   52.05766,
   47.40253,
   41.70132,
   36.86462,
   34.48188,
   29.83287,
   27.12932,
   24.08319,
   21.23676,
   18.3303,
   17.05872,
   15,
   12.71504,
   0};
   Double_t Graph_from_nvtx_fehx3033[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fehy3033[41] = {
   1.841055,
   4.110286,
   5.083169,
   7.904454,
   11.70857,
   17.08801,
   24.75884,
   33,
   43.60046,
   53.00943,
   61.66847,
   71.16179,
   78.82893,
   85.64461,
   90.19978,
   92.87088,
   93.99468,
   94.40339,
   91.79869,
   90.18869,
   86.59677,
   82.07314,
   77.56932,
   72.59477,
   67.19375,
   62.32977,
   56.67451,
   52.05766,
   47.40253,
   41.70132,
   36.86462,
   34.48188,
   29.83287,
   27.12932,
   24.08319,
   21.23676,
   18.3303,
   17.05872,
   15,
   13.75443,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_nvtx_fx3033,Graph_from_nvtx_fy3033,Graph_from_nvtx_felx3033,Graph_from_nvtx_fehx3033,Graph_from_nvtx_fely3033,Graph_from_nvtx_fehy3033);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3033 = new TH1F("Graph_Graph_from_nvtx3033","Data",100,0,44);
   Graph_Graph_from_nvtx3033->SetMinimum(0);
   Graph_Graph_from_nvtx3033->SetMaximum(9907.044);
   Graph_Graph_from_nvtx3033->SetDirectory(0);
   Graph_Graph_from_nvtx3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3033->SetLineColor(ci);
   Graph_Graph_from_nvtx3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3033);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nvtx","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nvtx_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nvtx_DY","DY","f");

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
   entry=leg->AddEntry("nvtx_W","W","f");

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
   entry=leg->AddEntry("nvtx_Single top","Single top","f");

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
   p2->Range(-5.783133,0.4485106,42.40964,1.597447);
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
   
   TH1F *ratioframe__119 = new TH1F("ratioframe__119","t#bar{t}",40,0,40);
   ratioframe__119->SetMinimum(0.46);
   ratioframe__119->SetMaximum(1.54);
   ratioframe__119->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetMarkerColor(ci);
   ratioframe__119->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__119->GetXaxis()->SetLabelFont(42);
   ratioframe__119->GetXaxis()->SetLabelSize(0);
   ratioframe__119->GetXaxis()->SetTitleSize(0);
   ratioframe__119->GetXaxis()->SetTitleOffset(0);
   ratioframe__119->GetXaxis()->SetTitleFont(42);
   ratioframe__119->GetYaxis()->SetTitle("Data/MC");
   ratioframe__119->GetYaxis()->SetNoExponent();
   ratioframe__119->GetYaxis()->SetNdivisions(5);
   ratioframe__119->GetYaxis()->SetLabelFont(42);
   ratioframe__119->GetYaxis()->SetLabelSize(0.18);
   ratioframe__119->GetYaxis()->SetTitleSize(0.2);
   ratioframe__119->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__119->GetYaxis()->SetTitleFont(42);
   ratioframe__119->GetZaxis()->SetLabelFont(42);
   ratioframe__119->GetZaxis()->SetLabelSize(0.035);
   ratioframe__119->GetZaxis()->SetTitleSize(0.035);
   ratioframe__119->GetZaxis()->SetTitleFont(42);
   ratioframe__119->Draw("");
   
   Double_t Graph_from_ratio_fx3034[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t Graph_from_ratio_fy3034[40] = {
   0,
   2.8464,
   1.503552,
   1.869638,
   1.567556,
   1.773311,
   1.721104,
   1.560515,
   1.537518,
   1.436779,
   1.322258,
   1.29284,
   1.218816,
   1.182893,
   1.128262,
   1.065285,
   1.021596,
   0.9681556,
   0.9114634,
   0.8764006,
   0.8355173,
   0.7852045,
   0.7620512,
   0.7295015,
   0.6992267,
   0.6761861,
   0.6420173,
   0.6599611,
   0.6505015,
   0.6067607,
   0.5708053,
   0.6370538,
   0.6035431,
   0.6216061,
   0.6418651,
   0.6839371,
   0.6604571,
   0.6888194,
   0.8064049,
   0.7787126};
   Double_t Graph_from_ratio_felx3034[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3034[40] = {
   0,
   1.279464,
   0.4464926,
   0.3347253,
   0.179478,
   0.1318805,
   0.08762628,
   0.05985159,
   0.04450644,
   0.03387247,
   0.02654095,
   0.02251786,
   0.01988756,
   0.0172754,
   0.0159339,
   0.01424022,
   0.01312167,
   0.01245613,
   0.01182384,
   0.01152804,
   0.01160142,
   0.01134841,
   0.01169291,
   0.01165772,
   0.01202411,
   0.01263825,
   0.01310971,
   0.01450753,
   0.01566939,
   0.01703454,
   0.01802159,
   0.02091251,
   0.02269055,
   0.02731629,
   0.02986512,
   0.03615005,
   0.04010551,
   0.04508399,
   0.06074833,
   0.06815842};
   Double_t Graph_from_ratio_fehx3034[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3034[40] = {
   0,
   1.279464,
   0.4464926,
   0.3347253,
   0.179478,
   0.1318805,
   0.08762628,
   0.05985159,
   0.04450644,
   0.03387247,
   0.02654095,
   0.02251786,
   0.01988756,
   0.0172754,
   0.0159339,
   0.01424022,
   0.01312167,
   0.01245613,
   0.01182384,
   0.01152804,
   0.01160142,
   0.01134841,
   0.01169291,
   0.01165772,
   0.01202411,
   0.01263825,
   0.01310971,
   0.01450753,
   0.01566939,
   0.01703454,
   0.01802159,
   0.02091251,
   0.02269055,
   0.02731629,
   0.02986512,
   0.03615005,
   0.04010551,
   0.04508399,
   0.06074833,
   0.06815842};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3034,Graph_from_ratio_fy3034,Graph_from_ratio_felx3034,Graph_from_ratio_fehx3034,Graph_from_ratio_fely3034,Graph_from_ratio_fehy3034);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3034 = new TH1F("Graph_Graph_from_ratio3034","Data",100,0,44);
   Graph_Graph_from_ratio3034->SetMinimum(0);
   Graph_Graph_from_ratio3034->SetMaximum(4.538451);
   Graph_Graph_from_ratio3034->SetDirectory(0);
   Graph_Graph_from_ratio3034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3034->SetLineColor(ci);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3034);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
