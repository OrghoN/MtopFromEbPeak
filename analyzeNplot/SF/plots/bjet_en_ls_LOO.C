void bjet_en_ls_LOO()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:37:59 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-62.89028,7.240964,462.0288);
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
   frame__36->SetMaximum(456.7796);
   frame__36->SetEntries(592160);
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
   mc_stack_6->SetMaximum(368.9373);
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
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(3,110.6605);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(4,238.9063);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(5,310.4367);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(6,336.5848);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(7,336.1237);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(8,300.423);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(9,245.7408);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(10,184.3378);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(11,129.2636);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(12,82.38383);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(13,49.33172);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(14,28.38536);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(15,15.24947);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(16,7.542995);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(17,3.512519);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(18,1.536613);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(19,0.6530147);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(20,0.2651798);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinContent(21,0.1721636);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(3,1.154487);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(4,1.554681);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(5,1.606562);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(6,1.514127);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(7,1.370485);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(8,1.173253);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(9,0.9612239);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(10,0.7537319);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(11,0.5714755);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(12,0.4127978);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(13,0.2891977);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(14,0.1986126);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(15,0.1317444);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(16,0.08390803);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(17,0.05180905);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(18,0.03100631);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(19,0.01826441);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(20,0.01056367);
   bjet_en_ls_LOO_t#bar{t}__37->SetBinError(21,0.007321698);
   bjet_en_ls_LOO_t#bar{t}__37->SetEntries(584154);
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
   bjet_en_ls_LOO_Diboson__38->SetBinContent(4,0.2991109);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(5,0.2698281);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(6,0.3298217);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(7,0.2714794);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(8,0.2316977);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(9,0.1690401);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(10,0.1298514);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(11,0.1357129);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(12,0.09675106);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(13,0.05382225);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(14,0.02599407);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(15,0.0228312);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(16,0.01257439);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(17,0.01217188);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(18,0.006188313);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(19,0.002285537);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(20,0.003286);
   bjet_en_ls_LOO_Diboson__38->SetBinContent(21,0.001917642);
   bjet_en_ls_LOO_Diboson__38->SetBinError(3,0.04063248);
   bjet_en_ls_LOO_Diboson__38->SetBinError(4,0.05376928);
   bjet_en_ls_LOO_Diboson__38->SetBinError(5,0.04652356);
   bjet_en_ls_LOO_Diboson__38->SetBinError(6,0.04659475);
   bjet_en_ls_LOO_Diboson__38->SetBinError(7,0.0378797);
   bjet_en_ls_LOO_Diboson__38->SetBinError(8,0.03181932);
   bjet_en_ls_LOO_Diboson__38->SetBinError(9,0.02459585);
   bjet_en_ls_LOO_Diboson__38->SetBinError(10,0.01960872);
   bjet_en_ls_LOO_Diboson__38->SetBinError(11,0.018014);
   bjet_en_ls_LOO_Diboson__38->SetBinError(12,0.01368108);
   bjet_en_ls_LOO_Diboson__38->SetBinError(13,0.009349208);
   bjet_en_ls_LOO_Diboson__38->SetBinError(14,0.0058089);
   bjet_en_ls_LOO_Diboson__38->SetBinError(15,0.004738039);
   bjet_en_ls_LOO_Diboson__38->SetBinError(16,0.003341973);
   bjet_en_ls_LOO_Diboson__38->SetBinError(17,0.002966553);
   bjet_en_ls_LOO_Diboson__38->SetBinError(18,0.001882997);
   bjet_en_ls_LOO_Diboson__38->SetBinError(19,0.001023481);
   bjet_en_ls_LOO_Diboson__38->SetBinError(20,0.001113962);
   bjet_en_ls_LOO_Diboson__38->SetBinError(21,0.0007918673);
   bjet_en_ls_LOO_Diboson__38->SetEntries(622);
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
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(3,4.586171);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(4,9.921191);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(5,13.20849);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(6,13.27029);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(7,13.82958);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(8,11.6818);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(9,9.030622);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(10,7.017129);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(11,4.980768);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(12,3.488563);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(13,2.146488);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(14,1.23257);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(15,0.728758);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(16,0.457873);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(17,0.1888214);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(18,0.1076723);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(19,0.05153999);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(20,0.02092347);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinContent(21,0.0189971);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(3,0.4198921);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(4,0.5729526);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(5,0.5981461);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(6,0.5419325);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(7,0.5020574);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(8,0.4166646);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(9,0.3323531);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(10,0.2654123);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(11,0.202387);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(12,0.1538894);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(13,0.1094078);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(14,0.07504402);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(15,0.05250552);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(16,0.03723588);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(17,0.02159566);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(18,0.01465867);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(19,0.009219284);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(20,0.005347547);
   bjet_en_ls_LOO_SinglesPtop__41->SetBinError(21,0.004524327);
   bjet_en_ls_LOO_SinglesPtop__41->SetEntries(7358);
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
   107.4036,
   229.4646,
   295.5729,
   328.7997,
   329.4496,
   295.3944,
   238.5876,
   178.4086,
   123.1161,
   77.59556,
   46.89902,
   26.98445,
   14.29722,
   7.103313,
   3.372962,
   1.453055,
   0.6290116,
   0.262627,
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
   10.34763,
   15.14809,
   17.19223,
   18.13283,
   18.15075,
   17.18704,
   15.44628,
   13.34472,
   11.08091,
   8.789988,
   6.823911,
   5.162363,
   3.736555,
   2.601446,
   1.743064,
   1.061464,
   0.5826465,
   0.2620123,
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
   11.396,
   15.14809,
   17.19223,
   18.13283,
   18.15075,
   17.18704,
   15.44628,
   14.38225,
   12.12609,
   9.846909,
   7.897137,
   6.258894,
   4.869074,
   3.788928,
   3.012912,
   2.462375,
   2.149819,
   1.980961,
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
   Graph_Graph_from_bjet_en_ls_LOO3011->SetMaximum(382.3603);
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
   ratioframe__42->SetEntries(592160);

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
   0.9270836,
   0.9196778,
   0.9105193,
   0.9365982,
   0.9376173,
   0.9450875,
   0.9352112,
   0.931144,
   0.9147404,
   0.9015368,
   0.9088665,
   0.9081299,
   0.8908363,
   0.8819904,
   0.9013916,
   0.8656814,
   0.8898922,
   0.9075217};
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
   0.01857053,
   0.01140268,
   0.009048446,
   0.008029216,
   0.007304734,
   0.006950045,
   0.006917774,
   0.00720313,
   0.007734369,
   0.00865833,
   0.01019526,
   0.01225224,
   0.01493843,
   0.01923703,
   0.02606861,
   0.03621818,
   0.04734114,
   0.06786269};
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
   0.01857053,
   0.01140268,
   0.009048446,
   0.008029216,
   0.007304734,
   0.006950045,
   0.006917774,
   0.00720313,
   0.007734369,
   0.00865833,
   0.01019526,
   0.01225224,
   0.01493843,
   0.01923703,
   0.02606861,
   0.03621818,
   0.04734114,
   0.06786269};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3012->SetMinimum(0);
   Graph_Graph_from_ratio3012->SetMaximum(1.072923);
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
