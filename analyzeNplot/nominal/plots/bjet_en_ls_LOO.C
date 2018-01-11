void bjet_en_ls_LOO()
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
   p1->Range(2.421687,-64.12189,7.240964,471.0605);
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
   
   TH1F *frame__113 = new TH1F("frame__113","t#bar{t}",20,3,7);
   frame__113->SetMinimum(0.1);
   frame__113->SetMaximum(465.7087);
   frame__113->SetEntries(597558);
   frame__113->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__113->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__113->SetMarkerColor(ci);
   frame__113->GetXaxis()->SetTitle("log(E)");
   frame__113->GetXaxis()->SetLabelFont(42);
   frame__113->GetXaxis()->SetLabelSize(0.035);
   frame__113->GetXaxis()->SetTitleSize(0.035);
   frame__113->GetXaxis()->SetTitleFont(42);
   frame__113->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
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
   
   TH1F *mc_stack_17 = new TH1F("mc_stack_17","mc",20,3,7);
   mc_stack_17->SetMinimum(-6.463648e-09);
   mc_stack_17->SetMaximum(376.1493);
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
   
   
   TH1F *bjet_en_ls_LOO_t#bar{t}__114 = new TH1F("bjet_en_ls_LOO_t#bar{t}__114","t#bar{t}",20,3,7);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(3,114.5274);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(4,245.6684);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(5,317.1694);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(6,343.2872);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(7,340.6846);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(8,303.5941);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(9,247.6762);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(10,185.4114);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(11,129.7852);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(12,82.54268);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(13,49.31637);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(14,28.29309);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(15,15.08864);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(16,7.471608);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(17,3.449333);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(18,1.503629);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(19,0.6331841);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(20,0.2548717);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinContent(21,0.1581561);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(3,1.174297);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(4,1.576591);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(5,1.623917);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(6,1.529147);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(7,1.379702);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(8,1.179542);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(9,0.9650126);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(10,0.7559054);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(11,0.5726421);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(12,0.4131866);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(13,0.2891468);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(14,0.1982834);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(15,0.1310257);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(16,0.08352188);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(17,0.05136364);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(18,0.03066384);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(19,0.01798451);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(20,0.01035497);
   bjet_en_ls_LOO_t#bar{t}__114->SetBinError(21,0.00700058);
   bjet_en_ls_LOO_t#bar{t}__114->SetEntries(589368);
   bjet_en_ls_LOO_t#bar{t}__114->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_LOO_t#bar{t}__114->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_LOO_t#bar{t}__114->SetMarkerColor(ci);
   bjet_en_ls_LOO_t#bar{t}__114->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_t#bar{t}__114->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__114->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_t#bar{t}__114->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_t#bar{t}__114->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__114->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_t#bar{t}__114->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_t#bar{t}__114->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_t#bar{t}__114->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_LOO_Diboson__115 = new TH1F("bjet_en_ls_LOO_Diboson__115","Diboson",20,3,7);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(3,0.1558083);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(4,0.3097114);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(5,0.2952651);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(6,0.3491853);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(7,0.2831137);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(8,0.2370659);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(9,0.1728253);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(10,0.1326658);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(11,0.1380985);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(12,0.09675106);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(13,0.05541931);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(14,0.02599407);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(15,0.02436814);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(16,0.01353294);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(17,0.01217188);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(18,0.00684563);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(19,0.002285537);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(20,0.003286);
   bjet_en_ls_LOO_Diboson__115->SetBinContent(21,0.001917642);
   bjet_en_ls_LOO_Diboson__115->SetBinError(3,0.04063248);
   bjet_en_ls_LOO_Diboson__115->SetBinError(4,0.05480426);
   bjet_en_ls_LOO_Diboson__115->SetBinError(5,0.04880322);
   bjet_en_ls_LOO_Diboson__115->SetBinError(6,0.04791847);
   bjet_en_ls_LOO_Diboson__115->SetBinError(7,0.0386155);
   bjet_en_ls_LOO_Diboson__115->SetBinError(8,0.03226897);
   bjet_en_ls_LOO_Diboson__115->SetBinError(9,0.0248854);
   bjet_en_ls_LOO_Diboson__115->SetBinError(10,0.01980966);
   bjet_en_ls_LOO_Diboson__115->SetBinError(11,0.01817128);
   bjet_en_ls_LOO_Diboson__115->SetBinError(12,0.01368108);
   bjet_en_ls_LOO_Diboson__115->SetBinError(13,0.009484635);
   bjet_en_ls_LOO_Diboson__115->SetBinError(14,0.0058089);
   bjet_en_ls_LOO_Diboson__115->SetBinError(15,0.004913177);
   bjet_en_ls_LOO_Diboson__115->SetBinError(16,0.003476723);
   bjet_en_ls_LOO_Diboson__115->SetBinError(17,0.002966553);
   bjet_en_ls_LOO_Diboson__115->SetBinError(18,0.001994428);
   bjet_en_ls_LOO_Diboson__115->SetBinError(19,0.001023481);
   bjet_en_ls_LOO_Diboson__115->SetBinError(20,0.001113962);
   bjet_en_ls_LOO_Diboson__115->SetBinError(21,0.0007918673);
   bjet_en_ls_LOO_Diboson__115->SetEntries(641);
   bjet_en_ls_LOO_Diboson__115->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_LOO_Diboson__115->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_LOO_Diboson__115->SetMarkerColor(ci);
   bjet_en_ls_LOO_Diboson__115->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_Diboson__115->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__115->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_Diboson__115->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_Diboson__115->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__115->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_Diboson__115->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_Diboson__115->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_Diboson__115->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_Diboson,"hist");
   
   TH1F *bjet_en_ls_LOO_DY__116 = new TH1F("bjet_en_ls_LOO_DY__116","DY",20,3,7);
   bjet_en_ls_LOO_DY__116->SetBinContent(3,0.4485483);
   bjet_en_ls_LOO_DY__116->SetBinContent(4,0.3788093);
   bjet_en_ls_LOO_DY__116->SetBinContent(5,0.7051129);
   bjet_en_ls_LOO_DY__116->SetBinContent(6,0.8723331);
   bjet_en_ls_LOO_DY__116->SetBinContent(7,1.144165);
   bjet_en_ls_LOO_DY__116->SetBinContent(8,0.2211949);
   bjet_en_ls_LOO_DY__116->SetBinContent(9,0.1758656);
   bjet_en_ls_LOO_DY__116->SetBinContent(10,0.1167993);
   bjet_en_ls_LOO_DY__116->SetBinContent(11,0.2111995);
   bjet_en_ls_LOO_DY__116->SetBinContent(12,0.1011749);
   bjet_en_ls_LOO_DY__116->SetBinContent(13,0.06962138);
   bjet_en_ls_LOO_DY__116->SetBinContent(14,0.07038381);
   bjet_en_ls_LOO_DY__116->SetBinContent(15,0.04815122);
   bjet_en_ls_LOO_DY__116->SetBinContent(16,0.0402879);
   bjet_en_ls_LOO_DY__116->SetBinContent(17,0.02843711);
   bjet_en_ls_LOO_DY__116->SetBinContent(18,0.02803578);
   bjet_en_ls_LOO_DY__116->SetBinError(3,0.4485483);
   bjet_en_ls_LOO_DY__116->SetBinError(4,0.3788093);
   bjet_en_ls_LOO_DY__116->SetBinError(5,0.4994181);
   bjet_en_ls_LOO_DY__116->SetBinError(6,0.503897);
   bjet_en_ls_LOO_DY__116->SetBinError(7,0.5130096);
   bjet_en_ls_LOO_DY__116->SetBinError(8,0.205806);
   bjet_en_ls_LOO_DY__116->SetBinError(9,0.1758656);
   bjet_en_ls_LOO_DY__116->SetBinError(10,0.1167993);
   bjet_en_ls_LOO_DY__116->SetBinError(11,0.1497144);
   bjet_en_ls_LOO_DY__116->SetBinError(12,0.09112528);
   bjet_en_ls_LOO_DY__116->SetBinError(13,0.06962138);
   bjet_en_ls_LOO_DY__116->SetBinError(14,0.07038381);
   bjet_en_ls_LOO_DY__116->SetBinError(15,0.04815122);
   bjet_en_ls_LOO_DY__116->SetBinError(16,0.0402879);
   bjet_en_ls_LOO_DY__116->SetBinError(17,0.02843711);
   bjet_en_ls_LOO_DY__116->SetBinError(18,0.02803578);
   bjet_en_ls_LOO_DY__116->SetEntries(26);
   bjet_en_ls_LOO_DY__116->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_LOO_DY__116->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_LOO_DY__116->SetMarkerColor(ci);
   bjet_en_ls_LOO_DY__116->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_DY__116->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__116->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__116->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__116->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_DY__116->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_DY__116->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__116->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__116->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__116->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_DY__116->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_DY__116->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_DY__116->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_DY__116->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_DY,"hist");
   
   TH1F *bjet_en_ls_LOO_W__117 = new TH1F("bjet_en_ls_LOO_W__117","W",20,3,7);
   bjet_en_ls_LOO_W__117->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_LOO_W__117->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_LOO_W__117->SetMarkerColor(ci);
   bjet_en_ls_LOO_W__117->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_W__117->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__117->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__117->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__117->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_W__117->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_W__117->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__117->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__117->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__117->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_W__117->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_W__117->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_W__117->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_W__117->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_W,"hist");
   
   TH1F *bjet_en_ls_LOO_SinglesPtop__118 = new TH1F("bjet_en_ls_LOO_SinglesPtop__118","Single top",20,3,7);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(3,4.752838);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(4,10.4627);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(5,13.43393);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(6,13.72877);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(7,14.26585);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(8,12.064);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(9,9.126684);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(10,7.17271);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(11,5.092809);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(12,3.549644);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(13,2.163222);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(14,1.21779);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(15,0.7518112);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(16,0.4579873);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(17,0.1885347);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(18,0.1074377);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(19,0.05157597);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(20,0.02092347);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinContent(21,0.0189971);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(3,0.4280956);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(4,0.589509);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(5,0.6032223);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(6,0.5510447);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(7,0.5101355);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(8,0.423724);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(9,0.3339638);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(10,0.268266);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(11,0.2046782);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(12,0.1552434);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(13,0.109702);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(14,0.07455787);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(15,0.05332886);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(16,0.03720376);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(17,0.02159553);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(18,0.01462549);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(19,0.009225705);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(20,0.005347547);
   bjet_en_ls_LOO_SinglesPtop__118->SetBinError(21,0.004524327);
   bjet_en_ls_LOO_SinglesPtop__118->SetEntries(7523);
   bjet_en_ls_LOO_SinglesPtop__118->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_LOO_SinglesPtop__118->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_LOO_SinglesPtop__118->SetMarkerColor(ci);
   bjet_en_ls_LOO_SinglesPtop__118->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_LOO_SinglesPtop__118->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__118->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_SinglesPtop__118->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_LOO_SinglesPtop__118->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__118->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_LOO_SinglesPtop__118->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_LOO_SinglesPtop__118->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_LOO_SinglesPtop__118->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_LOO_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_LOO_fx3033[21] = {
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
   Double_t Graph_from_bjet_en_ls_LOO_fy3033[21] = {
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
   Double_t Graph_from_bjet_en_ls_LOO_felx3033[21] = {
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
   Double_t Graph_from_bjet_en_ls_LOO_fely3033[21] = {
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
   Double_t Graph_from_bjet_en_ls_LOO_fehx3033[21] = {
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
   Double_t Graph_from_bjet_en_ls_LOO_fehy3033[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_LOO_fx3033,Graph_from_bjet_en_ls_LOO_fy3033,Graph_from_bjet_en_ls_LOO_felx3033,Graph_from_bjet_en_ls_LOO_fehx3033,Graph_from_bjet_en_ls_LOO_fely3033,Graph_from_bjet_en_ls_LOO_fehy3033);
   grae->SetName("Graph_from_bjet_en_ls_LOO");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_LOO3033 = new TH1F("Graph_Graph_from_bjet_en_ls_LOO3033","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_LOO3033->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_LOO3033->SetMaximum(378.8393);
   Graph_Graph_from_bjet_en_ls_LOO3033->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_LOO3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_LOO3033->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_LOO3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_LOO3033);
   
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
   
   TH1F *ratioframe__119 = new TH1F("ratioframe__119","t#bar{t}",20,3,7);
   ratioframe__119->SetMinimum(0.46);
   ratioframe__119->SetMaximum(1.54);
   ratioframe__119->SetEntries(597558);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetMarkerColor(ci);
   ratioframe__119->GetXaxis()->SetTitle("log(E)");
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
   
   Double_t Graph_from_ratio_fx3034[20] = {
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
   Double_t Graph_from_ratio_fy3034[20] = {
   0,
   0,
   0.8946766,
   0.8899456,
   0.8854036,
   0.9091673,
   0.9156986,
   0.9231477,
   0.9158436,
   0.9123109,
   0.8950974,
   0.8833182,
   0.8917192,
   0.8926588,
   0.8747548,
   0.8626203,
   0.8834606,
   0.8349608,
   0.8686985,
   0.9078957};
   Double_t Graph_from_ratio_felx3034[20] = {
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
   Double_t Graph_from_ratio_fely3034[20] = {
   0,
   0,
   0.0178235,
   0.01100396,
   0.008788461,
   0.007794219,
   0.007140981,
   0.006808061,
   0.006797397,
   0.007086881,
   0.007609423,
   0.008534977,
   0.01007008,
   0.01213631,
   0.01483531,
   0.0190474,
   0.02596453,
   0.03572796,
   0.04731129,
   0.06916734};
   Double_t Graph_from_ratio_fehx3034[20] = {
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
   Double_t Graph_from_ratio_fehy3034[20] = {
   0,
   0,
   0.0178235,
   0.01100396,
   0.008788461,
   0.007794219,
   0.007140981,
   0.006808061,
   0.006797397,
   0.007086881,
   0.007609423,
   0.008534977,
   0.01007008,
   0.01213631,
   0.01483531,
   0.0190474,
   0.02596453,
   0.03572796,
   0.04731129,
   0.06916734};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3034,Graph_from_ratio_fy3034,Graph_from_ratio_felx3034,Graph_from_ratio_fehx3034,Graph_from_ratio_fely3034,Graph_from_ratio_fehy3034);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3034 = new TH1F("Graph_Graph_from_ratio3034","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3034->SetMinimum(0);
   Graph_Graph_from_ratio3034->SetMaximum(1.074769);
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
