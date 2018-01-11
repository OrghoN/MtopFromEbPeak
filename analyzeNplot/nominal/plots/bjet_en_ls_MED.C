void bjet_en_ls_MED()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 10:49:15 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-55.88549,7.240964,410.6603);
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
   
   TH1F *frame__15 = new TH1F("frame__15","t#bar{t}",20,3,7);
   frame__15->SetMinimum(0.1);
   frame__15->SetMaximum(405.9948);
   frame__15->SetEntries(504712);
   frame__15->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__15->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__15->SetMarkerColor(ci);
   frame__15->GetXaxis()->SetTitle("log(E)");
   frame__15->GetXaxis()->SetLabelFont(42);
   frame__15->GetXaxis()->SetLabelSize(0.035);
   frame__15->GetXaxis()->SetTitleSize(0.035);
   frame__15->GetXaxis()->SetTitleFont(42);
   frame__15->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__15->GetYaxis()->SetNoExponent();
   frame__15->GetYaxis()->SetLabelFont(42);
   frame__15->GetYaxis()->SetTitleSize(0.045);
   frame__15->GetYaxis()->SetTitleOffset(1.3);
   frame__15->GetYaxis()->SetTitleFont(42);
   frame__15->GetZaxis()->SetLabelFont(42);
   frame__15->GetZaxis()->SetLabelSize(0.035);
   frame__15->GetZaxis()->SetTitleSize(0.035);
   frame__15->GetZaxis()->SetTitleFont(42);
   frame__15->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_3 = new TH1F("mc_stack_3","mc",20,3,7);
   mc_stack_3->SetMinimum(-6.463648e-09);
   mc_stack_3->SetMaximum(327.9189);
   mc_stack_3->SetDirectory(0);
   mc_stack_3->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_3->SetLineColor(ci);
   mc_stack_3->GetXaxis()->SetLabelFont(42);
   mc_stack_3->GetXaxis()->SetLabelSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleSize(0.035);
   mc_stack_3->GetXaxis()->SetTitleFont(42);
   mc_stack_3->GetYaxis()->SetLabelFont(42);
   mc_stack_3->GetYaxis()->SetLabelSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleSize(0.035);
   mc_stack_3->GetYaxis()->SetTitleFont(42);
   mc_stack_3->GetZaxis()->SetLabelFont(42);
   mc_stack_3->GetZaxis()->SetLabelSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleSize(0.035);
   mc_stack_3->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_3);
   
   
   TH1F *bjet_en_ls_MED_t#bar{t}__16 = new TH1F("bjet_en_ls_MED_t#bar{t}__16","t#bar{t}",20,3,7);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(3,100.5757);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(4,216.7825);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(5,278.434);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(6,299.1703);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(7,295.7701);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(8,263.3372);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(9,213.3068);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(10,157.9386);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(11,108.9576);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(12,67.95831);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(13,39.89547);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(14,22.0506);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(15,11.33425);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(16,5.286532);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(17,2.304051);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(18,0.885178);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(19,0.3187978);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(20,0.1046899);
   bjet_en_ls_MED_t#bar{t}__16->SetBinContent(21,0.03891739);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(3,1.099778);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(4,1.480851);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(5,1.521368);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(6,1.42738);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(7,1.285476);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(8,1.098535);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(9,0.8956744);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(10,0.6977852);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(11,0.5249706);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(12,0.3749328);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(13,0.2602234);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(14,0.1751003);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(15,0.1135576);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(16,0.07028349);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(17,0.04201094);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(18,0.02354682);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(19,0.01279166);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(20,0.006630495);
   bjet_en_ls_MED_t#bar{t}__16->SetBinError(21,0.003523707);
   bjet_en_ls_MED_t#bar{t}__16->SetEntries(497795);
   bjet_en_ls_MED_t#bar{t}__16->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_MED_t#bar{t}__16->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_MED_t#bar{t}__16->SetMarkerColor(ci);
   bjet_en_ls_MED_t#bar{t}__16->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_t#bar{t}__16->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__16->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_t#bar{t}__16->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_t#bar{t}__16->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__16->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_t#bar{t}__16->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_t#bar{t}__16->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_t#bar{t}__16->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_MED_Diboson__17 = new TH1F("bjet_en_ls_MED_Diboson__17","Diboson",20,3,7);
   bjet_en_ls_MED_Diboson__17->SetBinContent(3,0.134599);
   bjet_en_ls_MED_Diboson__17->SetBinContent(4,0.267095);
   bjet_en_ls_MED_Diboson__17->SetBinContent(5,0.2566822);
   bjet_en_ls_MED_Diboson__17->SetBinContent(6,0.2708047);
   bjet_en_ls_MED_Diboson__17->SetBinContent(7,0.2352162);
   bjet_en_ls_MED_Diboson__17->SetBinContent(8,0.2080979);
   bjet_en_ls_MED_Diboson__17->SetBinContent(9,0.1446551);
   bjet_en_ls_MED_Diboson__17->SetBinContent(10,0.1208192);
   bjet_en_ls_MED_Diboson__17->SetBinContent(11,0.1072335);
   bjet_en_ls_MED_Diboson__17->SetBinContent(12,0.0769822);
   bjet_en_ls_MED_Diboson__17->SetBinContent(13,0.05079685);
   bjet_en_ls_MED_Diboson__17->SetBinContent(14,0.02152406);
   bjet_en_ls_MED_Diboson__17->SetBinContent(15,0.02031586);
   bjet_en_ls_MED_Diboson__17->SetBinContent(16,0.01081927);
   bjet_en_ls_MED_Diboson__17->SetBinContent(17,0.01010579);
   bjet_en_ls_MED_Diboson__17->SetBinContent(18,0.00684563);
   bjet_en_ls_MED_Diboson__17->SetBinContent(19,0.001828043);
   bjet_en_ls_MED_Diboson__17->SetBinContent(20,0.002938897);
   bjet_en_ls_MED_Diboson__17->SetBinContent(21,0.001295976);
   bjet_en_ls_MED_Diboson__17->SetBinError(3,0.037752);
   bjet_en_ls_MED_Diboson__17->SetBinError(4,0.05132145);
   bjet_en_ls_MED_Diboson__17->SetBinError(5,0.04577474);
   bjet_en_ls_MED_Diboson__17->SetBinError(6,0.0422324);
   bjet_en_ls_MED_Diboson__17->SetBinError(7,0.03512287);
   bjet_en_ls_MED_Diboson__17->SetBinError(8,0.03009739);
   bjet_en_ls_MED_Diboson__17->SetBinError(9,0.02269039);
   bjet_en_ls_MED_Diboson__17->SetBinError(10,0.0188927);
   bjet_en_ls_MED_Diboson__17->SetBinError(11,0.01599878);
   bjet_en_ls_MED_Diboson__17->SetBinError(12,0.01220501);
   bjet_en_ls_MED_Diboson__17->SetBinError(13,0.009091361);
   bjet_en_ls_MED_Diboson__17->SetBinError(14,0.005287139);
   bjet_en_ls_MED_Diboson__17->SetBinError(15,0.004478148);
   bjet_en_ls_MED_Diboson__17->SetBinError(16,0.003102885);
   bjet_en_ls_MED_Diboson__17->SetBinError(17,0.002708063);
   bjet_en_ls_MED_Diboson__17->SetBinError(18,0.001994428);
   bjet_en_ls_MED_Diboson__17->SetBinError(19,0.0009155402);
   bjet_en_ls_MED_Diboson__17->SetBinError(20,0.001058505);
   bjet_en_ls_MED_Diboson__17->SetBinError(21,0.0006564165);
   bjet_en_ls_MED_Diboson__17->SetEntries(540);
   bjet_en_ls_MED_Diboson__17->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_MED_Diboson__17->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_MED_Diboson__17->SetMarkerColor(ci);
   bjet_en_ls_MED_Diboson__17->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_Diboson__17->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__17->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_Diboson__17->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_Diboson__17->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__17->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_Diboson__17->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_Diboson__17->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_Diboson__17->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_Diboson,"hist");
   
   TH1F *bjet_en_ls_MED_DY__18 = new TH1F("bjet_en_ls_MED_DY__18","DY",20,3,7);
   bjet_en_ls_MED_DY__18->SetBinContent(3,0.4485483);
   bjet_en_ls_MED_DY__18->SetBinContent(4,0.3788093);
   bjet_en_ls_MED_DY__18->SetBinContent(5,0.7051129);
   bjet_en_ls_MED_DY__18->SetBinContent(6,0.8723331);
   bjet_en_ls_MED_DY__18->SetBinContent(7,0.9087102);
   bjet_en_ls_MED_DY__18->SetBinContent(8,0.2211949);
   bjet_en_ls_MED_DY__18->SetBinContent(10,0.1167993);
   bjet_en_ls_MED_DY__18->SetBinContent(11,0.2111995);
   bjet_en_ls_MED_DY__18->SetBinContent(12,0.1011749);
   bjet_en_ls_MED_DY__18->SetBinContent(13,0.06962138);
   bjet_en_ls_MED_DY__18->SetBinContent(14,0.07038381);
   bjet_en_ls_MED_DY__18->SetBinContent(15,0.04815122);
   bjet_en_ls_MED_DY__18->SetBinContent(16,0.0402879);
   bjet_en_ls_MED_DY__18->SetBinContent(17,0.02843711);
   bjet_en_ls_MED_DY__18->SetBinContent(18,0.02803578);
   bjet_en_ls_MED_DY__18->SetBinError(3,0.4485483);
   bjet_en_ls_MED_DY__18->SetBinError(4,0.3788093);
   bjet_en_ls_MED_DY__18->SetBinError(5,0.4994181);
   bjet_en_ls_MED_DY__18->SetBinError(6,0.503897);
   bjet_en_ls_MED_DY__18->SetBinError(7,0.4557849);
   bjet_en_ls_MED_DY__18->SetBinError(8,0.205806);
   bjet_en_ls_MED_DY__18->SetBinError(10,0.1167993);
   bjet_en_ls_MED_DY__18->SetBinError(11,0.1497144);
   bjet_en_ls_MED_DY__18->SetBinError(12,0.09112528);
   bjet_en_ls_MED_DY__18->SetBinError(13,0.06962138);
   bjet_en_ls_MED_DY__18->SetBinError(14,0.07038381);
   bjet_en_ls_MED_DY__18->SetBinError(15,0.04815122);
   bjet_en_ls_MED_DY__18->SetBinError(16,0.0402879);
   bjet_en_ls_MED_DY__18->SetBinError(17,0.02843711);
   bjet_en_ls_MED_DY__18->SetBinError(18,0.02803578);
   bjet_en_ls_MED_DY__18->SetEntries(24);
   bjet_en_ls_MED_DY__18->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_MED_DY__18->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_MED_DY__18->SetMarkerColor(ci);
   bjet_en_ls_MED_DY__18->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_DY__18->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__18->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__18->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__18->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_DY__18->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_DY__18->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__18->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__18->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__18->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_DY__18->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_DY__18->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_DY__18->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_DY__18->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_DY,"hist");
   
   TH1F *bjet_en_ls_MED_W__19 = new TH1F("bjet_en_ls_MED_W__19","W",20,3,7);
   bjet_en_ls_MED_W__19->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_MED_W__19->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_MED_W__19->SetMarkerColor(ci);
   bjet_en_ls_MED_W__19->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_W__19->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__19->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__19->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__19->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_W__19->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_W__19->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__19->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__19->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__19->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_W__19->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_W__19->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_W__19->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_W__19->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_W,"hist");
   
   TH1F *bjet_en_ls_MED_SinglesPtop__20 = new TH1F("bjet_en_ls_MED_SinglesPtop__20","Single top",20,3,7);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(3,4.290721);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(4,8.998571);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(5,11.93483);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(6,11.99029);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(7,12.31244);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(8,10.58476);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(9,7.779629);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(10,6.234035);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(11,4.30353);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(12,2.854313);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(13,1.774811);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(14,0.9989377);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(15,0.5921883);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(16,0.3050357);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(17,0.1424705);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(18,0.06409469);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(19,0.03250463);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(20,0.01220403);
   bjet_en_ls_MED_SinglesPtop__20->SetBinContent(21,0.009178041);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(3,0.4065033);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(4,0.5461552);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(5,0.5692374);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(6,0.5150782);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(7,0.4742055);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(8,0.3966586);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(9,0.308616);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(10,0.2503392);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(11,0.1882971);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(12,0.1388784);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(13,0.09935133);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(14,0.06744425);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(15,0.04722682);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(16,0.03033769);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(17,0.0188599);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(18,0.01110541);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(19,0.007394631);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(20,0.004122966);
   bjet_en_ls_MED_SinglesPtop__20->SetBinError(21,0.003144888);
   bjet_en_ls_MED_SinglesPtop__20->SetEntries(6353);
   bjet_en_ls_MED_SinglesPtop__20->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_MED_SinglesPtop__20->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_MED_SinglesPtop__20->SetMarkerColor(ci);
   bjet_en_ls_MED_SinglesPtop__20->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_MED_SinglesPtop__20->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__20->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_MED_SinglesPtop__20->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_MED_SinglesPtop__20->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__20->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_MED_SinglesPtop__20->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_MED_SinglesPtop__20->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_MED_SinglesPtop__20->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_MED_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_MED_fx3005[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fy3005[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_felx3005[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fely3005[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fehx3005[21] = {
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
   Double_t Graph_from_bjet_en_ls_MED_fehy3005[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_MED_fx3005,Graph_from_bjet_en_ls_MED_fy3005,Graph_from_bjet_en_ls_MED_felx3005,Graph_from_bjet_en_ls_MED_fehx3005,Graph_from_bjet_en_ls_MED_fely3005,Graph_from_bjet_en_ls_MED_fehy3005);
   grae->SetName("Graph_from_bjet_en_ls_MED");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_MED3005 = new TH1F("Graph_Graph_from_bjet_en_ls_MED3005","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_MED3005->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_MED3005->SetMaximum(331.507);
   Graph_Graph_from_bjet_en_ls_MED3005->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_MED3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_MED3005->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_MED3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_MED3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_MED3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_MED3005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_MED3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_MED3005);
   
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
   
   TH1F *ratioframe__21 = new TH1F("ratioframe__21","t#bar{t}",20,3,7);
   ratioframe__21->SetMinimum(0.46);
   ratioframe__21->SetMaximum(1.54);
   ratioframe__21->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__21->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__21->SetMarkerColor(ci);
   ratioframe__21->GetXaxis()->SetTitle("log(E)");
   ratioframe__21->GetXaxis()->SetLabelFont(42);
   ratioframe__21->GetXaxis()->SetLabelSize(0);
   ratioframe__21->GetXaxis()->SetTitleSize(0);
   ratioframe__21->GetXaxis()->SetTitleOffset(0);
   ratioframe__21->GetXaxis()->SetTitleFont(42);
   ratioframe__21->GetYaxis()->SetTitle("Data/MC");
   ratioframe__21->GetYaxis()->SetNoExponent();
   ratioframe__21->GetYaxis()->SetNdivisions(5);
   ratioframe__21->GetYaxis()->SetLabelFont(42);
   ratioframe__21->GetYaxis()->SetLabelSize(0.18);
   ratioframe__21->GetYaxis()->SetTitleSize(0.2);
   ratioframe__21->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__21->GetYaxis()->SetTitleFont(42);
   ratioframe__21->GetZaxis()->SetLabelFont(42);
   ratioframe__21->GetZaxis()->SetLabelSize(0.035);
   ratioframe__21->GetZaxis()->SetTitleSize(0.035);
   ratioframe__21->GetZaxis()->SetTitleFont(42);
   ratioframe__21->Draw("");
   
   Double_t Graph_from_ratio_fx3006[20] = {
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
   Double_t Graph_from_ratio_fy3006[20] = {
   0,
   0,
   0.8799891,
   0.8742027,
   0.8761275,
   0.9109811,
   0.9119318,
   0.9188716,
   0.9162995,
   0.9091609,
   0.8898188,
   0.8771325,
   0.8743091,
   0.8882792,
   0.866894,
   0.8445566,
   0.8348858,
   0.8463516,
   0.7986541,
   0.720457};
   Double_t Graph_from_ratio_felx3006[20] = {
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
   Double_t Graph_from_ratio_fely3006[20] = {
   0,
   0,
   0.0188453,
   0.01158999,
   0.009327133,
   0.008375448,
   0.007633624,
   0.007291828,
   0.007300718,
   0.007664509,
   0.008286858,
   0.009375953,
   0.01107059,
   0.01375327,
   0.01708704,
   0.02255897,
   0.03096992,
   0.04902731,
   0.06296348,
   0.09186913};
   Double_t Graph_from_ratio_fehx3006[20] = {
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
   Double_t Graph_from_ratio_fehy3006[20] = {
   0,
   0,
   0.0188453,
   0.01158999,
   0.009327133,
   0.008375448,
   0.007633624,
   0.007291828,
   0.007300718,
   0.007664509,
   0.008286858,
   0.009375953,
   0.01107059,
   0.01375327,
   0.01708704,
   0.02255897,
   0.03096992,
   0.04902731,
   0.06296348,
   0.09186913};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3006,Graph_from_ratio_fy3006,Graph_from_ratio_felx3006,Graph_from_ratio_fehx3006,Graph_from_ratio_fely3006,Graph_from_ratio_fehy3006);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3006 = new TH1F("Graph_Graph_from_ratio3006","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3006->SetMinimum(0);
   Graph_Graph_from_ratio3006->SetMaximum(1.01878);
   Graph_Graph_from_ratio3006->SetDirectory(0);
   Graph_Graph_from_ratio3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3006->SetLineColor(ci);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3006);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
