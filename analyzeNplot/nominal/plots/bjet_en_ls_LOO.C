void bjet_en_ls_LOO()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 09:29:22 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-64.3272,7.240964,472.5661);
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
   
   TH1F *frame__36 = new TH1F("frame__36","t#bar{t}",20,3,7);
   frame__36->SetMinimum(0.1);
   frame__36->SetMaximum(467.1972);
   frame__36->SetEntries(597558);
   frame__36->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__36->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__36->SetMarkerColor(ci);
   frame__36->GetXaxis()->SetTitle("log(E)");
   frame__36->GetXaxis()->SetLabelFont(42);
   frame__36->GetXaxis()->SetLabelSize(0.035);
   frame__36->GetXaxis()->SetTitleSize(0.035);
   frame__36->GetXaxis()->SetTitleFont(42);
   frame__36->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__36->GetYaxis()->SetNoExponent();
   frame__36->GetYaxis()->SetLabelFont(42);
   frame__36->GetYaxis()->SetTitleSize(0.045);
   frame__36->GetYaxis()->SetTitleOffset(1.3);
   frame__36->GetYaxis()->SetTitleFont(42);
   frame__36->GetZaxis()->SetLabelFont(42);
   frame__36->GetZaxis()->SetLabelSize(0.035);
   frame__36->GetZaxis()->SetTitleSize(0.035);
   frame__36->GetZaxis()->SetTitleFont(42);
   frame__36->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_6 = new TH1F("mc_stack_6","mc",20,3,7);
   mc_stack_6->SetMinimum(-6.350547e-09);
   mc_stack_6->SetMaximum(377.3516);
   mc_stack_6->SetDirectory(0);
   mc_stack_6->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_6->SetLineColor(ci);
   mc_stack_6->GetXaxis()->SetLabelFont(42);
   mc_stack_6->GetXaxis()->SetLabelSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleFont(42);
   mc_stack_6->GetYaxis()->SetLabelFont(42);
   mc_stack_6->GetYaxis()->SetLabelSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleFont(42);
   mc_stack_6->GetZaxis()->SetLabelFont(42);
   mc_stack_6->GetZaxis()->SetLabelSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_6);
   
   
   TH1F *bjet_en_ls_LOO_t#bar{t}__37 = new TH1F("bjet_en_ls_LOO_t#bar{t}__37","t#bar{t}",20,3,7);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(3,115.5984);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(4,246.6767);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(5,317.2162);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(6,344.5588);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(7,340.9921);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(8,303.4572);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(9,247.6115);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(10,186.0743);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(11,129.8549);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(12,82.91045);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(13,49.43353);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(14,28.31837);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(15,15.11046);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(16,7.466717);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(17,3.413601);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(18,1.491105);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(19,0.6250134);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(20,0.2531528);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(21,0.1564838);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(3,1.179885);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(4,1.580566);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(5,1.622947);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(6,1.532262);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(7,1.379759);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(8,1.178566);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(9,0.9646144);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(10,0.7572042);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(11,0.5726291);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(12,0.4145715);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(13,0.2896042);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(14,0.1984688);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(15,0.1313141);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(16,0.08364669);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(17,0.05121201);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(18,0.03062698);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(19,0.01797115);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(20,0.01038708);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(21,0.007003325);
   bjet_en_ls_LOO_t#bar{t}__37->SetEntries(589368);
   bjet_en_ls_LOO_t#bar{t}__37->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_LOO_t#bar{t}__37->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_LOO_t#bar{t}__37->SetMarkerColor(ci);
   bjet_en_ls_LOO_t#bar{t}__37->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_t#bar{t}__37->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__37->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_t#bar{t}__37->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_t#bar{t}__37->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__37->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_t#bar{t}__37->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__37->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__37->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_LOO_Diboson__38 = new TH1F("bjet_en_ls_LOO_Diboson__38","Diboson",20,3,7);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(3,0.183184);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(4,0.3105639);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(5,0.2962457);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(6,0.3229672);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(7,0.2589126);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(8,0.2370586);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(9,0.1674386);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(10,0.1291434);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(11,0.1341241);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(12,0.09972002);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(13,0.05136253);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(14,0.0260403);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(15,0.03125168);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(16,0.01532797);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(17,0.01302081);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(18,0.006534787);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(19,0.002423944);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(20,0.00347085);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(21,0.001582106);
   bjet_en_ls_LOO_Diboson__38->SetBinError(3,0.04457303);
   bjet_en_ls_LOO_Diboson__38->SetBinError(4,0.05511124);
   bjet_en_ls_LOO_Diboson__38->SetBinError(5,0.04859594);
   bjet_en_ls_LOO_Diboson__38->SetBinError(6,0.04536574);
   bjet_en_ls_LOO_Diboson__38->SetBinError(7,0.03644021);
   bjet_en_ls_LOO_Diboson__38->SetBinError(8,0.03240529);
   bjet_en_ls_LOO_Diboson__38->SetBinError(9,0.02449451);
   bjet_en_ls_LOO_Diboson__38->SetBinError(10,0.01897822);
   bjet_en_ls_LOO_Diboson__38->SetBinError(11,0.01764283);
   bjet_en_ls_LOO_Diboson__38->SetBinError(12,0.01410976);
   bjet_en_ls_LOO_Diboson__38->SetBinError(13,0.009152016);
   bjet_en_ls_LOO_Diboson__38->SetBinError(14,0.005897212);
   bjet_en_ls_LOO_Diboson__38->SetBinError(15,0.005912681);
   bjet_en_ls_LOO_Diboson__38->SetBinError(16,0.003670411);
   bjet_en_ls_LOO_Diboson__38->SetBinError(17,0.003183261);
   bjet_en_ls_LOO_Diboson__38->SetBinError(18,0.001943766);
   bjet_en_ls_LOO_Diboson__38->SetBinError(19,0.00108712);
   bjet_en_ls_LOO_Diboson__38->SetBinError(20,0.001166052);
   bjet_en_ls_LOO_Diboson__38->SetBinError(21,0.0007027212);
   bjet_en_ls_LOO_Diboson__38->SetEntries(641);
   bjet_en_ls_LOO_Diboson__38->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_LOO_Diboson__38->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_LOO_Diboson__38->SetMarkerColor(ci);
   bjet_en_ls_LOO_Diboson__38->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_Diboson__38->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__38->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_Diboson__38->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_Diboson__38->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__38->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_Diboson__38->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__38->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__38->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_Diboson,"hist");
   
   TH1F *bjet_en_ls_LOO_DY__39 = new TH1F("bjet_en_ls_LOO_DY__39","DY",20,3,7);
   bjet_en_ls_LOO_DY__39->SetBinContent(3,0.6452885);
   bjet_en_ls_LOO_DY__39->SetBinContent(4,0.3716342);
   bjet_en_ls_LOO_DY__39->SetBinContent(5,0.6779599);
   bjet_en_ls_LOO_DY__39->SetBinContent(6,0.8790441);
   bjet_en_ls_LOO_DY__39->SetBinContent(7,1.125802);
   bjet_en_ls_LOO_DY__39->SetBinContent(8,0.4001417);
   bjet_en_ls_LOO_DY__39->SetBinContent(9,0.1521295);
   bjet_en_ls_LOO_DY__39->SetBinContent(10,0.1302662);
   bjet_en_ls_LOO_DY__39->SetBinContent(11,0.1505879);
   bjet_en_ls_LOO_DY__39->SetBinContent(12,0.1734468);
   bjet_en_ls_LOO_DY__39->SetBinContent(13,0.06326108);
   bjet_en_ls_LOO_DY__39->SetBinContent(14,0.07642314);
   bjet_en_ls_LOO_DY__39->SetBinContent(15,0.04662532);
   bjet_en_ls_LOO_DY__39->SetBinContent(16,0.04334441);
   bjet_en_ls_LOO_DY__39->SetBinContent(17,0.0006869603);
   bjet_en_ls_LOO_DY__39->SetBinContent(18,0.03044141);
   bjet_en_ls_LOO_DY__39->SetBinError(3,0.6452885);
   bjet_en_ls_LOO_DY__39->SetBinError(4,0.3716342);
   bjet_en_ls_LOO_DY__39->SetBinError(5,0.4797046);
   bjet_en_ls_LOO_DY__39->SetBinError(6,0.5084554);
   bjet_en_ls_LOO_DY__39->SetBinError(7,0.5048842);
   bjet_en_ls_LOO_DY__39->SetBinError(8,0.2835991);
   bjet_en_ls_LOO_DY__39->SetBinError(9,0.1521295);
   bjet_en_ls_LOO_DY__39->SetBinError(10,0.1302662);
   bjet_en_ls_LOO_DY__39->SetBinError(11,0.1101712);
   bjet_en_ls_LOO_DY__39->SetBinError(12,0.122679);
   bjet_en_ls_LOO_DY__39->SetBinError(13,0.06326108);
   bjet_en_ls_LOO_DY__39->SetBinError(14,0.07642314);
   bjet_en_ls_LOO_DY__39->SetBinError(15,0.04662532);
   bjet_en_ls_LOO_DY__39->SetBinError(16,0.04334441);
   bjet_en_ls_LOO_DY__39->SetBinError(17,0.0006869603);
   bjet_en_ls_LOO_DY__39->SetBinError(18,0.03044141);
   bjet_en_ls_LOO_DY__39->SetEntries(26);
   bjet_en_ls_LOO_DY__39->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_LOO_DY__39->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_LOO_DY__39->SetMarkerColor(ci);
   bjet_en_ls_LOO_DY__39->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_DY__39->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__39->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__39->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__39->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_DY__39->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_DY__39->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__39->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__39->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__39->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_DY__39->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__39->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__39->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__39->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_DY,"hist");
   
   TH1F *bjet_en_ls_LOO_W__40 = new TH1F("bjet_en_ls_LOO_W__40","W",20,3,7);
   bjet_en_ls_LOO_W__40->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_LOO_W__40->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_LOO_W__40->SetMarkerColor(ci);
   bjet_en_ls_LOO_W__40->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_W__40->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__40->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__40->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__40->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_W__40->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_W__40->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__40->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__40->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__40->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_W__40->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__40->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__40->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__40->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_W,"hist");
   
   TH1F *bjet_en_ls_LOO_SinglesPtop__41 = new TH1F("bjet_en_ls_LOO_SinglesPtop__41","Single top",20,3,7);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(3,4.975203);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(4,10.45698);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(5,13.58322);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(6,13.62161);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(7,14.07753);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(8,12.34697);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(9,9.114141);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(10,7.271472);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(11,5.175564);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(12,3.609182);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(13,2.087357);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(14,1.204829);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(15,0.7476629);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(16,0.4487298);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(17,0.1937327);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(18,0.1024304);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(19,0.05312138);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(20,0.01882928);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(21,0.02163273);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(3,0.440488);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(4,0.585818);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(5,0.6084091);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(6,0.5493382);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(7,0.5067068);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(8,0.429841);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(9,0.3326946);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(10,0.2705785);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(11,0.2063791);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(12,0.1568337);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(13,0.1074866);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(14,0.07319822);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(15,0.05283482);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(16,0.03666448);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(17,0.02213733);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(18,0.0143169);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(19,0.00950922);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(20,0.004936344);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(21,0.004886853);
   bjet_en_ls_LOO_SinglesPtop__41->SetEntries(7523);
   bjet_en_ls_LOO_SinglesPtop__41->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_LOO_SinglesPtop__41->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_LOO_SinglesPtop__41->SetMarkerColor(ci);
   bjet_en_ls_LOO_SinglesPtop__41->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_SinglesPtop__41->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__41->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_SinglesPtop__41->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_SinglesPtop__41->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__41->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_SinglesPtop__41->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__41->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__41->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_LOO_fx3011[21] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   0};
   Double_t Graph_from_bjet_en_ls_LOO_fy3011[21] = {
   0,
   0,
   107.2579,
   228.5555,
   293.6031,
   325.6978,
   326.3346,
   291.8221,
   235.5106,
   175.9242,
   121.0416,
   76.22175,
   46.01684,
   26.42918,
   13.91995,
   6.886657,
   3.249789,
   1.374302,
   0.5968356,
   0.2533766,
   0};
   Double_t Graph_from_bjet_en_ls_LOO_felx3011[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjet_en_ls_LOO_fely3011[21] = {
   0,
   0,
   10.34058,
   15.11805,
   17.13485,
   18.0471,
   18.06473,
   17.0828,
   15.34635,
   13.25131,
   10.9869,
   8.711488,
   6.75896,
   5.108296,
   3.685722,
   2.559466,
   1.707407,
   1.024273,
   0.5580547,
   0.2529036,
   0};
   Double_t Graph_from_bjet_en_ls_LOO_fehx3011[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjet_en_ls_LOO_fehy3011[21] = {
   1.841055,
   1.841055,
   11.38899,
   15.11805,
   17.13485,
   18.0471,
   18.06473,
   17.0828,
   15.34635,
   14.2891,
   12.03247,
   9.768919,
   7.832884,
   6.205835,
   4.820017,
   3.749836,
   2.982143,
   2.43537,
   2.135942,
   1.976345,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_LOO_fx3011,Graph_from_bjet_en_ls_LOO_fy3011,Graph_from_bjet_en_ls_LOO_felx3011,Graph_from_bjet_en_ls_LOO_fehx3011,Graph_from_bjet_en_ls_LOO_fely3011,Graph_from_bjet_en_ls_LOO_fehy3011);
   grae->SetName("Graph_from_bjet_en_ls_LOO");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_LOO3011 = new TH1F("Graph_Graph_from_bjet_en_ls_LOO3011","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_LOO3011->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_LOO3011->SetMaximum(378.8393);
   Graph_Graph_from_bjet_en_ls_LOO3011->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_LOO3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_LOO3011->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_LOO3011);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_en_ls_LOO","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_en_ls_LOO_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_en_ls_LOO_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_en_ls_LOO_DY","DY","f");

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
   entry=leg->AddEntry("bjet_en_ls_LOO_W","W","f");

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
   entry=leg->AddEntry("bjet_en_ls_LOO_Single top","Single top","f");

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
   p2->Range(2.421687,0.4485106,7.240964,1.597447);
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
   
   TH1F *ratioframe__42 = new TH1F("ratioframe__42","t#bar{t}",20,3,7);
   ratioframe__42->SetMinimum(0.46);
   ratioframe__42->SetMaximum(1.54);
   ratioframe__42->SetEntries(597558);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetMarkerColor(ci);
   ratioframe__42->GetXaxis()->SetTitle("log(E)");
   ratioframe__42->GetXaxis()->SetLabelFont(42);
   ratioframe__42->GetXaxis()->SetLabelSize(0);
   ratioframe__42->GetXaxis()->SetTitleSize(0);
   ratioframe__42->GetXaxis()->SetTitleOffset(0);
   ratioframe__42->GetXaxis()->SetTitleFont(42);
   ratioframe__42->GetYaxis()->SetTitle("Data/MC");
   ratioframe__42->GetYaxis()->SetNoExponent();
   ratioframe__42->GetYaxis()->SetNdivisions(5);
   ratioframe__42->GetYaxis()->SetLabelFont(42);
   ratioframe__42->GetYaxis()->SetLabelSize(0.18);
   ratioframe__42->GetYaxis()->SetTitleSize(0.2);
   ratioframe__42->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__42->GetYaxis()->SetTitleFont(42);
   ratioframe__42->GetZaxis()->SetLabelFont(42);
   ratioframe__42->GetZaxis()->SetLabelSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleFont(42);
   ratioframe__42->Draw("");
   
   Double_t Graph_from_ratio_fx3012[20] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9};
   Double_t Graph_from_ratio_fy3012[20] = {
   0,
   0,
   0.8834932,
   0.8865069,
   0.8849502,
   0.9062707,
   0.9155019,
   0.9221994,
   0.9162225,
   0.9086749,
   0.8945159,
   0.8782035,
   0.891186,
   0.8921041,
   0.8734909,
   0.8636261,
   0.8974737,
   0.8428655,
   0.8769788,
   0.9198544};
   Double_t Graph_from_ratio_felx3012[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3012[20] = {
   0,
   0,
   0.01789093,
   0.01095049,
   0.008776053,
   0.007766718,
   0.007133527,
   0.006824553,
   0.006792234,
   0.007060563,
   0.00757534,
   0.008521829,
   0.01004646,
   0.01215484,
   0.01479609,
   0.0191498,
   0.02557562,
   0.03667448,
   0.04798189,
   0.07008609};
   Double_t Graph_from_ratio_fehx3012[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3012[20] = {
   0,
   0,
   0.01789093,
   0.01095049,
   0.008776053,
   0.007766718,
   0.007133527,
   0.006824553,
   0.006792234,
   0.007060563,
   0.00757534,
   0.008521829,
   0.01004646,
   0.01215484,
   0.01479609,
   0.0191498,
   0.02557562,
   0.03667448,
   0.04798189,
   0.07008609};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3012->SetMinimum(0);
   Graph_Graph_from_ratio3012->SetMaximum(1.088935);
   Graph_Graph_from_ratio3012->SetDirectory(0);
   Graph_Graph_from_ratio3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3012->SetLineColor(ci);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3012);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
