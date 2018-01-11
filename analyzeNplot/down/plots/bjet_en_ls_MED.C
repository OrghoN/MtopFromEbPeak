void bjet_en_ls_MED()
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
   p1->Range(2.421687,-56.39751,7.240964,414.4151);
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
   
   TH1F *frame__50 = new TH1F("frame__50","t#bar{t}",20,3,7);
   frame__50->SetMinimum(0.1);
   frame__50->SetMaximum(409.7069);
   frame__50->SetEntries(44137);
   frame__50->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__50->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__50->SetMarkerColor(ci);
   frame__50->GetXaxis()->SetTitle("log(E)");
   frame__50->GetXaxis()->SetLabelFont(42);
   frame__50->GetXaxis()->SetLabelSize(0.035);
   frame__50->GetXaxis()->SetTitleSize(0.035);
   frame__50->GetXaxis()->SetTitleFont(42);
   frame__50->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__50->GetYaxis()->SetNoExponent();
   frame__50->GetYaxis()->SetLabelFont(42);
   frame__50->GetYaxis()->SetTitleSize(0.045);
   frame__50->GetYaxis()->SetTitleOffset(1.3);
   frame__50->GetYaxis()->SetTitleFont(42);
   frame__50->GetZaxis()->SetLabelFont(42);
   frame__50->GetZaxis()->SetLabelSize(0.035);
   frame__50->GetZaxis()->SetTitleSize(0.035);
   frame__50->GetZaxis()->SetTitleFont(42);
   frame__50->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_8 = new TH1F("mc_stack_8","mc",20,3,7);
   mc_stack_8->SetMinimum(-6.463648e-09);
   mc_stack_8->SetMaximum(330.9171);
   mc_stack_8->SetDirectory(0);
   mc_stack_8->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_8->SetLineColor(ci);
   mc_stack_8->GetXaxis()->SetLabelFont(42);
   mc_stack_8->GetXaxis()->SetLabelSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleSize(0.035);
   mc_stack_8->GetXaxis()->SetTitleFont(42);
   mc_stack_8->GetYaxis()->SetLabelFont(42);
   mc_stack_8->GetYaxis()->SetLabelSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleSize(0.035);
   mc_stack_8->GetYaxis()->SetTitleFont(42);
   mc_stack_8->GetZaxis()->SetLabelFont(42);
   mc_stack_8->GetZaxis()->SetLabelSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleSize(0.035);
   mc_stack_8->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_8);
   
   
   TH1F *bjet_en_ls_MED_t#bar{t}__51 = new TH1F("bjet_en_ls_MED_t#bar{t}__51","t#bar{t}",20,3,7);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(3,99.54156);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(4,230.2816);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(5,272.9294);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(6,302.0257);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(7,293.413);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(8,263.257);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(9,210.7055);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(10,150.8318);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(11,104.2695);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(12,63.01104);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(13,36.38618);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(14,20.03981);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(15,10.80234);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(16,4.872797);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(17,2.039697);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(18,0.9114783);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(19,0.2702434);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(20,0.0977014);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(21,0.009865794);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(3,3.942887);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(4,5.51497);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(5,5.424135);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(6,5.170983);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(7,4.620874);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(8,3.960943);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(9,3.208238);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(10,2.452942);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(11,1.852136);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(12,1.304405);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(13,0.8976767);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(14,0.6023839);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(15,0.3986461);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(16,0.2432448);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(17,0.1427838);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(18,0.08666491);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(19,0.04249203);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(20,0.02338644);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(21,0.006091245);
   bjet_en_ls_MED_t#bar{t}__51->SetEntries(37220);
   bjet_en_ls_MED_t#bar{t}__51->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_MED_t#bar{t}__51->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_MED_t#bar{t}__51->SetMarkerColor(ci);
   bjet_en_ls_MED_t#bar{t}__51->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_t#bar{t}__51->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__51->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_t#bar{t}__51->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_t#bar{t}__51->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__51->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_t#bar{t}__51->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__51->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__51->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_MED_Diboson__52 = new TH1F("bjet_en_ls_MED_Diboson__52","Diboson",20,3,7);
   bjet_en_ls_MED_Diboson__52->SetBinContent(3,0.134599);
   bjet_en_ls_MED_Diboson__52->SetBinContent(4,0.267095);
   bjet_en_ls_MED_Diboson__52->SetBinContent(5,0.2566822);
   bjet_en_ls_MED_Diboson__52->SetBinContent(6,0.2708047);
   bjet_en_ls_MED_Diboson__52->SetBinContent(7,0.2352162);
   bjet_en_ls_MED_Diboson__52->SetBinContent(8,0.2080979);
   bjet_en_ls_MED_Diboson__52->SetBinContent(9,0.1446551);
   bjet_en_ls_MED_Diboson__52->SetBinContent(10,0.1208192);
   bjet_en_ls_MED_Diboson__52->SetBinContent(11,0.1072335);
   bjet_en_ls_MED_Diboson__52->SetBinContent(12,0.0769822);
   bjet_en_ls_MED_Diboson__52->SetBinContent(13,0.05079685);
   bjet_en_ls_MED_Diboson__52->SetBinContent(14,0.02152406);
   bjet_en_ls_MED_Diboson__52->SetBinContent(15,0.02031586);
   bjet_en_ls_MED_Diboson__52->SetBinContent(16,0.01081927);
   bjet_en_ls_MED_Diboson__52->SetBinContent(17,0.01010579);
   bjet_en_ls_MED_Diboson__52->SetBinContent(18,0.00684563);
   bjet_en_ls_MED_Diboson__52->SetBinContent(19,0.001828043);
   bjet_en_ls_MED_Diboson__52->SetBinContent(20,0.002938897);
   bjet_en_ls_MED_Diboson__52->SetBinContent(21,0.001295976);
   bjet_en_ls_MED_Diboson__52->SetBinError(3,0.037752);
   bjet_en_ls_MED_Diboson__52->SetBinError(4,0.05132145);
   bjet_en_ls_MED_Diboson__52->SetBinError(5,0.04577474);
   bjet_en_ls_MED_Diboson__52->SetBinError(6,0.0422324);
   bjet_en_ls_MED_Diboson__52->SetBinError(7,0.03512287);
   bjet_en_ls_MED_Diboson__52->SetBinError(8,0.03009739);
   bjet_en_ls_MED_Diboson__52->SetBinError(9,0.02269039);
   bjet_en_ls_MED_Diboson__52->SetBinError(10,0.0188927);
   bjet_en_ls_MED_Diboson__52->SetBinError(11,0.01599878);
   bjet_en_ls_MED_Diboson__52->SetBinError(12,0.01220501);
   bjet_en_ls_MED_Diboson__52->SetBinError(13,0.009091361);
   bjet_en_ls_MED_Diboson__52->SetBinError(14,0.005287139);
   bjet_en_ls_MED_Diboson__52->SetBinError(15,0.004478148);
   bjet_en_ls_MED_Diboson__52->SetBinError(16,0.003102885);
   bjet_en_ls_MED_Diboson__52->SetBinError(17,0.002708063);
   bjet_en_ls_MED_Diboson__52->SetBinError(18,0.001994428);
   bjet_en_ls_MED_Diboson__52->SetBinError(19,0.0009155402);
   bjet_en_ls_MED_Diboson__52->SetBinError(20,0.001058505);
   bjet_en_ls_MED_Diboson__52->SetBinError(21,0.0006564165);
   bjet_en_ls_MED_Diboson__52->SetEntries(540);
   bjet_en_ls_MED_Diboson__52->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_MED_Diboson__52->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_MED_Diboson__52->SetMarkerColor(ci);
   bjet_en_ls_MED_Diboson__52->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_Diboson__52->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__52->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_Diboson__52->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_Diboson__52->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__52->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_Diboson__52->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__52->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__52->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_Diboson,"hist");
   
   TH1F *bjet_en_ls_MED_DY__53 = new TH1F("bjet_en_ls_MED_DY__53","DY",20,3,7);
   bjet_en_ls_MED_DY__53->SetBinContent(3,0.4485483);
   bjet_en_ls_MED_DY__53->SetBinContent(4,0.3788093);
   bjet_en_ls_MED_DY__53->SetBinContent(5,0.7051129);
   bjet_en_ls_MED_DY__53->SetBinContent(6,0.8723331);
   bjet_en_ls_MED_DY__53->SetBinContent(7,0.9087102);
   bjet_en_ls_MED_DY__53->SetBinContent(8,0.2211949);
   bjet_en_ls_MED_DY__53->SetBinContent(10,0.1167993);
   bjet_en_ls_MED_DY__53->SetBinContent(11,0.2111995);
   bjet_en_ls_MED_DY__53->SetBinContent(12,0.1011749);
   bjet_en_ls_MED_DY__53->SetBinContent(13,0.06962138);
   bjet_en_ls_MED_DY__53->SetBinContent(14,0.07038381);
   bjet_en_ls_MED_DY__53->SetBinContent(15,0.04815122);
   bjet_en_ls_MED_DY__53->SetBinContent(16,0.0402879);
   bjet_en_ls_MED_DY__53->SetBinContent(17,0.02843711);
   bjet_en_ls_MED_DY__53->SetBinContent(18,0.02803578);
   bjet_en_ls_MED_DY__53->SetBinError(3,0.4485483);
   bjet_en_ls_MED_DY__53->SetBinError(4,0.3788093);
   bjet_en_ls_MED_DY__53->SetBinError(5,0.4994181);
   bjet_en_ls_MED_DY__53->SetBinError(6,0.503897);
   bjet_en_ls_MED_DY__53->SetBinError(7,0.4557849);
   bjet_en_ls_MED_DY__53->SetBinError(8,0.205806);
   bjet_en_ls_MED_DY__53->SetBinError(10,0.1167993);
   bjet_en_ls_MED_DY__53->SetBinError(11,0.1497144);
   bjet_en_ls_MED_DY__53->SetBinError(12,0.09112528);
   bjet_en_ls_MED_DY__53->SetBinError(13,0.06962138);
   bjet_en_ls_MED_DY__53->SetBinError(14,0.07038381);
   bjet_en_ls_MED_DY__53->SetBinError(15,0.04815122);
   bjet_en_ls_MED_DY__53->SetBinError(16,0.0402879);
   bjet_en_ls_MED_DY__53->SetBinError(17,0.02843711);
   bjet_en_ls_MED_DY__53->SetBinError(18,0.02803578);
   bjet_en_ls_MED_DY__53->SetEntries(24);
   bjet_en_ls_MED_DY__53->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_MED_DY__53->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_MED_DY__53->SetMarkerColor(ci);
   bjet_en_ls_MED_DY__53->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_DY__53->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__53->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__53->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__53->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_DY__53->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_DY__53->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__53->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__53->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__53->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_DY__53->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__53->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__53->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__53->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_DY,"hist");
   
   TH1F *bjet_en_ls_MED_W__54 = new TH1F("bjet_en_ls_MED_W__54","W",20,3,7);
   bjet_en_ls_MED_W__54->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_MED_W__54->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_MED_W__54->SetMarkerColor(ci);
   bjet_en_ls_MED_W__54->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_W__54->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__54->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__54->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__54->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_W__54->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_W__54->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__54->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__54->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__54->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_W__54->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__54->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__54->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__54->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_W,"hist");
   
   TH1F *bjet_en_ls_MED_SinglesPtop__55 = new TH1F("bjet_en_ls_MED_SinglesPtop__55","Single top",20,3,7);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(3,4.290721);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(4,8.998571);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(5,11.93483);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(6,11.99029);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(7,12.31244);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(8,10.58476);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(9,7.779629);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(10,6.234035);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(11,4.30353);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(12,2.854313);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(13,1.774811);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(14,0.9989377);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(15,0.5921883);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(16,0.3050357);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(17,0.1424705);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(18,0.06409469);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(19,0.03250463);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(20,0.01220403);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(21,0.009178041);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(3,0.4065033);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(4,0.5461552);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(5,0.5692374);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(6,0.5150782);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(7,0.4742055);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(8,0.3966586);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(9,0.308616);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(10,0.2503392);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(11,0.1882971);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(12,0.1388784);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(13,0.09935133);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(14,0.06744425);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(15,0.04722682);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(16,0.03033769);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(17,0.0188599);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(18,0.01110541);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(19,0.007394631);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(20,0.004122966);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(21,0.003144888);
   bjet_en_ls_MED_SinglesPtop__55->SetEntries(6353);
   bjet_en_ls_MED_SinglesPtop__55->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_MED_SinglesPtop__55->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_MED_SinglesPtop__55->SetMarkerColor(ci);
   bjet_en_ls_MED_SinglesPtop__55->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_SinglesPtop__55->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__55->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_SinglesPtop__55->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_SinglesPtop__55->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__55->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_SinglesPtop__55->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__55->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__55->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_MED_fx3015[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fy3015[21] = {
   0,
   0,
   92.7945,
   197.9431,
   255.2428,
   284.5028,
   281.9935,
   252.0936,
   202.7139,
   149.4754,
   101.0653,
   62.26832,
   36.53798,
   20.55606,
   10.39831,
   4.765559,
   2.074745,
   0.8329404,
   0.2820291,
   0.08633442,
   0};
   Double_t Graph_from_bjet_en_ls_MED_felx3015[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fely3015[21] = {
   0,
   0,
   9.615798,
   14.05763,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   12.21258,
   10.03667,
   7.869935,
   6.016987,
   4.496794,
   3.172168,
   2.104764,
   1.320296,
   0.7249367,
   0.2810206,
   0.08633442,
   0};
   Double_t Graph_from_bjet_en_ls_MED_fehx3015[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fehy3015[21] = {
   1.841055,
   1.841055,
   10.66785,
   15.09326,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   13.25358,
   11.08654,
   8.933481,
   7.099949,
   5.607373,
   4.327417,
   3.332876,
   2.66048,
   2.234301,
   1.990576,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_MED_fx3015,Graph_from_bjet_en_ls_MED_fy3015,Graph_from_bjet_en_ls_MED_felx3015,Graph_from_bjet_en_ls_MED_fehx3015,Graph_from_bjet_en_ls_MED_fely3015,Graph_from_bjet_en_ls_MED_fehy3015);
   grae->SetName("Graph_from_bjet_en_ls_MED");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_MED3015 = new TH1F("Graph_Graph_from_bjet_en_ls_MED3015","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_MED3015->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_MED3015->SetMaximum(331.507);
   Graph_Graph_from_bjet_en_ls_MED3015->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_MED3015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_MED3015->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_MED3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_MED3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_MED3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_MED3015);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_en_ls_MED","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_en_ls_MED_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_en_ls_MED_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_en_ls_MED_DY","DY","f");

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
   entry=leg->AddEntry("bjet_en_ls_MED_W","W","f");

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
   entry=leg->AddEntry("bjet_en_ls_MED_Single top","Single top","f");

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
   
   TH1F *ratioframe__56 = new TH1F("ratioframe__56","t#bar{t}",20,3,7);
   ratioframe__56->SetMinimum(0.46);
   ratioframe__56->SetMaximum(1.54);
   ratioframe__56->SetEntries(44137);

   ci = TColor::GetColor("#cc0000");
   ratioframe__56->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__56->SetMarkerColor(ci);
   ratioframe__56->GetXaxis()->SetTitle("log(E)");
   ratioframe__56->GetXaxis()->SetLabelFont(42);
   ratioframe__56->GetXaxis()->SetLabelSize(0);
   ratioframe__56->GetXaxis()->SetTitleSize(0);
   ratioframe__56->GetXaxis()->SetTitleOffset(0);
   ratioframe__56->GetXaxis()->SetTitleFont(42);
   ratioframe__56->GetYaxis()->SetTitle("Data/MC");
   ratioframe__56->GetYaxis()->SetNoExponent();
   ratioframe__56->GetYaxis()->SetNdivisions(5);
   ratioframe__56->GetYaxis()->SetLabelFont(42);
   ratioframe__56->GetYaxis()->SetLabelSize(0.18);
   ratioframe__56->GetYaxis()->SetTitleSize(0.2);
   ratioframe__56->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__56->GetYaxis()->SetTitleFont(42);
   ratioframe__56->GetZaxis()->SetLabelFont(42);
   ratioframe__56->GetZaxis()->SetLabelSize(0.035);
   ratioframe__56->GetZaxis()->SetTitleSize(0.035);
   ratioframe__56->GetZaxis()->SetTitleFont(42);
   ratioframe__56->Draw("");
   
   Double_t Graph_from_ratio_fx3016[20] = {
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
   Double_t Graph_from_ratio_fy3016[20] = {
   0,
   0,
   0.888705,
   0.825017,
   0.8930005,
   0.9027272,
   0.9189367,
   0.9191405,
   0.927202,
   0.9502354,
   0.9281286,
   0.9428379,
   0.9544577,
   0.9728076,
   0.90712,
   0.9113814,
   0.934271,
   0.8243226,
   0.9259728,
   0.7650754};
   Double_t Graph_from_ratio_felx3016[20] = {
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
   Double_t Graph_from_ratio_fely3016[20] = {
   0,
   0,
   0.03745697,
   0.02120166,
   0.01886866,
   0.01646701,
   0.01536594,
   0.01469205,
   0.01502163,
   0.01636178,
   0.01748903,
   0.02059866,
   0.02476179,
   0.03074292,
   0.03526496,
   0.04766741,
   0.06783686,
   0.08280617,
   0.1449968,
   0.1815507};
   Double_t Graph_from_ratio_fehx3016[20] = {
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
   Double_t Graph_from_ratio_fehy3016[20] = {
   0,
   0,
   0.03745697,
   0.02120166,
   0.01886866,
   0.01646701,
   0.01536594,
   0.01469205,
   0.01502163,
   0.01636178,
   0.01748903,
   0.02059866,
   0.02476179,
   0.03074292,
   0.03526496,
   0.04766741,
   0.06783686,
   0.08280617,
   0.1449968,
   0.1815507};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3016,Graph_from_ratio_fy3016,Graph_from_ratio_felx3016,Graph_from_ratio_fehx3016,Graph_from_ratio_fely3016,Graph_from_ratio_fehy3016);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3016 = new TH1F("Graph_Graph_from_ratio3016","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3016->SetMinimum(0);
   Graph_Graph_from_ratio3016->SetMaximum(1.178067);
   Graph_Graph_from_ratio3016->SetDirectory(0);
   Graph_Graph_from_ratio3016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3016->SetLineColor(ci);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3016);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
