void bjet_en_ls_LOO()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 15:23:10 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-64.32607,7.240964,472.5579);
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
   frame__36->SetMaximum(467.189);
   frame__36->SetEntries(52389);
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
   mc_stack_6->SetMinimum(-6.463648e-09);
   mc_stack_6->SetMaximum(377.345);
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
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(3,114.9118);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(4,256.1927);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(5,312.7296);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(6,344.4259);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(7,337.1242);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(8,304.3524);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(9,246.2643);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(10,177.1902);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(11,126.2709);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(12,76.42397);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(13,46.1833);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(14,25.72063);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(15,14.48953);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(16,6.66057);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(17,3.198154);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(18,1.523375);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(19,0.5326658);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(20,0.3125039);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(21,0.1486934);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(3,4.233927);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(4,5.811595);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(5,5.803614);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(6,5.522801);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(7,4.950571);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(8,4.258306);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(9,3.466794);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(10,2.658889);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(11,2.03715);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(12,1.436798);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(13,1.011561);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(14,0.6819982);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(15,0.4615255);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(16,0.2841577);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(17,0.1788235);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(18,0.1120419);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(19,0.05964781);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(20,0.04092625);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(21,0.02449148);
   bjet_en_ls_LOO_t#bar{t}__37->SetEntries(44199);
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
   bjet_en_ls_LOO_Diboson__38->SetBinContent(3,0.1558083);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(4,0.3097114);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(5,0.2952651);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(6,0.3491853);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(7,0.2831137);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(8,0.2370659);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(9,0.1728253);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(10,0.1326658);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(11,0.1380985);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(12,0.09675106);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(13,0.05541931);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(14,0.02599407);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(15,0.02436814);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(16,0.01353294);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(17,0.01217188);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(18,0.00684563);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(19,0.002285537);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(20,0.003286);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(21,0.001917642);
   bjet_en_ls_LOO_Diboson__38->SetBinError(3,0.04063248);
   bjet_en_ls_LOO_Diboson__38->SetBinError(4,0.05480426);
   bjet_en_ls_LOO_Diboson__38->SetBinError(5,0.04880322);
   bjet_en_ls_LOO_Diboson__38->SetBinError(6,0.04791847);
   bjet_en_ls_LOO_Diboson__38->SetBinError(7,0.0386155);
   bjet_en_ls_LOO_Diboson__38->SetBinError(8,0.03226897);
   bjet_en_ls_LOO_Diboson__38->SetBinError(9,0.0248854);
   bjet_en_ls_LOO_Diboson__38->SetBinError(10,0.01980966);
   bjet_en_ls_LOO_Diboson__38->SetBinError(11,0.01817128);
   bjet_en_ls_LOO_Diboson__38->SetBinError(12,0.01368108);
   bjet_en_ls_LOO_Diboson__38->SetBinError(13,0.009484635);
   bjet_en_ls_LOO_Diboson__38->SetBinError(14,0.0058089);
   bjet_en_ls_LOO_Diboson__38->SetBinError(15,0.004913177);
   bjet_en_ls_LOO_Diboson__38->SetBinError(16,0.003476723);
   bjet_en_ls_LOO_Diboson__38->SetBinError(17,0.002966553);
   bjet_en_ls_LOO_Diboson__38->SetBinError(18,0.001994428);
   bjet_en_ls_LOO_Diboson__38->SetBinError(19,0.001023481);
   bjet_en_ls_LOO_Diboson__38->SetBinError(20,0.001113962);
   bjet_en_ls_LOO_Diboson__38->SetBinError(21,0.0007918673);
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
   bjet_en_ls_LOO_DY__39->SetBinContent(3,0.4485483);
   bjet_en_ls_LOO_DY__39->SetBinContent(4,0.3788093);
   bjet_en_ls_LOO_DY__39->SetBinContent(5,0.7051129);
   bjet_en_ls_LOO_DY__39->SetBinContent(6,0.8723331);
   bjet_en_ls_LOO_DY__39->SetBinContent(7,1.144165);
   bjet_en_ls_LOO_DY__39->SetBinContent(8,0.2211949);
   bjet_en_ls_LOO_DY__39->SetBinContent(9,0.1758656);
   bjet_en_ls_LOO_DY__39->SetBinContent(10,0.1167993);
   bjet_en_ls_LOO_DY__39->SetBinContent(11,0.2111995);
   bjet_en_ls_LOO_DY__39->SetBinContent(12,0.1011749);
   bjet_en_ls_LOO_DY__39->SetBinContent(13,0.06962138);
   bjet_en_ls_LOO_DY__39->SetBinContent(14,0.07038381);
   bjet_en_ls_LOO_DY__39->SetBinContent(15,0.04815122);
   bjet_en_ls_LOO_DY__39->SetBinContent(16,0.0402879);
   bjet_en_ls_LOO_DY__39->SetBinContent(17,0.02843711);
   bjet_en_ls_LOO_DY__39->SetBinContent(18,0.02803578);
   bjet_en_ls_LOO_DY__39->SetBinError(3,0.4485483);
   bjet_en_ls_LOO_DY__39->SetBinError(4,0.3788093);
   bjet_en_ls_LOO_DY__39->SetBinError(5,0.4994181);
   bjet_en_ls_LOO_DY__39->SetBinError(6,0.503897);
   bjet_en_ls_LOO_DY__39->SetBinError(7,0.5130096);
   bjet_en_ls_LOO_DY__39->SetBinError(8,0.205806);
   bjet_en_ls_LOO_DY__39->SetBinError(9,0.1758656);
   bjet_en_ls_LOO_DY__39->SetBinError(10,0.1167993);
   bjet_en_ls_LOO_DY__39->SetBinError(11,0.1497144);
   bjet_en_ls_LOO_DY__39->SetBinError(12,0.09112528);
   bjet_en_ls_LOO_DY__39->SetBinError(13,0.06962138);
   bjet_en_ls_LOO_DY__39->SetBinError(14,0.07038381);
   bjet_en_ls_LOO_DY__39->SetBinError(15,0.04815122);
   bjet_en_ls_LOO_DY__39->SetBinError(16,0.0402879);
   bjet_en_ls_LOO_DY__39->SetBinError(17,0.02843711);
   bjet_en_ls_LOO_DY__39->SetBinError(18,0.02803578);
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
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(3,4.752838);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(4,10.4627);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(5,13.43393);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(6,13.72877);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(7,14.26585);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(8,12.064);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(9,9.126684);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(10,7.17271);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(11,5.092809);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(12,3.549644);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(13,2.163222);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(14,1.21779);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(15,0.7518112);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(16,0.4579873);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(17,0.1885347);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(18,0.1074377);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(19,0.05157597);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(20,0.02092347);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(21,0.0189971);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(3,0.4280956);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(4,0.589509);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(5,0.6032223);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(6,0.5510447);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(7,0.5101355);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(8,0.423724);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(9,0.3339638);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(10,0.268266);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(11,0.2046782);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(12,0.1552434);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(13,0.109702);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(14,0.07455787);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(15,0.05332886);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(16,0.03720376);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(17,0.02159553);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(18,0.01462549);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(19,0.009225705);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(20,0.005347547);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(21,0.004524327);
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
   ratioframe__42->SetEntries(52389);

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
   0.8918169,
   0.8549119,
   0.8974191,
   0.9062865,
   0.9249393,
   0.9209384,
   0.9208997,
   0.9529386,
   0.9189796,
   0.9507334,
   0.9493574,
   0.9775984,
   0.9089771,
   0.9601637,
   0.9482075,
   0.8250628,
   1.017575,
   0.7524993};
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
   0.03499817,
   0.02071597,
   0.01770836,
   0.0154711,
   0.01441229,
   0.01369218,
   0.01380708,
   0.01514604,
   0.01575038,
   0.01883098,
   0.02190748,
   0.0272814,
   0.03055222,
   0.04249789,
   0.05533464,
   0.06390738,
   0.1146344,
   0.1039455};
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
   0.03499817,
   0.02071597,
   0.01770836,
   0.0154711,
   0.01441229,
   0.01369218,
   0.01380708,
   0.01514604,
   0.01575038,
   0.01883098,
   0.02190748,
   0.0272814,
   0.03055222,
   0.04249789,
   0.05533464,
   0.06390738,
   0.1146344,
   0.1039455};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3012->SetMinimum(0);
   Graph_Graph_from_ratio3012->SetMaximum(1.24543);
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
