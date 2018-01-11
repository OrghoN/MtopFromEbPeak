void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:38:00 2018) by ROOT version6.08/07
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
   p1->Range(-5.783133,-1614.397,42.40964,11839.74);
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
   frame__71->SetMaximum(11705.2);
   frame__71->SetEntries(360574);
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
   mc_stack_11->SetMaximum(8825.094);
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
   nvtx_t#bar{t}__72->SetBinContent(2,5.003424);
   nvtx_t#bar{t}__72->SetBinContent(3,15.79608);
   nvtx_t#bar{t}__72->SetBinContent(4,37.13127);
   nvtx_t#bar{t}__72->SetBinContent(5,107.5535);
   nvtx_t#bar{t}__72->SetBinContent(6,219.3293);
   nvtx_t#bar{t}__72->SetBinContent(7,447.3776);
   nvtx_t#bar{t}__72->SetBinContent(8,775.7993);
   nvtx_t#bar{t}__72->SetBinContent(9,1335.492);
   nvtx_t#bar{t}__72->SetBinContent(10,2056.479);
   nvtx_t#bar{t}__72->SetBinContent(11,2880.555);
   nvtx_t#bar{t}__72->SetBinContent(12,3789.124);
   nvtx_t#bar{t}__72->SetBinContent(13,4773.763);
   nvtx_t#bar{t}__72->SetBinContent(14,5724.416);
   nvtx_t#bar{t}__72->SetBinContent(15,6520.531);
   nvtx_t#bar{t}__72->SetBinContent(16,7197.437);
   nvtx_t#bar{t}__72->SetBinContent(17,7694.452);
   nvtx_t#bar{t}__72->SetBinContent(18,7995.042);
   nvtx_t#bar{t}__72->SetBinContent(19,8019.534);
   nvtx_t#bar{t}__72->SetBinContent(20,7975.499);
   nvtx_t#bar{t}__72->SetBinContent(21,7603.117);
   nvtx_t#bar{t}__72->SetBinContent(22,7289.205);
   nvtx_t#bar{t}__72->SetBinContent(23,6644.584);
   nvtx_t#bar{t}__72->SetBinContent(24,6090.735);
   nvtx_t#bar{t}__72->SetBinContent(25,5472.71);
   nvtx_t#bar{t}__72->SetBinContent(26,4921.41);
   nvtx_t#bar{t}__72->SetBinContent(27,4332.891);
   nvtx_t#bar{t}__72->SetBinContent(28,3713.267);
   nvtx_t#bar{t}__72->SetBinContent(29,3224.673);
   nvtx_t#bar{t}__72->SetBinContent(30,2767.238);
   nvtx_t#bar{t}__72->SetBinContent(31,2422.092);
   nvtx_t#bar{t}__72->SetBinContent(32,2065.935);
   nvtx_t#bar{t}__72->SetBinContent(33,1795.768);
   nvtx_t#bar{t}__72->SetBinContent(34,1545.641);
   nvtx_t#bar{t}__72->SetBinContent(35,1308.846);
   nvtx_t#bar{t}__72->SetBinContent(36,1094.514);
   nvtx_t#bar{t}__72->SetBinContent(37,932.6837);
   nvtx_t#bar{t}__72->SetBinContent(38,849.6636);
   nvtx_t#bar{t}__72->SetBinContent(39,651.6283);
   nvtx_t#bar{t}__72->SetBinContent(40,562.8503);
   nvtx_t#bar{t}__72->SetBinContent(41,2900.389);
   nvtx_t#bar{t}__72->SetBinError(2,1.429886);
   nvtx_t#bar{t}__72->SetBinError(3,2.539333);
   nvtx_t#bar{t}__72->SetBinError(4,3.864093);
   nvtx_t#bar{t}__72->SetBinError(5,6.697976);
   nvtx_t#bar{t}__72->SetBinError(6,9.507386);
   nvtx_t#bar{t}__72->SetBinError(7,13.57952);
   nvtx_t#bar{t}__72->SetBinError(8,17.82687);
   nvtx_t#bar{t}__72->SetBinError(9,23.40798);
   nvtx_t#bar{t}__72->SetBinError(10,29.09364);
   nvtx_t#bar{t}__72->SetBinError(11,34.39466);
   nvtx_t#bar{t}__72->SetBinError(12,39.44083);
   nvtx_t#bar{t}__72->SetBinError(13,44.32093);
   nvtx_t#bar{t}__72->SetBinError(14,48.48014);
   nvtx_t#bar{t}__72->SetBinError(15,51.71137);
   nvtx_t#bar{t}__72->SetBinError(16,54.38175);
   nvtx_t#bar{t}__72->SetBinError(17,56.21422);
   nvtx_t#bar{t}__72->SetBinError(18,57.28998);
   nvtx_t#bar{t}__72->SetBinError(19,57.44206);
   nvtx_t#bar{t}__72->SetBinError(20,57.22972);
   nvtx_t#bar{t}__72->SetBinError(21,55.88189);
   nvtx_t#bar{t}__72->SetBinError(22,54.71721);
   nvtx_t#bar{t}__72->SetBinError(23,52.2602);
   nvtx_t#bar{t}__72->SetBinError(24,49.98473);
   nvtx_t#bar{t}__72->SetBinError(25,47.41493);
   nvtx_t#bar{t}__72->SetBinError(26,44.95575);
   nvtx_t#bar{t}__72->SetBinError(27,42.17441);
   nvtx_t#bar{t}__72->SetBinError(28,39.06401);
   nvtx_t#bar{t}__72->SetBinError(29,36.35983);
   nvtx_t#bar{t}__72->SetBinError(30,33.6957);
   nvtx_t#bar{t}__72->SetBinError(31,31.53696);
   nvtx_t#bar{t}__72->SetBinError(32,29.15629);
   nvtx_t#bar{t}__72->SetBinError(33,27.20102);
   nvtx_t#bar{t}__72->SetBinError(34,25.21515);
   nvtx_t#bar{t}__72->SetBinError(35,23.18867);
   nvtx_t#bar{t}__72->SetBinError(36,21.22358);
   nvtx_t#bar{t}__72->SetBinError(37,19.59093);
   nvtx_t#bar{t}__72->SetBinError(38,18.68417);
   nvtx_t#bar{t}__72->SetBinError(39,16.32931);
   nvtx_t#bar{t}__72->SetBinError(40,15.19272);
   nvtx_t#bar{t}__72->SetBinError(41,34.50958);
   nvtx_t#bar{t}__72->SetEntries(355036);
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
   nvtx_Diboson__73->SetBinContent(13,4.028705);
   nvtx_Diboson__73->SetBinContent(14,5.729887);
   nvtx_Diboson__73->SetBinContent(15,8.17416);
   nvtx_Diboson__73->SetBinContent(16,8.262775);
   nvtx_Diboson__73->SetBinContent(17,9.446387);
   nvtx_Diboson__73->SetBinContent(18,8.873469);
   nvtx_Diboson__73->SetBinContent(19,6.904152);
   nvtx_Diboson__73->SetBinContent(20,8.424392);
   nvtx_Diboson__73->SetBinContent(21,10.60277);
   nvtx_Diboson__73->SetBinContent(22,7.62423);
   nvtx_Diboson__73->SetBinContent(23,10.71629);
   nvtx_Diboson__73->SetBinContent(24,5.598506);
   nvtx_Diboson__73->SetBinContent(25,9.528088);
   nvtx_Diboson__73->SetBinContent(26,5.460204);
   nvtx_Diboson__73->SetBinContent(27,7.281801);
   nvtx_Diboson__73->SetBinContent(28,5.937562);
   nvtx_Diboson__73->SetBinContent(29,4.949276);
   nvtx_Diboson__73->SetBinContent(30,5.061709);
   nvtx_Diboson__73->SetBinContent(31,1.809576);
   nvtx_Diboson__73->SetBinContent(32,3.410291);
   nvtx_Diboson__73->SetBinContent(33,3.542001);
   nvtx_Diboson__73->SetBinContent(34,2.994125);
   nvtx_Diboson__73->SetBinContent(35,1.743477);
   nvtx_Diboson__73->SetBinContent(36,1.233132);
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
   nvtx_Diboson__73->SetBinError(13,1.235511);
   nvtx_Diboson__73->SetBinError(14,1.515861);
   nvtx_Diboson__73->SetBinError(15,1.772246);
   nvtx_Diboson__73->SetBinError(16,1.775844);
   nvtx_Diboson__73->SetBinError(17,1.928752);
   nvtx_Diboson__73->SetBinError(18,1.886167);
   nvtx_Diboson__73->SetBinError(19,1.556927);
   nvtx_Diboson__73->SetBinError(20,1.808415);
   nvtx_Diboson__73->SetBinError(21,1.980794);
   nvtx_Diboson__73->SetBinError(22,1.727458);
   nvtx_Diboson__73->SetBinError(23,2.0842);
   nvtx_Diboson__73->SetBinError(24,1.500105);
   nvtx_Diboson__73->SetBinError(25,1.936233);
   nvtx_Diboson__73->SetBinError(26,1.431717);
   nvtx_Diboson__73->SetBinError(27,1.676912);
   nvtx_Diboson__73->SetBinError(28,1.510425);
   nvtx_Diboson__73->SetBinError(29,1.369896);
   nvtx_Diboson__73->SetBinError(30,1.363266);
   nvtx_Diboson__73->SetBinError(31,0.8206712);
   nvtx_Diboson__73->SetBinError(32,1.144002);
   nvtx_Diboson__73->SetBinError(33,1.182192);
   nvtx_Diboson__73->SetBinError(34,1.067556);
   nvtx_Diboson__73->SetBinError(35,0.8053047);
   nvtx_Diboson__73->SetBinError(36,0.707751);
   nvtx_Diboson__73->SetBinError(37,0.6634141);
   nvtx_Diboson__73->SetBinError(38,0.5687176);
   nvtx_Diboson__73->SetBinError(39,0.8751835);
   nvtx_Diboson__73->SetBinError(40,0.5692468);
   nvtx_Diboson__73->SetBinError(41,1.563421);
   nvtx_Diboson__73->SetEntries(498);
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
   nvtx_SinglesPtop__76->SetBinContent(7,23.54027);
   nvtx_SinglesPtop__76->SetBinContent(8,54.3692);
   nvtx_SinglesPtop__76->SetBinContent(9,63.2588);
   nvtx_SinglesPtop__76->SetBinContent(10,94.03015);
   nvtx_SinglesPtop__76->SetBinContent(11,110.4009);
   nvtx_SinglesPtop__76->SetBinContent(12,167.5237);
   nvtx_SinglesPtop__76->SetBinContent(13,231.0999);
   nvtx_SinglesPtop__76->SetBinContent(14,259.6851);
   nvtx_SinglesPtop__76->SetBinContent(15,283.3008);
   nvtx_SinglesPtop__76->SetBinContent(16,349.0875);
   nvtx_SinglesPtop__76->SetBinContent(17,337.2939);
   nvtx_SinglesPtop__76->SetBinContent(18,384.6455);
   nvtx_SinglesPtop__76->SetBinContent(19,366.826);
   nvtx_SinglesPtop__76->SetBinContent(20,364.361);
   nvtx_SinglesPtop__76->SetBinContent(21,356.7752);
   nvtx_SinglesPtop__76->SetBinContent(22,317.1622);
   nvtx_SinglesPtop__76->SetBinContent(23,283.4727);
   nvtx_SinglesPtop__76->SetBinContent(24,258.7189);
   nvtx_SinglesPtop__76->SetBinContent(25,261.114);
   nvtx_SinglesPtop__76->SetBinContent(26,230.3973);
   nvtx_SinglesPtop__76->SetBinContent(27,204.6465);
   nvtx_SinglesPtop__76->SetBinContent(28,156.9334);
   nvtx_SinglesPtop__76->SetBinContent(29,145.9738);
   nvtx_SinglesPtop__76->SetBinContent(30,152.2672);
   nvtx_SinglesPtop__76->SetBinContent(31,124.6683);
   nvtx_SinglesPtop__76->SetBinContent(32,96.96446);
   nvtx_SinglesPtop__76->SetBinContent(33,79.71088);
   nvtx_SinglesPtop__76->SetBinContent(34,75.66441);
   nvtx_SinglesPtop__76->SetBinContent(35,63.87565);
   nvtx_SinglesPtop__76->SetBinContent(36,55.65505);
   nvtx_SinglesPtop__76->SetBinContent(37,39.5785);
   nvtx_SinglesPtop__76->SetBinContent(38,39.083);
   nvtx_SinglesPtop__76->SetBinContent(39,22.2858);
   nvtx_SinglesPtop__76->SetBinContent(40,25.82519);
   nvtx_SinglesPtop__76->SetBinContent(41,127.2156);
   nvtx_SinglesPtop__76->SetBinError(2,1.462832);
   nvtx_SinglesPtop__76->SetBinError(3,1.553983);
   nvtx_SinglesPtop__76->SetBinError(5,2.796876);
   nvtx_SinglesPtop__76->SetBinError(6,3.517771);
   nvtx_SinglesPtop__76->SetBinError(7,5.566417);
   nvtx_SinglesPtop__76->SetBinError(8,8.497862);
   nvtx_SinglesPtop__76->SetBinError(9,9.164872);
   nvtx_SinglesPtop__76->SetBinError(10,11.30435);
   nvtx_SinglesPtop__76->SetBinError(11,12.20624);
   nvtx_SinglesPtop__76->SetBinError(12,15.05527);
   nvtx_SinglesPtop__76->SetBinError(13,17.40092);
   nvtx_SinglesPtop__76->SetBinError(14,18.62967);
   nvtx_SinglesPtop__76->SetBinError(15,19.51469);
   nvtx_SinglesPtop__76->SetBinError(16,21.64823);
   nvtx_SinglesPtop__76->SetBinError(17,21.27458);
   nvtx_SinglesPtop__76->SetBinError(18,22.68614);
   nvtx_SinglesPtop__76->SetBinError(19,22.20254);
   nvtx_SinglesPtop__76->SetBinError(20,22.03125);
   nvtx_SinglesPtop__76->SetBinError(21,21.68213);
   nvtx_SinglesPtop__76->SetBinError(22,20.63899);
   nvtx_SinglesPtop__76->SetBinError(23,19.52075);
   nvtx_SinglesPtop__76->SetBinError(24,18.63615);
   nvtx_SinglesPtop__76->SetBinError(25,18.6315);
   nvtx_SinglesPtop__76->SetBinError(26,17.43367);
   nvtx_SinglesPtop__76->SetBinError(27,16.48344);
   nvtx_SinglesPtop__76->SetBinError(28,14.5208);
   nvtx_SinglesPtop__76->SetBinError(29,14.03393);
   nvtx_SinglesPtop__76->SetBinError(30,14.32104);
   nvtx_SinglesPtop__76->SetBinError(31,12.93875);
   nvtx_SinglesPtop__76->SetBinError(32,11.4543);
   nvtx_SinglesPtop__76->SetBinError(33,10.34441);
   nvtx_SinglesPtop__76->SetBinError(34,10.12919);
   nvtx_SinglesPtop__76->SetBinError(35,9.25662);
   nvtx_SinglesPtop__76->SetBinError(36,8.532272);
   nvtx_SinglesPtop__76->SetBinError(37,7.196586);
   nvtx_SinglesPtop__76->SetBinError(38,7.292419);
   nvtx_SinglesPtop__76->SetBinError(39,5.508249);
   nvtx_SinglesPtop__76->SetBinError(40,5.977724);
   nvtx_SinglesPtop__76->SetBinError(41,12.96248);
   nvtx_SinglesPtop__76->SetEntries(5019);
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
   115,
   295,
   617,
   1099,
   1921,
   2838,
   3841,
   5112,
   6291,
   7396,
   8229,
   8728,
   8922,
   9004,
   8532,
   8218,
   7603,
   6805,
   6091,
   5327,
   4573,
   3935,
   3263,
   2750,
   2273,
   1762,
   1377,
   1200,
   900,
   745,
   587,
   455,
   339,
   293,
   228,
   163,
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
   10.70841,
   17.17556,
   24.83948,
   33.15117,
   43.82921,
   53.27288,
   61.9758,
   71.49825,
   79.31582,
   86,
   90.71384,
   93.42377,
   94.45634,
   94.88941,
   92.36883,
   90.65319,
   87.19518,
   82.49242,
   78.04486,
   72.9863,
   67.62396,
   62.72958,
   57.12268,
   52.44044,
   47.67599,
   41.97618,
   37.10795,
   34.64102,
   30,
   27.29469,
   24.22808,
   21.33073,
   18.41195,
   17.11724,
   15.09967,
   12.75431,
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
   11.75516,
   17.17556,
   24.83948,
   33.15117,
   43.82921,
   53.27288,
   61.9758,
   71.49825,
   79.31582,
   86,
   90.71384,
   93.42377,
   94.45634,
   94.88941,
   92.36883,
   90.65319,
   87.19518,
   82.49242,
   78.04486,
   72.9863,
   67.62396,
   62.72958,
   57.12268,
   52.44044,
   47.67599,
   41.97618,
   37.10795,
   34.64102,
   30,
   27.29469,
   24.22808,
   21.33073,
   18.41195,
   17.11724,
   15.09967,
   13.79357,
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
   Graph_Graph_from_nvtx3021->SetMaximum(10008.78);
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
   ratioframe__77->SetEntries(360574);

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
   1.391841,
   0.9221867,
   1.265779,
   1.013375,
   1.286758,
   1.309,
   1.321376,
   1.371335,
   1.317726,
   1.281748,
   1.290575,
   1.246346,
   1.230774,
   1.202046,
   1.152613,
   1.109537,
   1.071286,
   1.016529,
   0.9843939,
   0.9495769,
   0.8920624,
   0.8734176,
   0.8382307,
   0.7962248,
   0.7606463,
   0.7151068,
   0.7094691,
   0.6733626,
   0.5985677,
   0.533083,
   0.5539373,
   0.4789728,
   0.4539087,
   0.4270753,
   0.3951705,
   0.348238,
   0.3293805,
   0.3373604,
   0.2765153};
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
   0.6396228,
   0.2796264,
   0.2268052,
   0.1146323,
   0.09407464,
   0.06663131,
   0.0507414,
   0.03981685,
   0.03125737,
   0.02591924,
   0.02269805,
   0.0207572,
   0.01827135,
   0.01692303,
   0.01540714,
   0.0143817,
   0.01391091,
   0.01329579,
   0.01304796,
   0.01335996,
   0.01290672,
   0.01355582,
   0.01347029,
   0.01373268,
   0.01424266,
   0.01467061,
   0.01553381,
   0.01612445,
   0.01655194,
   0.01677482,
   0.01788723,
   0.01760753,
   0.01884723,
   0.01926062,
   0.02012214,
   0.02033536,
   0.0206271,
   0.02394512,
   0.02297406};
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
   0.6396228,
   0.2796264,
   0.2268052,
   0.1146323,
   0.09407464,
   0.06663131,
   0.0507414,
   0.03981685,
   0.03125737,
   0.02591924,
   0.02269805,
   0.0207572,
   0.01827135,
   0.01692303,
   0.01540714,
   0.0143817,
   0.01391091,
   0.01329579,
   0.01304796,
   0.01335996,
   0.01290672,
   0.01355582,
   0.01347029,
   0.01373268,
   0.01424266,
   0.01467061,
   0.01553381,
   0.01612445,
   0.01655194,
   0.01677482,
   0.01788723,
   0.01760753,
   0.01884723,
   0.01926062,
   0.02012214,
   0.02033536,
   0.0206271,
   0.02394512,
   0.02297406};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,44);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(2.23461);
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
