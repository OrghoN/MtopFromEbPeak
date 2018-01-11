void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 09:29:23 2018) by ROOT version6.08/07
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
   
   TH1F *frame__71 = new TH1F("frame__71","t#bar{t}",40,0,40);
   frame__71->SetMinimum(0.1);
   frame__71->SetMaximum(12065.49);
   frame__71->SetEntries(365945);
   frame__71->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__71->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__71->SetMarkerColor(ci);
   frame__71->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__71->GetXaxis()->SetLabelFont(42);
   frame__71->GetXaxis()->SetLabelSize(0.035);
   frame__71->GetXaxis()->SetTitleSize(0.035);
   frame__71->GetXaxis()->SetTitleFont(42);
   frame__71->GetYaxis()->SetTitle(" Events");
   frame__71->GetYaxis()->SetNoExponent();
   frame__71->GetYaxis()->SetLabelFont(42);
   frame__71->GetYaxis()->SetTitleSize(0.045);
   frame__71->GetYaxis()->SetTitleOffset(1.3);
   frame__71->GetYaxis()->SetTitleFont(42);
   frame__71->GetZaxis()->SetLabelFont(42);
   frame__71->GetZaxis()->SetLabelSize(0.035);
   frame__71->GetZaxis()->SetTitleSize(0.035);
   frame__71->GetZaxis()->SetTitleFont(42);
   frame__71->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",40,0,40);
   mc_stack_11->SetMinimum(-9.345868e-07);
   mc_stack_11->SetMaximum(9745.201);
   mc_stack_11->SetDirectory(0);
   mc_stack_11->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_11->SetLineColor(ci);
   mc_stack_11->GetXaxis()->SetLabelFont(42);
   mc_stack_11->GetXaxis()->SetLabelSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleFont(42);
   mc_stack_11->GetYaxis()->SetLabelFont(42);
   mc_stack_11->GetYaxis()->SetLabelSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleFont(42);
   mc_stack_11->GetZaxis()->SetLabelFont(42);
   mc_stack_11->GetZaxis()->SetLabelSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_11);
   
   
   TH1F *nvtx_t#bar{t}__72 = new TH1F("nvtx_t#bar{t}__72","t#bar{t}",40,0,40);
   nvtx_t#bar{t}__72->SetBinContent(2,2.562006);
   nvtx_t#bar{t}__72->SetBinContent(3,10.0119);
   nvtx_t#bar{t}__72->SetBinContent(4,25.13856);
   nvtx_t#bar{t}__72->SetBinContent(5,68.96152);
   nvtx_t#bar{t}__72->SetBinContent(6,155.562);
   nvtx_t#bar{t}__72->SetBinContent(7,341.6103);
   nvtx_t#bar{t}__72->SetBinContent(8,649.5957);
   nvtx_t#bar{t}__72->SetBinContent(9,1179.327);
   nvtx_t#bar{t}__72->SetBinContent(10,1871.554);
   nvtx_t#bar{t}__72->SetBinContent(11,2762.877);
   nvtx_t#bar{t}__72->SetBinContent(12,3750.854);
   nvtx_t#bar{t}__72->SetBinContent(13,4813.021);
   nvtx_t#bar{t}__72->SetBinContent(14,5909.667);
   nvtx_t#bar{t}__72->SetBinContent(15,6853.557);
   nvtx_t#bar{t}__72->SetBinContent(16,7678.413);
   nvtx_t#bar{t}__72->SetBinContent(17,8273.009);
   nvtx_t#bar{t}__72->SetBinContent(18,8742.105);
   nvtx_t#bar{t}__72->SetBinContent(19,8830.601);
   nvtx_t#bar{t}__72->SetBinContent(20,8846.322);
   nvtx_t#bar{t}__72->SetBinContent(21,8532.307);
   nvtx_t#bar{t}__72->SetBinContent(22,8186.598);
   nvtx_t#bar{t}__72->SetBinContent(23,7518.168);
   nvtx_t#bar{t}__72->SetBinContent(24,6920.785);
   nvtx_t#bar{t}__72->SetBinContent(25,6148.84);
   nvtx_t#bar{t}__72->SetBinContent(26,5457.532);
   nvtx_t#bar{t}__72->SetBinContent(27,4732.139);
   nvtx_t#bar{t}__72->SetBinContent(28,3926.77);
   nvtx_t#bar{t}__72->SetBinContent(29,3297.779);
   nvtx_t#bar{t}__72->SetBinContent(30,2698.574);
   nvtx_t#bar{t}__72->SetBinContent(31,2231.021);
   nvtx_t#bar{t}__72->SetBinContent(32,1780.446);
   nvtx_t#bar{t}__72->SetBinContent(33,1404.175);
   nvtx_t#bar{t}__72->SetBinContent(34,1110.572);
   nvtx_t#bar{t}__72->SetBinContent(35,863.9863);
   nvtx_t#bar{t}__72->SetBinContent(36,627.7006);
   nvtx_t#bar{t}__72->SetBinContent(37,490.9953);
   nvtx_t#bar{t}__72->SetBinContent(38,402.2416);
   nvtx_t#bar{t}__72->SetBinContent(39,266.0336);
   nvtx_t#bar{t}__72->SetBinContent(40,200.1754);
   nvtx_t#bar{t}__72->SetBinContent(41,539.7565);
   nvtx_t#bar{t}__72->SetBinError(2,0.7411694);
   nvtx_t#bar{t}__72->SetBinError(3,1.584981);
   nvtx_t#bar{t}__72->SetBinError(4,2.609561);
   nvtx_t#bar{t}__72->SetBinError(5,4.438539);
   nvtx_t#bar{t}__72->SetBinError(6,6.8606);
   nvtx_t#bar{t}__72->SetBinError(7,10.44306);
   nvtx_t#bar{t}__72->SetBinError(8,14.74589);
   nvtx_t#bar{t}__72->SetBinError(9,20.32084);
   nvtx_t#bar{t}__72->SetBinError(10,25.92133);
   nvtx_t#bar{t}__72->SetBinError(11,32.0428);
   nvtx_t#bar{t}__72->SetBinError(12,37.7285);
   nvtx_t#bar{t}__72->SetBinError(13,43.14853);
   nvtx_t#bar{t}__72->SetBinError(14,48.1949);
   nvtx_t#bar{t}__72->SetBinError(15,52.2831);
   nvtx_t#bar{t}__72->SetBinError(16,55.71614);
   nvtx_t#bar{t}__72->SetBinError(17,58.14388);
   nvtx_t#bar{t}__72->SetBinError(18,60.09102);
   nvtx_t#bar{t}__72->SetBinError(19,60.73117);
   nvtx_t#bar{t}__72->SetBinError(20,61.05951);
   nvtx_t#bar{t}__72->SetBinError(21,60.27061);
   nvtx_t#bar{t}__72->SetBinError(22,59.21454);
   nvtx_t#bar{t}__72->SetBinError(23,56.98262);
   nvtx_t#bar{t}__72->SetBinError(24,54.81125);
   nvtx_t#bar{t}__72->SetBinError(25,51.6883);
   nvtx_t#bar{t}__72->SetBinError(26,48.68847);
   nvtx_t#bar{t}__72->SetBinError(27,45.22499);
   nvtx_t#bar{t}__72->SetBinError(28,40.97046);
   nvtx_t#bar{t}__72->SetBinError(29,37.37539);
   nvtx_t#bar{t}__72->SetBinError(30,33.54333);
   nvtx_t#bar{t}__72->SetBinError(31,30.25637);
   nvtx_t#bar{t}__72->SetBinError(32,26.73853);
   nvtx_t#bar{t}__72->SetBinError(33,23.32787);
   nvtx_t#bar{t}__72->SetBinError(34,20.40331);
   nvtx_t#bar{t}__72->SetBinError(35,17.83819);
   nvtx_t#bar{t}__72->SetBinError(36,14.77329);
   nvtx_t#bar{t}__72->SetBinError(37,12.83389);
   nvtx_t#bar{t}__72->SetBinError(38,11.36984);
   nvtx_t#bar{t}__72->SetBinError(39,9.112085);
   nvtx_t#bar{t}__72->SetBinError(40,7.632594);
   nvtx_t#bar{t}__72->SetBinError(41,11.23049);
   nvtx_t#bar{t}__72->SetEntries(360257);
   nvtx_t#bar{t}__72->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetMarkerColor(ci);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t},"hist");
   
   TH1F *nvtx_Diboson__73 = new TH1F("nvtx_Diboson__73","Diboson",40,0,40);
   nvtx_Diboson__73->SetBinContent(5,0.3669195);
   nvtx_Diboson__73->SetBinContent(7,0.09181011);
   nvtx_Diboson__73->SetBinContent(8,1.146145);
   nvtx_Diboson__73->SetBinContent(9,1.543194);
   nvtx_Diboson__73->SetBinContent(10,2.768166);
   nvtx_Diboson__73->SetBinContent(11,5.098091);
   nvtx_Diboson__73->SetBinContent(12,4.497828);
   nvtx_Diboson__73->SetBinContent(13,4.938346);
   nvtx_Diboson__73->SetBinContent(14,5.920607);
   nvtx_Diboson__73->SetBinContent(15,8.456815);
   nvtx_Diboson__73->SetBinContent(16,9.319703);
   nvtx_Diboson__73->SetBinContent(17,10.07892);
   nvtx_Diboson__73->SetBinContent(18,9.204708);
   nvtx_Diboson__73->SetBinContent(19,10.14536);
   nvtx_Diboson__73->SetBinContent(20,9.527121);
   nvtx_Diboson__73->SetBinContent(21,13.44261);
   nvtx_Diboson__73->SetBinContent(22,9.876287);
   nvtx_Diboson__73->SetBinContent(23,11.63869);
   nvtx_Diboson__73->SetBinContent(24,6.451887);
   nvtx_Diboson__73->SetBinContent(25,10.72303);
   nvtx_Diboson__73->SetBinContent(26,6.973422);
   nvtx_Diboson__73->SetBinContent(27,7.719114);
   nvtx_Diboson__73->SetBinContent(28,7.10872);
   nvtx_Diboson__73->SetBinContent(29,4.093088);
   nvtx_Diboson__73->SetBinContent(30,4.55119);
   nvtx_Diboson__73->SetBinContent(31,1.732036);
   nvtx_Diboson__73->SetBinContent(32,3.091868);
   nvtx_Diboson__73->SetBinContent(33,3.079247);
   nvtx_Diboson__73->SetBinContent(34,2.802826);
   nvtx_Diboson__73->SetBinContent(35,1.436749);
   nvtx_Diboson__73->SetBinContent(36,1.35002);
   nvtx_Diboson__73->SetBinContent(37,0.6941931);
   nvtx_Diboson__73->SetBinContent(38,0.09624204);
   nvtx_Diboson__73->SetBinContent(39,1.112209);
   nvtx_Diboson__73->SetBinContent(40,0.02195357);
   nvtx_Diboson__73->SetBinContent(41,1.052072);
   nvtx_Diboson__73->SetBinError(5,0.3669195);
   nvtx_Diboson__73->SetBinError(7,0.09181012);
   nvtx_Diboson__73->SetBinError(8,0.5971013);
   nvtx_Diboson__73->SetBinError(9,0.6923629);
   nvtx_Diboson__73->SetBinError(10,0.9869253);
   nvtx_Diboson__73->SetBinError(11,1.334074);
   nvtx_Diboson__73->SetBinError(12,1.263528);
   nvtx_Diboson__73->SetBinError(13,1.373103);
   nvtx_Diboson__73->SetBinError(14,1.490765);
   nvtx_Diboson__73->SetBinError(15,1.776876);
   nvtx_Diboson__73->SetBinError(16,1.90657);
   nvtx_Diboson__73->SetBinError(17,1.980869);
   nvtx_Diboson__73->SetBinError(18,1.923862);
   nvtx_Diboson__73->SetBinError(19,1.996713);
   nvtx_Diboson__73->SetBinError(20,1.949833);
   nvtx_Diboson__73->SetBinError(21,2.350604);
   nvtx_Diboson__73->SetBinError(22,2.022037);
   nvtx_Diboson__73->SetBinError(23,2.17853);
   nvtx_Diboson__73->SetBinError(24,1.591758);
   nvtx_Diboson__73->SetBinError(25,2.106668);
   nvtx_Diboson__73->SetBinError(26,1.708095);
   nvtx_Diboson__73->SetBinError(27,1.772229);
   nvtx_Diboson__73->SetBinError(28,1.74729);
   nvtx_Diboson__73->SetBinError(29,1.248554);
   nvtx_Diboson__73->SetBinError(30,1.311594);
   nvtx_Diboson__73->SetBinError(31,0.8202787);
   nvtx_Diboson__73->SetBinError(32,1.10039);
   nvtx_Diboson__73->SetBinError(33,1.042974);
   nvtx_Diboson__73->SetBinError(34,1.008988);
   nvtx_Diboson__73->SetBinError(35,0.7336144);
   nvtx_Diboson__73->SetBinError(36,0.6845534);
   nvtx_Diboson__73->SetBinError(37,0.3930007);
   nvtx_Diboson__73->SetBinError(38,0.07870088);
   nvtx_Diboson__73->SetBinError(39,0.5869388);
   nvtx_Diboson__73->SetBinError(40,0.0204632);
   nvtx_Diboson__73->SetBinError(41,0.394902);
   nvtx_Diboson__73->SetEntries(511);
   nvtx_Diboson__73->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetMarkerColor(ci);
   nvtx_Diboson__73->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson__73->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson__73->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson,"hist");
   
   TH1F *nvtx_DY__74 = new TH1F("nvtx_DY__74","DY",40,0,40);
   nvtx_DY__74->SetBinContent(13,33.40588);
   nvtx_DY__74->SetBinContent(14,16.99263);
   nvtx_DY__74->SetBinContent(15,50.66055);
   nvtx_DY__74->SetBinContent(16,31.8248);
   nvtx_DY__74->SetBinContent(18,17.70657);
   nvtx_DY__74->SetBinContent(21,34.73302);
   nvtx_DY__74->SetBinContent(22,20.71554);
   nvtx_DY__74->SetBinContent(23,34.53849);
   nvtx_DY__74->SetBinContent(26,16.98714);
   nvtx_DY__74->SetBinContent(27,15.6875);
   nvtx_DY__74->SetBinContent(30,20.7678);
   nvtx_DY__74->SetBinContent(31,26.93724);
   nvtx_DY__74->SetBinContent(34,17.97306);
   nvtx_DY__74->SetBinContent(41,0.3771112);
   nvtx_DY__74->SetBinError(13,23.62208);
   nvtx_DY__74->SetBinError(14,16.99263);
   nvtx_DY__74->SetBinError(15,29.26659);
   nvtx_DY__74->SetBinError(16,22.52096);
   nvtx_DY__74->SetBinError(18,17.70657);
   nvtx_DY__74->SetBinError(21,24.61815);
   nvtx_DY__74->SetBinError(22,20.71554);
   nvtx_DY__74->SetBinError(23,24.43033);
   nvtx_DY__74->SetBinError(26,16.98714);
   nvtx_DY__74->SetBinError(27,15.6875);
   nvtx_DY__74->SetBinError(30,20.7678);
   nvtx_DY__74->SetBinError(31,20.05369);
   nvtx_DY__74->SetBinError(34,17.97306);
   nvtx_DY__74->SetBinError(41,0.3771112);
   nvtx_DY__74->SetEntries(21);
   nvtx_DY__74->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetMarkerColor(ci);
   nvtx_DY__74->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY__74->GetXaxis()->SetLabelFont(42);
   nvtx_DY__74->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleFont(42);
   nvtx_DY__74->GetYaxis()->SetTitle(" Events");
   nvtx_DY__74->GetYaxis()->SetLabelFont(42);
   nvtx_DY__74->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY,"hist");
   
   TH1F *nvtx_W__75 = new TH1F("nvtx_W__75","W",40,0,40);
   nvtx_W__75->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetMarkerColor(ci);
   nvtx_W__75->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W__75->GetXaxis()->SetLabelFont(42);
   nvtx_W__75->GetXaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleFont(42);
   nvtx_W__75->GetYaxis()->SetTitle(" Events");
   nvtx_W__75->GetYaxis()->SetLabelFont(42);
   nvtx_W__75->GetYaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleFont(42);
   nvtx_W__75->GetZaxis()->SetLabelFont(42);
   nvtx_W__75->GetZaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W,"hist");
   
   TH1F *nvtx_SinglesPtop__76 = new TH1F("nvtx_SinglesPtop__76","Single top",40,0,40);
   nvtx_SinglesPtop__76->SetBinContent(2,0.599883);
   nvtx_SinglesPtop__76->SetBinContent(3,0.6295625);
   nvtx_SinglesPtop__76->SetBinContent(5,3.39625);
   nvtx_SinglesPtop__76->SetBinContent(6,9.10181);
   nvtx_SinglesPtop__76->SetBinContent(7,14.4647);
   nvtx_SinglesPtop__76->SetBinContent(8,47.10493);
   nvtx_SinglesPtop__76->SetBinContent(9,55.53765);
   nvtx_SinglesPtop__76->SetBinContent(10,81.44025);
   nvtx_SinglesPtop__76->SetBinContent(11,108.1657);
   nvtx_SinglesPtop__76->SetBinContent(12,161.6067);
   nvtx_SinglesPtop__76->SetBinContent(13,247.0246);
   nvtx_SinglesPtop__76->SetBinContent(14,268.3194);
   nvtx_SinglesPtop__76->SetBinContent(15,298.417);
   nvtx_SinglesPtop__76->SetBinContent(16,376.8653);
   nvtx_SinglesPtop__76->SetBinContent(17,365.1441);
   nvtx_SinglesPtop__76->SetBinContent(18,436.1141);
   nvtx_SinglesPtop__76->SetBinContent(19,404.8253);
   nvtx_SinglesPtop__76->SetBinContent(20,425.2941);
   nvtx_SinglesPtop__76->SetBinContent(21,394.7953);
   nvtx_SinglesPtop__76->SetBinContent(22,361.4669);
   nvtx_SinglesPtop__76->SetBinContent(23,331.4504);
   nvtx_SinglesPtop__76->SetBinContent(24,296.874);
   nvtx_SinglesPtop__76->SetBinContent(25,297.5699);
   nvtx_SinglesPtop__76->SetBinContent(26,263.9673);
   nvtx_SinglesPtop__76->SetBinContent(27,247.4348);
   nvtx_SinglesPtop__76->SetBinContent(28,172.4242);
   nvtx_SinglesPtop__76->SetBinContent(29,152.3854);
   nvtx_SinglesPtop__76->SetBinContent(30,142.146);
   nvtx_SinglesPtop__76->SetBinContent(31,121.1571);
   nvtx_SinglesPtop__76->SetBinContent(32,82.86644);
   nvtx_SinglesPtop__76->SetBinContent(33,67.37107);
   nvtx_SinglesPtop__76->SetBinContent(34,52.68162);
   nvtx_SinglesPtop__76->SetBinContent(35,38.19365);
   nvtx_SinglesPtop__76->SetBinContent(36,30.36678);
   nvtx_SinglesPtop__76->SetBinContent(37,17.04907);
   nvtx_SinglesPtop__76->SetBinContent(38,20.12409);
   nvtx_SinglesPtop__76->SetBinContent(39,11.87034);
   nvtx_SinglesPtop__76->SetBinContent(40,7.838285);
   nvtx_SinglesPtop__76->SetBinContent(41,24.28397);
   nvtx_SinglesPtop__76->SetBinError(2,0.5998829);
   nvtx_SinglesPtop__76->SetBinError(3,0.6295625);
   nvtx_SinglesPtop__76->SetBinError(5,1.761843);
   nvtx_SinglesPtop__76->SetBinError(6,3.168554);
   nvtx_SinglesPtop__76->SetBinError(7,3.579887);
   nvtx_SinglesPtop__76->SetBinError(8,7.167945);
   nvtx_SinglesPtop__76->SetBinError(9,7.960236);
   nvtx_SinglesPtop__76->SetBinError(10,9.581911);
   nvtx_SinglesPtop__76->SetBinError(11,11.36632);
   nvtx_SinglesPtop__76->SetBinError(12,14.12865);
   nvtx_SinglesPtop__76->SetBinError(13,17.77617);
   nvtx_SinglesPtop__76->SetBinError(14,18.58171);
   nvtx_SinglesPtop__76->SetBinError(15,19.66219);
   nvtx_SinglesPtop__76->SetBinError(16,22.31968);
   nvtx_SinglesPtop__76->SetBinError(17,22.10865);
   nvtx_SinglesPtop__76->SetBinError(18,24.29003);
   nvtx_SinglesPtop__76->SetBinError(19,23.42982);
   nvtx_SinglesPtop__76->SetBinError(20,24.12603);
   nvtx_SinglesPtop__76->SetBinError(21,23.34488);
   nvtx_SinglesPtop__76->SetBinError(22,22.5275);
   nvtx_SinglesPtop__76->SetBinError(23,21.63856);
   nvtx_SinglesPtop__76->SetBinError(24,20.43867);
   nvtx_SinglesPtop__76->SetBinError(25,20.46513);
   nvtx_SinglesPtop__76->SetBinError(26,19.30615);
   nvtx_SinglesPtop__76->SetBinError(27,18.68835);
   nvtx_SinglesPtop__76->SetBinError(28,15.6317);
   nvtx_SinglesPtop__76->SetBinError(29,14.65401);
   nvtx_SinglesPtop__76->SetBinError(30,13.87727);
   nvtx_SinglesPtop__76->SetBinError(31,12.68941);
   nvtx_SinglesPtop__76->SetBinError(32,10.38759);
   nvtx_SinglesPtop__76->SetBinError(33,9.217772);
   nvtx_SinglesPtop__76->SetBinError(34,7.885163);
   nvtx_SinglesPtop__76->SetBinError(35,6.416066);
   nvtx_SinglesPtop__76->SetBinError(36,5.6512);
   nvtx_SinglesPtop__76->SetBinError(37,4.382412);
   nvtx_SinglesPtop__76->SetBinError(38,4.686496);
   nvtx_SinglesPtop__76->SetBinError(39,3.524281);
   nvtx_SinglesPtop__76->SetBinError(40,2.479579);
   nvtx_SinglesPtop__76->SetBinError(41,3.979522);
   nvtx_SinglesPtop__76->SetEntries(5156);
   nvtx_SinglesPtop__76->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetMarkerColor(ci);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3021[41] = {
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
   Double_t Graph_from_nvtx_fy3021[41] = {
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
   Double_t Graph_from_nvtx_felx3021[41] = {
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
   Double_t Graph_from_nvtx_fely3021[41] = {
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
   Double_t Graph_from_nvtx_fehx3021[41] = {
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
   Double_t Graph_from_nvtx_fehy3021[41] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_nvtx_fx3021,Graph_from_nvtx_fy3021,Graph_from_nvtx_felx3021,Graph_from_nvtx_fehx3021,Graph_from_nvtx_fely3021,Graph_from_nvtx_fehy3021);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3021 = new TH1F("Graph_Graph_from_nvtx3021","Data",100,0,44);
   Graph_Graph_from_nvtx3021->SetMinimum(0);
   Graph_Graph_from_nvtx3021->SetMaximum(9907.044);
   Graph_Graph_from_nvtx3021->SetDirectory(0);
   Graph_Graph_from_nvtx3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3021->SetLineColor(ci);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3021);
   
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
   
   TH1F *ratioframe__77 = new TH1F("ratioframe__77","t#bar{t}",40,0,40);
   ratioframe__77->SetMinimum(0.46);
   ratioframe__77->SetMaximum(1.54);
   ratioframe__77->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetMarkerColor(ci);
   ratioframe__77->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__77->GetXaxis()->SetLabelFont(42);
   ratioframe__77->GetXaxis()->SetLabelSize(0);
   ratioframe__77->GetXaxis()->SetTitleSize(0);
   ratioframe__77->GetXaxis()->SetTitleOffset(0);
   ratioframe__77->GetXaxis()->SetTitleFont(42);
   ratioframe__77->GetYaxis()->SetTitle("Data/MC");
   ratioframe__77->GetYaxis()->SetNoExponent();
   ratioframe__77->GetYaxis()->SetNdivisions(5);
   ratioframe__77->GetYaxis()->SetLabelFont(42);
   ratioframe__77->GetYaxis()->SetLabelSize(0.18);
   ratioframe__77->GetYaxis()->SetTitleSize(0.2);
   ratioframe__77->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__77->GetYaxis()->SetTitleFont(42);
   ratioframe__77->GetZaxis()->SetLabelFont(42);
   ratioframe__77->GetZaxis()->SetLabelSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleFont(42);
   ratioframe__77->Draw("");
   
   Double_t Graph_from_ratio_fx3022[40] = {
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
   Double_t Graph_from_ratio_fy3022[40] = {
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
   Double_t Graph_from_ratio_felx3022[40] = {
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
   Double_t Graph_from_ratio_fely3022[40] = {
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
   Double_t Graph_from_ratio_fehx3022[40] = {
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
   Double_t Graph_from_ratio_fehy3022[40] = {
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
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,44);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(4.538451);
   Graph_Graph_from_ratio3022->SetDirectory(0);
   Graph_Graph_from_ratio3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3022->SetLineColor(ci);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3022);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
