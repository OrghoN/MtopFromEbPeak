void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 15:23:11 2018) by ROOT version6.08/07
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
   p1->Range(-5.783133,-1597.9,42.40964,11718.77);
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
   frame__71->SetMaximum(11585.6);
   frame__71->SetEntries(32767);
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
   mc_stack_11->SetMinimum(-7.572143e-07);
   mc_stack_11->SetMaximum(8963.882);
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
   nvtx_t#bar{t}__72->SetBinContent(3,18.01201);
   nvtx_t#bar{t}__72->SetBinContent(4,34.13523);
   nvtx_t#bar{t}__72->SetBinContent(5,70.08499);
   nvtx_t#bar{t}__72->SetBinContent(6,251.5498);
   nvtx_t#bar{t}__72->SetBinContent(7,506.7742);
   nvtx_t#bar{t}__72->SetBinContent(8,795.6387);
   nvtx_t#bar{t}__72->SetBinContent(9,1317.506);
   nvtx_t#bar{t}__72->SetBinContent(10,2031.895);
   nvtx_t#bar{t}__72->SetBinContent(11,3177.775);
   nvtx_t#bar{t}__72->SetBinContent(12,3925.565);
   nvtx_t#bar{t}__72->SetBinContent(13,4795.544);
   nvtx_t#bar{t}__72->SetBinContent(14,5614.119);
   nvtx_t#bar{t}__72->SetBinContent(15,6430.567);
   nvtx_t#bar{t}__72->SetBinContent(16,7384.366);
   nvtx_t#bar{t}__72->SetBinContent(17,7670.686);
   nvtx_t#bar{t}__72->SetBinContent(18,8039.051);
   nvtx_t#bar{t}__72->SetBinContent(19,7906.959);
   nvtx_t#bar{t}__72->SetBinContent(20,8146.5);
   nvtx_t#bar{t}__72->SetBinContent(21,7529.169);
   nvtx_t#bar{t}__72->SetBinContent(22,7019.588);
   nvtx_t#bar{t}__72->SetBinContent(23,6471.653);
   nvtx_t#bar{t}__72->SetBinContent(24,6130.325);
   nvtx_t#bar{t}__72->SetBinContent(25,5635.617);
   nvtx_t#bar{t}__72->SetBinContent(26,4998.413);
   nvtx_t#bar{t}__72->SetBinContent(27,4050.226);
   nvtx_t#bar{t}__72->SetBinContent(28,3504.887);
   nvtx_t#bar{t}__72->SetBinContent(29,3161.192);
   nvtx_t#bar{t}__72->SetBinContent(30,2853.811);
   nvtx_t#bar{t}__72->SetBinContent(31,2466.434);
   nvtx_t#bar{t}__72->SetBinContent(32,1880.479);
   nvtx_t#bar{t}__72->SetBinContent(33,1639.735);
   nvtx_t#bar{t}__72->SetBinContent(34,1478.444);
   nvtx_t#bar{t}__72->SetBinContent(35,1246.785);
   nvtx_t#bar{t}__72->SetBinContent(36,1198.885);
   nvtx_t#bar{t}__72->SetBinContent(37,912.6846);
   nvtx_t#bar{t}__72->SetBinContent(38,626.7726);
   nvtx_t#bar{t}__72->SetBinContent(39,656.5425);
   nvtx_t#bar{t}__72->SetBinContent(40,565.7959);
   nvtx_t#bar{t}__72->SetBinContent(41,2756.193);
   nvtx_t#bar{t}__72->SetBinError(3,9.850808);
   nvtx_t#bar{t}__72->SetBinError(4,12.9902);
   nvtx_t#bar{t}__72->SetBinError(5,19.44676);
   nvtx_t#bar{t}__72->SetBinError(6,36.05886);
   nvtx_t#bar{t}__72->SetBinError(7,52.16402);
   nvtx_t#bar{t}__72->SetBinError(8,64.66706);
   nvtx_t#bar{t}__72->SetBinError(9,84.14889);
   nvtx_t#bar{t}__72->SetBinError(10,104.3086);
   nvtx_t#bar{t}__72->SetBinError(11,129.6618);
   nvtx_t#bar{t}__72->SetBinError(12,145.7437);
   nvtx_t#bar{t}__72->SetBinError(13,160.1043);
   nvtx_t#bar{t}__72->SetBinError(14,173.2525);
   nvtx_t#bar{t}__72->SetBinError(15,185.0275);
   nvtx_t#bar{t}__72->SetBinError(16,198.6218);
   nvtx_t#bar{t}__72->SetBinError(17,202.3493);
   nvtx_t#bar{t}__72->SetBinError(18,207.2786);
   nvtx_t#bar{t}__72->SetBinError(19,205.7059);
   nvtx_t#bar{t}__72->SetBinError(20,208.7356);
   nvtx_t#bar{t}__72->SetBinError(21,200.3987);
   nvtx_t#bar{t}__72->SetBinError(22,193.5746);
   nvtx_t#bar{t}__72->SetBinError(23,185.3861);
   nvtx_t#bar{t}__72->SetBinError(24,180.6278);
   nvtx_t#bar{t}__72->SetBinError(25,173.343);
   nvtx_t#bar{t}__72->SetBinError(26,163.9276);
   nvtx_t#bar{t}__72->SetBinError(27,147.1554);
   nvtx_t#bar{t}__72->SetBinError(28,136.959);
   nvtx_t#bar{t}__72->SetBinError(29,130.0843);
   nvtx_t#bar{t}__72->SetBinError(30,123.6157);
   nvtx_t#bar{t}__72->SetBinError(31,114.617);
   nvtx_t#bar{t}__72->SetBinError(32,99.57948);
   nvtx_t#bar{t}__72->SetBinError(33,93.37584);
   nvtx_t#bar{t}__72->SetBinError(34,89.32124);
   nvtx_t#bar{t}__72->SetBinError(35,81.52973);
   nvtx_t#bar{t}__72->SetBinError(36,79.92079);
   nvtx_t#bar{t}__72->SetBinError(37,69.66289);
   nvtx_t#bar{t}__72->SetBinError(38,57.45877);
   nvtx_t#bar{t}__72->SetBinError(39,58.5798);
   nvtx_t#bar{t}__72->SetBinError(40,54.85735);
   nvtx_t#bar{t}__72->SetBinError(41,120.8431);
   nvtx_t#bar{t}__72->SetEntries(27079);
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
   nvtx_Diboson__73->SetBinContent(5,0.3458666);
   nvtx_Diboson__73->SetBinContent(7,0.4341311);
   nvtx_Diboson__73->SetBinContent(8,1.540293);
   nvtx_Diboson__73->SetBinContent(9,2.073714);
   nvtx_Diboson__73->SetBinContent(10,3.200663);
   nvtx_Diboson__73->SetBinContent(11,5.7331);
   nvtx_Diboson__73->SetBinContent(12,4.378333);
   nvtx_Diboson__73->SetBinContent(13,4.462409);
   nvtx_Diboson__73->SetBinContent(14,5.729887);
   nvtx_Diboson__73->SetBinContent(15,8.17416);
   nvtx_Diboson__73->SetBinContent(16,8.262775);
   nvtx_Diboson__73->SetBinContent(17,9.446387);
   nvtx_Diboson__73->SetBinContent(18,8.873469);
   nvtx_Diboson__73->SetBinContent(19,6.904152);
   nvtx_Diboson__73->SetBinContent(20,8.424392);
   nvtx_Diboson__73->SetBinContent(21,10.60277);
   nvtx_Diboson__73->SetBinContent(22,8.900023);
   nvtx_Diboson__73->SetBinContent(23,11.10779);
   nvtx_Diboson__73->SetBinContent(24,7.209071);
   nvtx_Diboson__73->SetBinContent(25,9.180158);
   nvtx_Diboson__73->SetBinContent(26,5.970304);
   nvtx_Diboson__73->SetBinContent(27,7.281801);
   nvtx_Diboson__73->SetBinContent(28,5.937562);
   nvtx_Diboson__73->SetBinContent(29,4.949276);
   nvtx_Diboson__73->SetBinContent(30,5.061709);
   nvtx_Diboson__73->SetBinContent(31,1.809576);
   nvtx_Diboson__73->SetBinContent(32,3.410291);
   nvtx_Diboson__73->SetBinContent(33,3.932836);
   nvtx_Diboson__73->SetBinContent(34,2.994125);
   nvtx_Diboson__73->SetBinContent(35,1.743477);
   nvtx_Diboson__73->SetBinContent(36,2.015735);
   nvtx_Diboson__73->SetBinContent(37,1.209946);
   nvtx_Diboson__73->SetBinContent(38,0.8021368);
   nvtx_Diboson__73->SetBinContent(39,1.920902);
   nvtx_Diboson__73->SetBinContent(40,0.8037142);
   nvtx_Diboson__73->SetBinContent(41,6.281992);
   nvtx_Diboson__73->SetBinError(5,0.3458666);
   nvtx_Diboson__73->SetBinError(7,0.4341312);
   nvtx_Diboson__73->SetBinError(8,0.7721904);
   nvtx_Diboson__73->SetBinError(9,0.9303489);
   nvtx_Diboson__73->SetBinError(10,1.13432);
   nvtx_Diboson__73->SetBinError(11,1.487459);
   nvtx_Diboson__73->SetBinError(12,1.320199);
   nvtx_Diboson__73->SetBinError(13,1.309422);
   nvtx_Diboson__73->SetBinError(14,1.515861);
   nvtx_Diboson__73->SetBinError(15,1.772246);
   nvtx_Diboson__73->SetBinError(16,1.775844);
   nvtx_Diboson__73->SetBinError(17,1.928752);
   nvtx_Diboson__73->SetBinError(18,1.886167);
   nvtx_Diboson__73->SetBinError(19,1.556927);
   nvtx_Diboson__73->SetBinError(20,1.808415);
   nvtx_Diboson__73->SetBinError(21,1.980794);
   nvtx_Diboson__73->SetBinError(22,1.878721);
   nvtx_Diboson__73->SetBinError(23,2.120653);
   nvtx_Diboson__73->SetBinError(24,1.702971);
   nvtx_Diboson__73->SetBinError(25,1.904716);
   nvtx_Diboson__73->SetBinError(26,1.497112);
   nvtx_Diboson__73->SetBinError(27,1.676912);
   nvtx_Diboson__73->SetBinError(28,1.510425);
   nvtx_Diboson__73->SetBinError(29,1.369896);
   nvtx_Diboson__73->SetBinError(30,1.363266);
   nvtx_Diboson__73->SetBinError(31,0.8206712);
   nvtx_Diboson__73->SetBinError(32,1.144002);
   nvtx_Diboson__73->SetBinError(33,1.245123);
   nvtx_Diboson__73->SetBinError(34,1.067556);
   nvtx_Diboson__73->SetBinError(35,0.8053047);
   nvtx_Diboson__73->SetBinError(36,0.8989404);
   nvtx_Diboson__73->SetBinError(37,0.6634141);
   nvtx_Diboson__73->SetBinError(38,0.5687176);
   nvtx_Diboson__73->SetBinError(39,0.8751835);
   nvtx_Diboson__73->SetBinError(40,0.5692468);
   nvtx_Diboson__73->SetBinError(41,1.563421);
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
   nvtx_DY__74->SetBinContent(13,38.66452);
   nvtx_DY__74->SetBinContent(14,19.39491);
   nvtx_DY__74->SetBinContent(15,33.82054);
   nvtx_DY__74->SetBinContent(16,17.57083);
   nvtx_DY__74->SetBinContent(18,16.29086);
   nvtx_DY__74->SetBinContent(21,36.22921);
   nvtx_DY__74->SetBinContent(22,14.39964);
   nvtx_DY__74->SetBinContent(23,34.98171);
   nvtx_DY__74->SetBinContent(26,15.96457);
   nvtx_DY__74->SetBinContent(27,18.13515);
   nvtx_DY__74->SetBinContent(30,19.12663);
   nvtx_DY__74->SetBinContent(31,34.51785);
   nvtx_DY__74->SetBinContent(34,16.99921);
   nvtx_DY__74->SetBinContent(41,15.61073);
   nvtx_DY__74->SetBinError(13,27.35422);
   nvtx_DY__74->SetBinError(14,19.39491);
   nvtx_DY__74->SetBinError(15,23.14632);
   nvtx_DY__74->SetBinError(16,15.70766);
   nvtx_DY__74->SetBinError(18,16.29087);
   nvtx_DY__74->SetBinError(21,25.71461);
   nvtx_DY__74->SetBinError(22,14.39964);
   nvtx_DY__74->SetBinError(23,24.77869);
   nvtx_DY__74->SetBinError(26,15.96457);
   nvtx_DY__74->SetBinError(27,18.13515);
   nvtx_DY__74->SetBinError(30,19.12663);
   nvtx_DY__74->SetBinError(31,24.4698);
   nvtx_DY__74->SetBinError(34,16.99921);
   nvtx_DY__74->SetBinError(41,15.61073);
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
   nvtx_SinglesPtop__76->SetBinContent(2,1.462832);
   nvtx_SinglesPtop__76->SetBinContent(3,1.553983);
   nvtx_SinglesPtop__76->SetBinContent(5,5.582844);
   nvtx_SinglesPtop__76->SetBinContent(6,9.929082);
   nvtx_SinglesPtop__76->SetBinContent(7,24.94729);
   nvtx_SinglesPtop__76->SetBinContent(8,55.89536);
   nvtx_SinglesPtop__76->SetBinContent(9,63.2588);
   nvtx_SinglesPtop__76->SetBinContent(10,95.54023);
   nvtx_SinglesPtop__76->SetBinContent(11,115.875);
   nvtx_SinglesPtop__76->SetBinContent(12,173.1176);
   nvtx_SinglesPtop__76->SetBinContent(13,239.1669);
   nvtx_SinglesPtop__76->SetBinContent(14,261.2765);
   nvtx_SinglesPtop__76->SetBinContent(15,295.5053);
   nvtx_SinglesPtop__76->SetBinContent(16,358.7266);
   nvtx_SinglesPtop__76->SetBinContent(17,345.403);
   nvtx_SinglesPtop__76->SetBinContent(18,393.5217);
   nvtx_SinglesPtop__76->SetBinContent(19,370.1881);
   nvtx_SinglesPtop__76->SetBinContent(20,382.1055);
   nvtx_SinglesPtop__76->SetBinContent(21,359.3303);
   nvtx_SinglesPtop__76->SetBinContent(22,323.1664);
   nvtx_SinglesPtop__76->SetBinContent(23,290.4366);
   nvtx_SinglesPtop__76->SetBinContent(24,268.4556);
   nvtx_SinglesPtop__76->SetBinContent(25,266.9888);
   nvtx_SinglesPtop__76->SetBinContent(26,232.6319);
   nvtx_SinglesPtop__76->SetBinContent(27,220.0368);
   nvtx_SinglesPtop__76->SetBinContent(28,160.7997);
   nvtx_SinglesPtop__76->SetBinContent(29,152.587);
   nvtx_SinglesPtop__76->SetBinContent(30,156.9255);
   nvtx_SinglesPtop__76->SetBinContent(31,128.4676);
   nvtx_SinglesPtop__76->SetBinContent(32,103.2569);
   nvtx_SinglesPtop__76->SetBinContent(33,80.50037);
   nvtx_SinglesPtop__76->SetBinContent(34,78.3559);
   nvtx_SinglesPtop__76->SetBinContent(35,63.84501);
   nvtx_SinglesPtop__76->SetBinContent(36,57.05404);
   nvtx_SinglesPtop__76->SetBinContent(37,40.99373);
   nvtx_SinglesPtop__76->SetBinContent(38,40.44538);
   nvtx_SinglesPtop__76->SetBinContent(39,23.87106);
   nvtx_SinglesPtop__76->SetBinContent(40,25.82519);
   nvtx_SinglesPtop__76->SetBinContent(41,129.9147);
   nvtx_SinglesPtop__76->SetBinError(2,1.462832);
   nvtx_SinglesPtop__76->SetBinError(3,1.553983);
   nvtx_SinglesPtop__76->SetBinError(5,2.796876);
   nvtx_SinglesPtop__76->SetBinError(6,3.517771);
   nvtx_SinglesPtop__76->SetBinError(7,5.74149);
   nvtx_SinglesPtop__76->SetBinError(8,8.633463);
   nvtx_SinglesPtop__76->SetBinError(9,9.164872);
   nvtx_SinglesPtop__76->SetBinError(10,11.40477);
   nvtx_SinglesPtop__76->SetBinError(11,12.5095);
   nvtx_SinglesPtop__76->SetBinError(12,15.31605);
   nvtx_SinglesPtop__76->SetBinError(13,17.71468);
   nvtx_SinglesPtop__76->SetBinError(14,18.69286);
   nvtx_SinglesPtop__76->SetBinError(15,19.93559);
   nvtx_SinglesPtop__76->SetBinError(16,21.95328);
   nvtx_SinglesPtop__76->SetBinError(17,21.53316);
   nvtx_SinglesPtop__76->SetBinError(18,22.93563);
   nvtx_SinglesPtop__76->SetBinError(19,22.27692);
   nvtx_SinglesPtop__76->SetBinError(20,22.56098);
   nvtx_SinglesPtop__76->SetBinError(21,21.76174);
   nvtx_SinglesPtop__76->SetBinError(22,20.84791);
   nvtx_SinglesPtop__76->SetBinError(23,19.76736);
   nvtx_SinglesPtop__76->SetBinError(24,18.99818);
   nvtx_SinglesPtop__76->SetBinError(25,18.83691);
   nvtx_SinglesPtop__76->SetBinError(26,17.51468);
   nvtx_SinglesPtop__76->SetBinError(27,17.10138);
   nvtx_SinglesPtop__76->SetBinError(28,14.69855);
   nvtx_SinglesPtop__76->SetBinError(29,14.34931);
   nvtx_SinglesPtop__76->SetBinError(30,14.52215);
   nvtx_SinglesPtop__76->SetBinError(31,13.12954);
   nvtx_SinglesPtop__76->SetBinError(32,11.79756);
   nvtx_SinglesPtop__76->SetBinError(33,10.4098);
   nvtx_SinglesPtop__76->SetBinError(34,10.30644);
   nvtx_SinglesPtop__76->SetBinError(35,9.252273);
   nvtx_SinglesPtop__76->SetBinError(36,8.670882);
   nvtx_SinglesPtop__76->SetBinError(37,7.334421);
   nvtx_SinglesPtop__76->SetBinError(38,7.418589);
   nvtx_SinglesPtop__76->SetBinError(39,5.677711);
   nvtx_SinglesPtop__76->SetBinError(40,5.977724);
   nvtx_SinglesPtop__76->SetBinError(41,13.11344);
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
   ratioframe__77->SetEntries(32767);

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
   6.152451,
   0.8177452,
   1.376876,
   1.49973,
   1.116725,
   1.151919,
   1.276559,
   1.374709,
   1.318855,
   1.15264,
   1.2342,
   1.223749,
   1.243111,
   1.202116,
   1.110192,
   1.100861,
   1.05371,
   1.017256,
   0.9527903,
   0.9450141,
   0.9144652,
   0.8837898,
   0.8226675,
   0.7637286,
   0.7395803,
   0.747728,
   0.738093,
   0.6770665,
   0.5729961,
   0.5164887,
   0.5983456,
   0.516191,
   0.46677,
   0.4419473,
   0.3585185,
   0.3518736,
   0.4356156,
   0.3297503,
   0.2734524};
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
   6.485253,
   0.4642357,
   0.5611439,
   0.4123482,
   0.1679661,
   0.1227596,
   0.1050188,
   0.08986663,
   0.06955696,
   0.04919929,
   0.04737196,
   0.04232695,
   0.03968972,
   0.03587736,
   0.03103969,
   0.03027163,
   0.02835132,
   0.02771979,
   0.0257042,
   0.02654798,
   0.02667597,
   0.02694381,
   0.02593261,
   0.02523192,
   0.02616575,
   0.02913906,
   0.03111076,
   0.03028168,
   0.02746127,
   0.02705933,
   0.03482667,
   0.03302636,
   0.03209203,
   0.03317136,
   0.02846031,
   0.03216893,
   0.04560212,
   0.0359502,
   0.03332303};
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
   6.485253,
   0.4642357,
   0.5611439,
   0.4123482,
   0.1679661,
   0.1227596,
   0.1050188,
   0.08986663,
   0.06955696,
   0.04919929,
   0.04737196,
   0.04232695,
   0.03968972,
   0.03587736,
   0.03103969,
   0.03027163,
   0.02835132,
   0.02771979,
   0.0257042,
   0.02654798,
   0.02667597,
   0.02694381,
   0.02593261,
   0.02523192,
   0.02616575,
   0.02913906,
   0.03111076,
   0.03028168,
   0.02746127,
   0.02705933,
   0.03482667,
   0.03302636,
   0.03209203,
   0.03317136,
   0.02846031,
   0.03216893,
   0.04560212,
   0.0359502,
   0.03332303};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,44);
   Graph_Graph_from_ratio3022->SetMinimum(-1.629853);
   Graph_Graph_from_ratio3022->SetMaximum(13.93475);
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
