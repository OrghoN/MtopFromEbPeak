void bjet_en_ls_TIG()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:36:53 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-38.39919,7.240964,282.4274);
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
   
   TH1F *frame__8 = new TH1F("frame__8","t#bar{t}",20,3,7);
   frame__8->SetMinimum(0.1);
   frame__8->SetMaximum(279.2192);
   frame__8->SetEntries(339728);
   frame__8->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__8->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__8->SetMarkerColor(ci);
   frame__8->GetXaxis()->SetTitle("log(E)");
   frame__8->GetXaxis()->SetLabelFont(42);
   frame__8->GetXaxis()->SetLabelSize(0.035);
   frame__8->GetXaxis()->SetTitleSize(0.035);
   frame__8->GetXaxis()->SetTitleFont(42);
   frame__8->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   frame__8->GetYaxis()->SetNoExponent();
   frame__8->GetYaxis()->SetLabelFont(42);
   frame__8->GetYaxis()->SetTitleSize(0.045);
   frame__8->GetYaxis()->SetTitleOffset(1.3);
   frame__8->GetYaxis()->SetTitleFont(42);
   frame__8->GetZaxis()->SetLabelFont(42);
   frame__8->GetZaxis()->SetLabelSize(0.035);
   frame__8->GetZaxis()->SetTitleSize(0.035);
   frame__8->GetZaxis()->SetTitleFont(42);
   frame__8->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_2 = new TH1F("mc_stack_2","mc",20,3,7);
   mc_stack_2->SetMinimum(-1.310485e-08);
   mc_stack_2->SetMaximum(225.5232);
   mc_stack_2->SetDirectory(0);
   mc_stack_2->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_2->SetLineColor(ci);
   mc_stack_2->GetXaxis()->SetLabelFont(42);
   mc_stack_2->GetXaxis()->SetLabelSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleSize(0.035);
   mc_stack_2->GetXaxis()->SetTitleFont(42);
   mc_stack_2->GetYaxis()->SetLabelFont(42);
   mc_stack_2->GetYaxis()->SetLabelSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleSize(0.035);
   mc_stack_2->GetYaxis()->SetTitleFont(42);
   mc_stack_2->GetZaxis()->SetLabelFont(42);
   mc_stack_2->GetZaxis()->SetLabelSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleSize(0.035);
   mc_stack_2->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_2);
   
   
   TH1F *bjet_en_ls_TIG_t#bar{t}__9 = new TH1F("bjet_en_ls_TIG_t#bar{t}__9","t#bar{t}",20,3,7);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(3,67.1245);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(4,146.3953);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(5,191.3428);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(6,206.1383);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(7,203.1105);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(8,179.9825);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(9,145.7618);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(10,106.7714);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(11,73.07051);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(12,45.16801);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(13,26.02417);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(14,14.22767);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(15,7.089784);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(16,3.296044);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(17,1.319523);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(18,0.4636182);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(19,0.1568286);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(20,0.04474707);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(21,0.01496678);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(3,0.8985482);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(4,1.216449);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(5,1.261442);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(6,1.18488);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(7,1.065204);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(8,0.9083164);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(9,0.7405043);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(10,0.5738746);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(11,0.4300478);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(12,0.3056435);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(13,0.210184);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(14,0.140649);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(15,0.08978751);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(16,0.05550641);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(17,0.03183823);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(18,0.01711119);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(19,0.008978323);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(20,0.00430968);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(21,0.002196498);
   bjet_en_ls_TIG_t#bar{t}__9->SetEntries(335371);
   bjet_en_ls_TIG_t#bar{t}__9->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_TIG_t#bar{t}__9->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_TIG_t#bar{t}__9->SetMarkerColor(ci);
   bjet_en_ls_TIG_t#bar{t}__9->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_t#bar{t}__9->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__9->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_t#bar{t}__9->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_t#bar{t}__9->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__9->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_t#bar{t}__9->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__9->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__9->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_TIG_Diboson__10 = new TH1F("bjet_en_ls_TIG_Diboson__10","Diboson",20,3,7);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(3,0.06954827);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(4,0.08990321);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(5,0.09221028);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(6,0.09293905);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(7,0.08951606);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(8,0.05107588);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(9,0.0507102);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(10,0.04068642);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(11,0.03316674);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(12,0.02743613);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(13,0.01943409);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(14,0.004152002);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(15,0.008227497);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(16,0.004841308);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(17,0.00155697);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(18,0.001768193);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(19,0.0009465906);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(20,0.0008023741);
   bjet_en_ls_TIG_Diboson__10->SetBinError(3,0.02747424);
   bjet_en_ls_TIG_Diboson__10->SetBinError(4,0.02999446);
   bjet_en_ls_TIG_Diboson__10->SetBinError(5,0.02775713);
   bjet_en_ls_TIG_Diboson__10->SetBinError(6,0.02486885);
   bjet_en_ls_TIG_Diboson__10->SetBinError(7,0.02135717);
   bjet_en_ls_TIG_Diboson__10->SetBinError(8,0.01506445);
   bjet_en_ls_TIG_Diboson__10->SetBinError(9,0.01359636);
   bjet_en_ls_TIG_Diboson__10->SetBinError(10,0.01106915);
   bjet_en_ls_TIG_Diboson__10->SetBinError(11,0.008929317);
   bjet_en_ls_TIG_Diboson__10->SetBinError(12,0.007251239);
   bjet_en_ls_TIG_Diboson__10->SetBinError(13,0.005671347);
   bjet_en_ls_TIG_Diboson__10->SetBinError(14,0.002145372);
   bjet_en_ls_TIG_Diboson__10->SetBinError(15,0.002927559);
   bjet_en_ls_TIG_Diboson__10->SetBinError(16,0.001983509);
   bjet_en_ls_TIG_Diboson__10->SetBinError(17,0.001100944);
   bjet_en_ls_TIG_Diboson__10->SetBinError(18,0.001026894);
   bjet_en_ls_TIG_Diboson__10->SetBinError(19,0.0006700679);
   bjet_en_ls_TIG_Diboson__10->SetBinError(20,0.0005679436);
   bjet_en_ls_TIG_Diboson__10->SetEntries(176);
   bjet_en_ls_TIG_Diboson__10->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_TIG_Diboson__10->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_TIG_Diboson__10->SetMarkerColor(ci);
   bjet_en_ls_TIG_Diboson__10->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_Diboson__10->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__10->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_Diboson__10->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_Diboson__10->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__10->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_Diboson__10->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__10->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__10->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_Diboson,"hist");
   
   TH1F *bjet_en_ls_TIG_DY__11 = new TH1F("bjet_en_ls_TIG_DY__11","DY",20,3,7);
   bjet_en_ls_TIG_DY__11->SetBinContent(4,0.3788093);
   bjet_en_ls_TIG_DY__11->SetBinContent(5,0.3728831);
   bjet_en_ls_TIG_DY__11->SetBinContent(6,0.5688182);
   bjet_en_ls_TIG_DY__11->SetBinContent(7,0.4586417);
   bjet_en_ls_TIG_DY__11->SetBinContent(11,0.1130757);
   bjet_en_ls_TIG_DY__11->SetBinContent(12,0.01067735);
   bjet_en_ls_TIG_DY__11->SetBinContent(13,0.06962138);
   bjet_en_ls_TIG_DY__11->SetBinContent(14,0.07038381);
   bjet_en_ls_TIG_DY__11->SetBinError(4,0.3788093);
   bjet_en_ls_TIG_DY__11->SetBinError(5,0.3728831);
   bjet_en_ls_TIG_DY__11->SetBinError(6,0.4022325);
   bjet_en_ls_TIG_DY__11->SetBinError(7,0.324971);
   bjet_en_ls_TIG_DY__11->SetBinError(11,0.1130757);
   bjet_en_ls_TIG_DY__11->SetBinError(12,0.01067735);
   bjet_en_ls_TIG_DY__11->SetBinError(13,0.06962138);
   bjet_en_ls_TIG_DY__11->SetBinError(14,0.07038381);
   bjet_en_ls_TIG_DY__11->SetEntries(10);
   bjet_en_ls_TIG_DY__11->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_TIG_DY__11->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_TIG_DY__11->SetMarkerColor(ci);
   bjet_en_ls_TIG_DY__11->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_DY__11->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__11->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__11->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__11->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_DY__11->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_DY__11->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__11->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__11->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__11->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_DY__11->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__11->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__11->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__11->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_DY,"hist");
   
   TH1F *bjet_en_ls_TIG_W__12 = new TH1F("bjet_en_ls_TIG_W__12","W",20,3,7);
   bjet_en_ls_TIG_W__12->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_TIG_W__12->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_TIG_W__12->SetMarkerColor(ci);
   bjet_en_ls_TIG_W__12->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_W__12->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__12->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__12->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__12->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_W__12->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_W__12->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__12->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__12->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__12->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_W__12->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__12->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__12->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__12->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_W,"hist");
   
   TH1F *bjet_en_ls_TIG_SinglesPtop__13 = new TH1F("bjet_en_ls_TIG_SinglesPtop__13","Single top",20,3,7);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(3,2.981994);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(4,6.162142);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(5,7.790925);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(6,7.983945);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(7,8.12145);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(8,7.271018);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(9,5.159994);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(10,3.989878);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(11,2.763069);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(12,1.812948);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(13,1.166732);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(14,0.6728496);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(15,0.3710076);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(16,0.1883008);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(17,0.07066417);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(18,0.03775676);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(19,0.01428771);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(20,0.007155748);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(21,0.001280273);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(3,0.3361407);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(4,0.4519883);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(5,0.4586732);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(6,0.420228);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(7,0.3843061);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(8,0.3289205);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(9,0.2511519);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(10,0.2004486);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(11,0.1505884);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(12,0.110588);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(13,0.08031482);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(14,0.05557705);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(15,0.03748904);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(16,0.02369318);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(17,0.01327559);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(18,0.008613159);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(19,0.00477995);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(20,0.003219575);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(21,0.0009437937);
   bjet_en_ls_TIG_SinglesPtop__13->SetEntries(4171);
   bjet_en_ls_TIG_SinglesPtop__13->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_TIG_SinglesPtop__13->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_TIG_SinglesPtop__13->SetMarkerColor(ci);
   bjet_en_ls_TIG_SinglesPtop__13->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_SinglesPtop__13->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__13->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_SinglesPtop__13->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_SinglesPtop__13->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__13->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_SinglesPtop__13->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__13->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__13->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_TIG_fx3003[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_fy3003[21] = {
   0,
   0,
   59.44012,
   131.0802,
   174.3875,
   194.1205,
   190.7227,
   169.7593,
   136.7099,
   100.5551,
   68.16013,
   40.77147,
   23.68276,
   13.17496,
   6.525528,
   2.845253,
   1.231301,
   0.4440812,
   0.1492808,
   0.04198866,
   0};
   Double_t Graph_from_bjet_en_ls_TIG_felx3003[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_fely3003[21] = {
   0,
   0,
   7.688142,
   11.43464,
   13.19319,
   13.921,
   13.79841,
   13.0166,
   11.67823,
   10.01122,
   8.235775,
   6.359077,
   4.831985,
   3.583225,
   2.487921,
   1.584713,
   0.9533322,
   0.4319333,
   0.149278,
   0.04198866,
   0};
   Double_t Graph_from_bjet_en_ls_TIG_fehx3003[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_fehy3003[21] = {
   1.841055,
   1.841055,
   8.753183,
   12.47843,
   14.23115,
   14.95698,
   14.83471,
   14.05508,
   12.7211,
   11.06122,
   9.29651,
   7.437615,
   5.935019,
   4.721246,
   3.683414,
   2.877574,
   2.385019,
   2.067734,
   1.922948,
   1.864793,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_TIG_fx3003,Graph_from_bjet_en_ls_TIG_fy3003,Graph_from_bjet_en_ls_TIG_felx3003,Graph_from_bjet_en_ls_TIG_fehx3003,Graph_from_bjet_en_ls_TIG_fely3003,Graph_from_bjet_en_ls_TIG_fehy3003);
   grae->SetName("Graph_from_bjet_en_ls_TIG");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_TIG3003 = new TH1F("Graph_Graph_from_bjet_en_ls_TIG3003","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_TIG3003->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_TIG3003->SetMaximum(229.9852);
   Graph_Graph_from_bjet_en_ls_TIG3003->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_TIG3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_TIG3003->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_TIG3003);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_en_ls_TIG","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_en_ls_TIG_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_en_ls_TIG_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_en_ls_TIG_DY","DY","f");

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
   entry=leg->AddEntry("bjet_en_ls_TIG_W","W","f");

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
   entry=leg->AddEntry("bjet_en_ls_TIG_Single top","Single top","f");

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
   
   TH1F *ratioframe__14 = new TH1F("ratioframe__14","t#bar{t}",20,3,7);
   ratioframe__14->SetMinimum(0.46);
   ratioframe__14->SetMaximum(1.54);
   ratioframe__14->SetEntries(339728);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__14->SetMarkerColor(ci);
   ratioframe__14->GetXaxis()->SetTitle("log(E)");
   ratioframe__14->GetXaxis()->SetLabelFont(42);
   ratioframe__14->GetXaxis()->SetLabelSize(0);
   ratioframe__14->GetXaxis()->SetTitleSize(0);
   ratioframe__14->GetXaxis()->SetTitleOffset(0);
   ratioframe__14->GetXaxis()->SetTitleFont(42);
   ratioframe__14->GetYaxis()->SetTitle("Data/MC");
   ratioframe__14->GetYaxis()->SetNoExponent();
   ratioframe__14->GetYaxis()->SetNdivisions(5);
   ratioframe__14->GetYaxis()->SetLabelFont(42);
   ratioframe__14->GetYaxis()->SetLabelSize(0.18);
   ratioframe__14->GetYaxis()->SetTitleSize(0.2);
   ratioframe__14->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__14->GetYaxis()->SetTitleFont(42);
   ratioframe__14->GetZaxis()->SetLabelFont(42);
   ratioframe__14->GetZaxis()->SetLabelSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleSize(0.035);
   ratioframe__14->GetZaxis()->SetTitleFont(42);
   ratioframe__14->Draw("");
   
   Double_t Graph_from_ratio_fx3004[20] = {
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
   Double_t Graph_from_ratio_fy3004[20] = {
   0,
   0,
   0.8470144,
   0.8565871,
   0.8736904,
   0.9037941,
   0.9005691,
   0.9063277,
   0.9055285,
   0.9075212,
   0.897082,
   0.8671261,
   0.8681378,
   0.8797935,
   0.8736795,
   0.8154489,
   0.8847179,
   0.8826141,
   0.8675945,
   0.7966702};
   Double_t Graph_from_ratio_felx3004[20] = {
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
   Double_t Graph_from_ratio_fely3004[20] = {
   0,
   0,
   0.02210762,
   0.01396232,
   0.01121366,
   0.01003328,
   0.009109563,
   0.008710115,
   0.008768234,
   0.009289402,
   0.01016667,
   0.01135393,
   0.01370254,
   0.01717278,
   0.02131446,
   0.02703219,
   0.04087721,
   0.06178587,
   0.0947925,
   0.1490408};
   Double_t Graph_from_ratio_fehx3004[20] = {
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
   Double_t Graph_from_ratio_fehy3004[20] = {
   0,
   0,
   0.02210762,
   0.01396232,
   0.01121366,
   0.01003328,
   0.009109563,
   0.008710115,
   0.008768234,
   0.009289402,
   0.01016667,
   0.01135393,
   0.01370254,
   0.01717278,
   0.02131446,
   0.02703219,
   0.04087721,
   0.06178587,
   0.0947925,
   0.1490408};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.058626);
   Graph_Graph_from_ratio3004->SetDirectory(0);
   Graph_Graph_from_ratio3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3004->SetLineColor(ci);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3004);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
