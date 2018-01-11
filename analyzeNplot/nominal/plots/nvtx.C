void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 10:49:17 2018) by ROOT version6.08/07
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
   
   TH1F *frame__141 = new TH1F("frame__141","t#bar{t}",40,0,40);
   frame__141->SetMinimum(0.1);
   frame__141->SetMaximum(11585.6);
   frame__141->SetEntries(365945);
   frame__141->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__141->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__141->SetMarkerColor(ci);
   frame__141->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__141->GetXaxis()->SetLabelFont(42);
   frame__141->GetXaxis()->SetLabelSize(0.035);
   frame__141->GetXaxis()->SetTitleSize(0.035);
   frame__141->GetXaxis()->SetTitleFont(42);
   frame__141->GetYaxis()->SetTitle(" Events");
   frame__141->GetYaxis()->SetNoExponent();
   frame__141->GetYaxis()->SetLabelFont(42);
   frame__141->GetYaxis()->SetTitleSize(0.045);
   frame__141->GetYaxis()->SetTitleOffset(1.3);
   frame__141->GetYaxis()->SetTitleFont(42);
   frame__141->GetZaxis()->SetLabelFont(42);
   frame__141->GetZaxis()->SetLabelSize(0.035);
   frame__141->GetZaxis()->SetTitleSize(0.035);
   frame__141->GetZaxis()->SetTitleFont(42);
   frame__141->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_21 = new TH1F("mc_stack_21","mc",40,0,40);
   mc_stack_21->SetMinimum(-7.572143e-07);
   mc_stack_21->SetMaximum(8954.422);
   mc_stack_21->SetDirectory(0);
   mc_stack_21->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_21->SetLineColor(ci);
   mc_stack_21->GetXaxis()->SetLabelFont(42);
   mc_stack_21->GetXaxis()->SetLabelSize(0.035);
   mc_stack_21->GetXaxis()->SetTitleSize(0.035);
   mc_stack_21->GetXaxis()->SetTitleFont(42);
   mc_stack_21->GetYaxis()->SetLabelFont(42);
   mc_stack_21->GetYaxis()->SetLabelSize(0.035);
   mc_stack_21->GetYaxis()->SetTitleSize(0.035);
   mc_stack_21->GetYaxis()->SetTitleFont(42);
   mc_stack_21->GetZaxis()->SetLabelFont(42);
   mc_stack_21->GetZaxis()->SetLabelSize(0.035);
   mc_stack_21->GetZaxis()->SetTitleSize(0.035);
   mc_stack_21->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_21);
   
   
   TH1F *nvtx_t#bar{t}__142 = new TH1F("nvtx_t#bar{t}__142","t#bar{t}",40,0,40);
   nvtx_t#bar{t}__142->SetBinContent(2,5.003424);
   nvtx_t#bar{t}__142->SetBinContent(3,16.73344);
   nvtx_t#bar{t}__142->SetBinContent(4,39.5087);
   nvtx_t#bar{t}__142->SetBinContent(5,109.3004);
   nvtx_t#bar{t}__142->SetBinContent(6,220.4371);
   nvtx_t#bar{t}__142->SetBinContent(7,454.3731);
   nvtx_t#bar{t}__142->SetBinContent(8,795.9819);
   nvtx_t#bar{t}__142->SetBinContent(9,1355.081);
   nvtx_t#bar{t}__142->SetBinContent(10,2090.484);
   nvtx_t#bar{t}__142->SetBinContent(11,2932.946);
   nvtx_t#bar{t}__142->SetBinContent(12,3862.245);
   nvtx_t#bar{t}__142->SetBinContent(13,4851.769);
   nvtx_t#bar{t}__142->SetBinContent(14,5820.264);
   nvtx_t#bar{t}__142->SetBinContent(15,6624.231);
   nvtx_t#bar{t}__142->SetBinContent(16,7319.432);
   nvtx_t#bar{t}__142->SetBinContent(17,7803.297);
   nvtx_t#bar{t}__142->SetBinContent(18,8109.334);
   nvtx_t#bar{t}__142->SetBinContent(19,8138.751);
   nvtx_t#bar{t}__142->SetBinContent(20,8078.995);
   nvtx_t#bar{t}__142->SetBinContent(21,7725.161);
   nvtx_t#bar{t}__142->SetBinContent(22,7394.572);
   nvtx_t#bar{t}__142->SetBinContent(23,6734.65);
   nvtx_t#bar{t}__142->SetBinContent(24,6187.521);
   nvtx_t#bar{t}__142->SetBinContent(25,5545.561);
   nvtx_t#bar{t}__142->SetBinContent(26,4981.706);
   nvtx_t#bar{t}__142->SetBinContent(27,4399.054);
   nvtx_t#bar{t}__142->SetBinContent(28,3769.899);
   nvtx_t#bar{t}__142->SetBinContent(29,3270.805);
   nvtx_t#bar{t}__142->SetBinContent(30,2810.915);
   nvtx_t#bar{t}__142->SetBinContent(31,2457.883);
   nvtx_t#bar{t}__142->SetBinContent(32,2088.53);
   nvtx_t#bar{t}__142->SetBinContent(33,1814.45);
   nvtx_t#bar{t}__142->SetBinContent(34,1562.235);
   nvtx_t#bar{t}__142->SetBinContent(35,1323.023);
   nvtx_t#bar{t}__142->SetBinContent(36,1109.401);
   nvtx_t#bar{t}__142->SetBinContent(37,943.7582);
   nvtx_t#bar{t}__142->SetBinContent(38,860.016);
   nvtx_t#bar{t}__142->SetBinContent(39,656.5605);
   nvtx_t#bar{t}__142->SetBinContent(40,570.916);
   nvtx_t#bar{t}__142->SetBinContent(41,2931.911);
   nvtx_t#bar{t}__142->SetBinError(2,1.429886);
   nvtx_t#bar{t}__142->SetBinError(3,2.617018);
   nvtx_t#bar{t}__142->SetBinError(4,3.987468);
   nvtx_t#bar{t}__142->SetBinError(5,6.75194);
   nvtx_t#bar{t}__142->SetBinError(6,9.528565);
   nvtx_t#bar{t}__142->SetBinError(7,13.69161);
   nvtx_t#bar{t}__142->SetBinError(8,18.05689);
   nvtx_t#bar{t}__142->SetBinError(9,23.58413);
   nvtx_t#bar{t}__142->SetBinError(10,29.33092);
   nvtx_t#bar{t}__142->SetBinError(11,34.70465);
   nvtx_t#bar{t}__142->SetBinError(12,39.81707);
   nvtx_t#bar{t}__142->SetBinError(13,44.68004);
   nvtx_t#bar{t}__142->SetBinError(14,48.88062);
   nvtx_t#bar{t}__142->SetBinError(15,52.12042);
   nvtx_t#bar{t}__142->SetBinError(16,54.83997);
   nvtx_t#bar{t}__142->SetBinError(17,56.60693);
   nvtx_t#bar{t}__142->SetBinError(18,57.69474);
   nvtx_t#bar{t}__142->SetBinError(19,57.86522);
   nvtx_t#bar{t}__142->SetBinError(20,57.59885);
   nvtx_t#bar{t}__142->SetBinError(21,56.32233);
   nvtx_t#bar{t}__142->SetBinError(22,55.10764);
   nvtx_t#bar{t}__142->SetBinError(23,52.61016);
   nvtx_t#bar{t}__142->SetBinError(24,50.38513);
   nvtx_t#bar{t}__142->SetBinError(25,47.73092);
   nvtx_t#bar{t}__142->SetBinError(26,45.23398);
   nvtx_t#bar{t}__142->SetBinError(27,42.49704);
   nvtx_t#bar{t}__142->SetBinError(28,39.35728);
   nvtx_t#bar{t}__142->SetBinError(29,36.61725);
   nvtx_t#bar{t}__142->SetBinError(30,33.96458);
   nvtx_t#bar{t}__142->SetBinError(31,31.77374);
   nvtx_t#bar{t}__142->SetBinError(32,29.32089);
   nvtx_t#bar{t}__142->SetBinError(33,27.33509);
   nvtx_t#bar{t}__142->SetBinError(34,25.34353);
   nvtx_t#bar{t}__142->SetBinError(35,23.31572);
   nvtx_t#bar{t}__142->SetBinError(36,21.37062);
   nvtx_t#bar{t}__142->SetBinError(37,19.70668);
   nvtx_t#bar{t}__142->SetBinError(38,18.79252);
   nvtx_t#bar{t}__142->SetBinError(39,16.39763);
   nvtx_t#bar{t}__142->SetBinError(40,15.30065);
   nvtx_t#bar{t}__142->SetBinError(41,34.70229);
   nvtx_t#bar{t}__142->SetEntries(360257);
   nvtx_t#bar{t}__142->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__142->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__142->SetMarkerColor(ci);
   nvtx_t#bar{t}__142->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}__142->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__142->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__142->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__142->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__142->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}__142->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__142->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__142->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__142->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__142->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__142->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__142->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__142->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t},"hist");
   
   TH1F *nvtx_Diboson__143 = new TH1F("nvtx_Diboson__143","Diboson",40,0,40);
   nvtx_Diboson__143->SetBinContent(5,0.3458666);
   nvtx_Diboson__143->SetBinContent(7,0.4341311);
   nvtx_Diboson__143->SetBinContent(8,1.540293);
   nvtx_Diboson__143->SetBinContent(9,2.073714);
   nvtx_Diboson__143->SetBinContent(10,3.200663);
   nvtx_Diboson__143->SetBinContent(11,5.7331);
   nvtx_Diboson__143->SetBinContent(12,4.378333);
   nvtx_Diboson__143->SetBinContent(13,4.462409);
   nvtx_Diboson__143->SetBinContent(14,5.729887);
   nvtx_Diboson__143->SetBinContent(15,8.17416);
   nvtx_Diboson__143->SetBinContent(16,8.262775);
   nvtx_Diboson__143->SetBinContent(17,9.446387);
   nvtx_Diboson__143->SetBinContent(18,8.873469);
   nvtx_Diboson__143->SetBinContent(19,6.904152);
   nvtx_Diboson__143->SetBinContent(20,8.424392);
   nvtx_Diboson__143->SetBinContent(21,10.60277);
   nvtx_Diboson__143->SetBinContent(22,8.900023);
   nvtx_Diboson__143->SetBinContent(23,11.10779);
   nvtx_Diboson__143->SetBinContent(24,7.209071);
   nvtx_Diboson__143->SetBinContent(25,9.180158);
   nvtx_Diboson__143->SetBinContent(26,5.970304);
   nvtx_Diboson__143->SetBinContent(27,7.281801);
   nvtx_Diboson__143->SetBinContent(28,5.937562);
   nvtx_Diboson__143->SetBinContent(29,4.949276);
   nvtx_Diboson__143->SetBinContent(30,5.061709);
   nvtx_Diboson__143->SetBinContent(31,1.809576);
   nvtx_Diboson__143->SetBinContent(32,3.410291);
   nvtx_Diboson__143->SetBinContent(33,3.932836);
   nvtx_Diboson__143->SetBinContent(34,2.994125);
   nvtx_Diboson__143->SetBinContent(35,1.743477);
   nvtx_Diboson__143->SetBinContent(36,2.015735);
   nvtx_Diboson__143->SetBinContent(37,1.209946);
   nvtx_Diboson__143->SetBinContent(38,0.8021368);
   nvtx_Diboson__143->SetBinContent(39,1.920902);
   nvtx_Diboson__143->SetBinContent(40,0.8037142);
   nvtx_Diboson__143->SetBinContent(41,6.281992);
   nvtx_Diboson__143->SetBinError(5,0.3458666);
   nvtx_Diboson__143->SetBinError(7,0.4341312);
   nvtx_Diboson__143->SetBinError(8,0.7721904);
   nvtx_Diboson__143->SetBinError(9,0.9303489);
   nvtx_Diboson__143->SetBinError(10,1.13432);
   nvtx_Diboson__143->SetBinError(11,1.487459);
   nvtx_Diboson__143->SetBinError(12,1.320199);
   nvtx_Diboson__143->SetBinError(13,1.309422);
   nvtx_Diboson__143->SetBinError(14,1.515861);
   nvtx_Diboson__143->SetBinError(15,1.772246);
   nvtx_Diboson__143->SetBinError(16,1.775844);
   nvtx_Diboson__143->SetBinError(17,1.928752);
   nvtx_Diboson__143->SetBinError(18,1.886167);
   nvtx_Diboson__143->SetBinError(19,1.556927);
   nvtx_Diboson__143->SetBinError(20,1.808415);
   nvtx_Diboson__143->SetBinError(21,1.980794);
   nvtx_Diboson__143->SetBinError(22,1.878721);
   nvtx_Diboson__143->SetBinError(23,2.120653);
   nvtx_Diboson__143->SetBinError(24,1.702971);
   nvtx_Diboson__143->SetBinError(25,1.904716);
   nvtx_Diboson__143->SetBinError(26,1.497112);
   nvtx_Diboson__143->SetBinError(27,1.676912);
   nvtx_Diboson__143->SetBinError(28,1.510425);
   nvtx_Diboson__143->SetBinError(29,1.369896);
   nvtx_Diboson__143->SetBinError(30,1.363266);
   nvtx_Diboson__143->SetBinError(31,0.8206712);
   nvtx_Diboson__143->SetBinError(32,1.144002);
   nvtx_Diboson__143->SetBinError(33,1.245123);
   nvtx_Diboson__143->SetBinError(34,1.067556);
   nvtx_Diboson__143->SetBinError(35,0.8053047);
   nvtx_Diboson__143->SetBinError(36,0.8989404);
   nvtx_Diboson__143->SetBinError(37,0.6634141);
   nvtx_Diboson__143->SetBinError(38,0.5687176);
   nvtx_Diboson__143->SetBinError(39,0.8751835);
   nvtx_Diboson__143->SetBinError(40,0.5692468);
   nvtx_Diboson__143->SetBinError(41,1.563421);
   nvtx_Diboson__143->SetEntries(511);
   nvtx_Diboson__143->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__143->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__143->SetMarkerColor(ci);
   nvtx_Diboson__143->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson__143->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson__143->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson__143->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson__143->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson__143->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson__143->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson__143->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson__143->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson__143->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson__143->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson__143->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson__143->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson__143->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson,"hist");
   
   TH1F *nvtx_DY__144 = new TH1F("nvtx_DY__144","DY",40,0,40);
   nvtx_DY__144->SetBinContent(13,38.66452);
   nvtx_DY__144->SetBinContent(14,19.39491);
   nvtx_DY__144->SetBinContent(15,33.82054);
   nvtx_DY__144->SetBinContent(16,17.57083);
   nvtx_DY__144->SetBinContent(18,16.29086);
   nvtx_DY__144->SetBinContent(21,36.22921);
   nvtx_DY__144->SetBinContent(22,14.39964);
   nvtx_DY__144->SetBinContent(23,34.98171);
   nvtx_DY__144->SetBinContent(26,15.96457);
   nvtx_DY__144->SetBinContent(27,18.13515);
   nvtx_DY__144->SetBinContent(30,19.12663);
   nvtx_DY__144->SetBinContent(31,34.51785);
   nvtx_DY__144->SetBinContent(34,16.99921);
   nvtx_DY__144->SetBinContent(41,15.61073);
   nvtx_DY__144->SetBinError(13,27.35422);
   nvtx_DY__144->SetBinError(14,19.39491);
   nvtx_DY__144->SetBinError(15,23.14632);
   nvtx_DY__144->SetBinError(16,15.70766);
   nvtx_DY__144->SetBinError(18,16.29087);
   nvtx_DY__144->SetBinError(21,25.71461);
   nvtx_DY__144->SetBinError(22,14.39964);
   nvtx_DY__144->SetBinError(23,24.77869);
   nvtx_DY__144->SetBinError(26,15.96457);
   nvtx_DY__144->SetBinError(27,18.13515);
   nvtx_DY__144->SetBinError(30,19.12663);
   nvtx_DY__144->SetBinError(31,24.4698);
   nvtx_DY__144->SetBinError(34,16.99921);
   nvtx_DY__144->SetBinError(41,15.61073);
   nvtx_DY__144->SetEntries(21);
   nvtx_DY__144->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__144->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__144->SetMarkerColor(ci);
   nvtx_DY__144->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY__144->GetXaxis()->SetLabelFont(42);
   nvtx_DY__144->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY__144->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY__144->GetXaxis()->SetTitleFont(42);
   nvtx_DY__144->GetYaxis()->SetTitle(" Events");
   nvtx_DY__144->GetYaxis()->SetLabelFont(42);
   nvtx_DY__144->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY__144->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY__144->GetYaxis()->SetTitleFont(42);
   nvtx_DY__144->GetZaxis()->SetLabelFont(42);
   nvtx_DY__144->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY__144->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY__144->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY,"hist");
   
   TH1F *nvtx_W__145 = new TH1F("nvtx_W__145","W",40,0,40);
   nvtx_W__145->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__145->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__145->SetMarkerColor(ci);
   nvtx_W__145->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W__145->GetXaxis()->SetLabelFont(42);
   nvtx_W__145->GetXaxis()->SetLabelSize(0.035);
   nvtx_W__145->GetXaxis()->SetTitleSize(0.035);
   nvtx_W__145->GetXaxis()->SetTitleFont(42);
   nvtx_W__145->GetYaxis()->SetTitle(" Events");
   nvtx_W__145->GetYaxis()->SetLabelFont(42);
   nvtx_W__145->GetYaxis()->SetLabelSize(0.035);
   nvtx_W__145->GetYaxis()->SetTitleSize(0.035);
   nvtx_W__145->GetYaxis()->SetTitleFont(42);
   nvtx_W__145->GetZaxis()->SetLabelFont(42);
   nvtx_W__145->GetZaxis()->SetLabelSize(0.035);
   nvtx_W__145->GetZaxis()->SetTitleSize(0.035);
   nvtx_W__145->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W,"hist");
   
   TH1F *nvtx_SinglesPtop__146 = new TH1F("nvtx_SinglesPtop__146","Single top",40,0,40);
   nvtx_SinglesPtop__146->SetBinContent(2,1.462832);
   nvtx_SinglesPtop__146->SetBinContent(3,1.553983);
   nvtx_SinglesPtop__146->SetBinContent(5,5.582844);
   nvtx_SinglesPtop__146->SetBinContent(6,9.929082);
   nvtx_SinglesPtop__146->SetBinContent(7,24.94729);
   nvtx_SinglesPtop__146->SetBinContent(8,55.89536);
   nvtx_SinglesPtop__146->SetBinContent(9,63.2588);
   nvtx_SinglesPtop__146->SetBinContent(10,95.54023);
   nvtx_SinglesPtop__146->SetBinContent(11,115.875);
   nvtx_SinglesPtop__146->SetBinContent(12,173.1176);
   nvtx_SinglesPtop__146->SetBinContent(13,239.1669);
   nvtx_SinglesPtop__146->SetBinContent(14,261.2765);
   nvtx_SinglesPtop__146->SetBinContent(15,295.5053);
   nvtx_SinglesPtop__146->SetBinContent(16,358.7266);
   nvtx_SinglesPtop__146->SetBinContent(17,345.403);
   nvtx_SinglesPtop__146->SetBinContent(18,393.5217);
   nvtx_SinglesPtop__146->SetBinContent(19,370.1881);
   nvtx_SinglesPtop__146->SetBinContent(20,382.1055);
   nvtx_SinglesPtop__146->SetBinContent(21,359.3303);
   nvtx_SinglesPtop__146->SetBinContent(22,323.1664);
   nvtx_SinglesPtop__146->SetBinContent(23,290.4366);
   nvtx_SinglesPtop__146->SetBinContent(24,268.4556);
   nvtx_SinglesPtop__146->SetBinContent(25,266.9888);
   nvtx_SinglesPtop__146->SetBinContent(26,232.6319);
   nvtx_SinglesPtop__146->SetBinContent(27,220.0368);
   nvtx_SinglesPtop__146->SetBinContent(28,160.7997);
   nvtx_SinglesPtop__146->SetBinContent(29,152.587);
   nvtx_SinglesPtop__146->SetBinContent(30,156.9255);
   nvtx_SinglesPtop__146->SetBinContent(31,128.4676);
   nvtx_SinglesPtop__146->SetBinContent(32,103.2569);
   nvtx_SinglesPtop__146->SetBinContent(33,80.50037);
   nvtx_SinglesPtop__146->SetBinContent(34,78.3559);
   nvtx_SinglesPtop__146->SetBinContent(35,63.84501);
   nvtx_SinglesPtop__146->SetBinContent(36,57.05404);
   nvtx_SinglesPtop__146->SetBinContent(37,40.99373);
   nvtx_SinglesPtop__146->SetBinContent(38,40.44538);
   nvtx_SinglesPtop__146->SetBinContent(39,23.87106);
   nvtx_SinglesPtop__146->SetBinContent(40,25.82519);
   nvtx_SinglesPtop__146->SetBinContent(41,129.9147);
   nvtx_SinglesPtop__146->SetBinError(2,1.462832);
   nvtx_SinglesPtop__146->SetBinError(3,1.553983);
   nvtx_SinglesPtop__146->SetBinError(5,2.796876);
   nvtx_SinglesPtop__146->SetBinError(6,3.517771);
   nvtx_SinglesPtop__146->SetBinError(7,5.74149);
   nvtx_SinglesPtop__146->SetBinError(8,8.633463);
   nvtx_SinglesPtop__146->SetBinError(9,9.164872);
   nvtx_SinglesPtop__146->SetBinError(10,11.40477);
   nvtx_SinglesPtop__146->SetBinError(11,12.5095);
   nvtx_SinglesPtop__146->SetBinError(12,15.31605);
   nvtx_SinglesPtop__146->SetBinError(13,17.71468);
   nvtx_SinglesPtop__146->SetBinError(14,18.69286);
   nvtx_SinglesPtop__146->SetBinError(15,19.93559);
   nvtx_SinglesPtop__146->SetBinError(16,21.95328);
   nvtx_SinglesPtop__146->SetBinError(17,21.53316);
   nvtx_SinglesPtop__146->SetBinError(18,22.93563);
   nvtx_SinglesPtop__146->SetBinError(19,22.27692);
   nvtx_SinglesPtop__146->SetBinError(20,22.56098);
   nvtx_SinglesPtop__146->SetBinError(21,21.76174);
   nvtx_SinglesPtop__146->SetBinError(22,20.84791);
   nvtx_SinglesPtop__146->SetBinError(23,19.76736);
   nvtx_SinglesPtop__146->SetBinError(24,18.99818);
   nvtx_SinglesPtop__146->SetBinError(25,18.83691);
   nvtx_SinglesPtop__146->SetBinError(26,17.51468);
   nvtx_SinglesPtop__146->SetBinError(27,17.10138);
   nvtx_SinglesPtop__146->SetBinError(28,14.69855);
   nvtx_SinglesPtop__146->SetBinError(29,14.34931);
   nvtx_SinglesPtop__146->SetBinError(30,14.52215);
   nvtx_SinglesPtop__146->SetBinError(31,13.12954);
   nvtx_SinglesPtop__146->SetBinError(32,11.79756);
   nvtx_SinglesPtop__146->SetBinError(33,10.4098);
   nvtx_SinglesPtop__146->SetBinError(34,10.30644);
   nvtx_SinglesPtop__146->SetBinError(35,9.252273);
   nvtx_SinglesPtop__146->SetBinError(36,8.670882);
   nvtx_SinglesPtop__146->SetBinError(37,7.334421);
   nvtx_SinglesPtop__146->SetBinError(38,7.418589);
   nvtx_SinglesPtop__146->SetBinError(39,5.677711);
   nvtx_SinglesPtop__146->SetBinError(40,5.977724);
   nvtx_SinglesPtop__146->SetBinError(41,13.11344);
   nvtx_SinglesPtop__146->SetEntries(5156);
   nvtx_SinglesPtop__146->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__146->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__146->SetMarkerColor(ci);
   nvtx_SinglesPtop__146->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop__146->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__146->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__146->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__146->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__146->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop__146->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__146->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__146->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__146->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__146->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__146->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__146->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__146->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3041[41] = {
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
   Double_t Graph_from_nvtx_fy3041[41] = {
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
   Double_t Graph_from_nvtx_felx3041[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t Graph_from_nvtx_fely3041[41] = {
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
   Double_t Graph_from_nvtx_fehx3041[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t Graph_from_nvtx_fehy3041[41] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_nvtx_fx3041,Graph_from_nvtx_fy3041,Graph_from_nvtx_felx3041,Graph_from_nvtx_fehx3041,Graph_from_nvtx_fely3041,Graph_from_nvtx_fehy3041);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3041 = new TH1F("Graph_Graph_from_nvtx3041","Data",100,0,44);
   Graph_Graph_from_nvtx3041->SetMinimum(0);
   Graph_Graph_from_nvtx3041->SetMaximum(9907.044);
   Graph_Graph_from_nvtx3041->SetDirectory(0);
   Graph_Graph_from_nvtx3041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3041->SetLineColor(ci);
   Graph_Graph_from_nvtx3041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3041->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3041->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3041->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3041);
   
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
   
   TH1F *ratioframe__147 = new TH1F("ratioframe__147","t#bar{t}",40,0,40);
   ratioframe__147->SetMinimum(0.46);
   ratioframe__147->SetMaximum(1.54);
   ratioframe__147->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__147->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__147->SetMarkerColor(ci);
   ratioframe__147->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__147->GetXaxis()->SetLabelFont(42);
   ratioframe__147->GetXaxis()->SetLabelSize(0);
   ratioframe__147->GetXaxis()->SetTitleSize(0);
   ratioframe__147->GetXaxis()->SetTitleOffset(0);
   ratioframe__147->GetXaxis()->SetTitleFont(42);
   ratioframe__147->GetYaxis()->SetTitle("Data/MC");
   ratioframe__147->GetYaxis()->SetNoExponent();
   ratioframe__147->GetYaxis()->SetNdivisions(5);
   ratioframe__147->GetYaxis()->SetLabelFont(42);
   ratioframe__147->GetYaxis()->SetLabelSize(0.18);
   ratioframe__147->GetYaxis()->SetTitleSize(0.2);
   ratioframe__147->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__147->GetYaxis()->SetTitleFont(42);
   ratioframe__147->GetZaxis()->SetLabelFont(42);
   ratioframe__147->GetZaxis()->SetLabelSize(0.035);
   ratioframe__147->GetZaxis()->SetTitleSize(0.035);
   ratioframe__147->GetZaxis()->SetTitleFont(42);
   ratioframe__147->Draw("");
   
   Double_t Graph_from_ratio_fx3042[40] = {
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
   Double_t Graph_from_ratio_fy3042[40] = {
   0,
   1.391841,
   0.874918,
   1.189611,
   0.9893331,
   1.267547,
   1.277737,
   1.276046,
   1.338342,
   1.283559,
   1.245026,
   1.253546,
   1.210347,
   1.201146,
   1.168675,
   1.11955,
   1.082967,
   1.045026,
   0.9895672,
   0.9603845,
   0.9222361,
   0.8701676,
   0.8509192,
   0.8153874,
   0.7755427,
   0.7419401,
   0.6915695,
   0.6884049,
   0.6554189,
   0.5812109,
   0.5181726,
   0.5416371,
   0.4686965,
   0.4432175,
   0.4176834,
   0.3859746,
   0.340784,
   0.3228801,
   0.3297416,
   0.2711093};
   Double_t Graph_from_ratio_felx3042[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t Graph_from_ratio_fely3042[40] = {
   0,
   0.6396228,
   0.2627666,
   0.2110101,
   0.1119458,
   0.0928751,
   0.06502442,
   0.04890949,
   0.03887608,
   0.0304499,
   0.02518051,
   0.02203892,
   0.02014497,
   0.01781276,
   0.01645636,
   0.0149762,
   0.01405165,
   0.01358167,
   0.01296729,
   0.01275295,
   0.01299507,
   0.01260713,
   0.01322994,
   0.0131284,
   0.01341666,
   0.01393171,
   0.01424009,
   0.01512997,
   0.0157409,
   0.01611258,
   0.01634355,
   0.01753936,
   0.01729296,
   0.01846333,
   0.01891509,
   0.01970912,
   0.0199627,
   0.02026534,
   0.02353167,
   0.02256809};
   Double_t Graph_from_ratio_fehx3042[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
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
   Double_t Graph_from_ratio_fehy3042[40] = {
   0,
   0.6396228,
   0.2627666,
   0.2110101,
   0.1119458,
   0.0928751,
   0.06502442,
   0.04890949,
   0.03887608,
   0.0304499,
   0.02518051,
   0.02203892,
   0.02014497,
   0.01781276,
   0.01645636,
   0.0149762,
   0.01405165,
   0.01358167,
   0.01296729,
   0.01275295,
   0.01299507,
   0.01260713,
   0.01322994,
   0.0131284,
   0.01341666,
   0.01393171,
   0.01424009,
   0.01512997,
   0.0157409,
   0.01611258,
   0.01634355,
   0.01753936,
   0.01729296,
   0.01846333,
   0.01891509,
   0.01970912,
   0.0199627,
   0.02026534,
   0.02353167,
   0.02256809};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3042,Graph_from_ratio_fy3042,Graph_from_ratio_felx3042,Graph_from_ratio_fehx3042,Graph_from_ratio_fely3042,Graph_from_ratio_fehy3042);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3042 = new TH1F("Graph_Graph_from_ratio3042","Data",100,0,44);
   Graph_Graph_from_ratio3042->SetMinimum(0);
   Graph_Graph_from_ratio3042->SetMaximum(2.23461);
   Graph_Graph_from_ratio3042->SetDirectory(0);
   Graph_Graph_from_ratio3042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3042->SetLineColor(ci);
   Graph_Graph_from_ratio3042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3042->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3042);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
