void bjet_en_ls_TIG()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 10:19:39 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-37.84899,7.240964,278.3926);
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
   frame__8->SetMaximum(275.2302);
   frame__8->SetEntries(333832);
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
   mc_stack_2->SetMaximum(222.3013);
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
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(3,65.99333);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(4,144.407);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(5,188.6098);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(6,203.1306);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(7,199.9845);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(8,177.0693);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(9,143.2634);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(10,104.9732);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(11,71.80295);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(12,44.22754);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(13,25.46902);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(14,13.89376);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(15,6.912075);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(16,3.201992);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(17,1.287634);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(18,0.445149);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(19,0.1462911);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(20,0.04213619);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(21,0.01077818);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(3,0.8910002);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(4,1.208126);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(5,1.252436);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(6,1.176181);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(7,1.056975);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(8,0.9009445);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(9,0.734168);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(10,0.5690024);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(11,0.42631);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(12,0.3024482);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(13,0.2079203);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(14,0.1389993);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(15,0.0886411);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(16,0.05471811);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(17,0.03145577);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(18,0.01676841);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(19,0.00867195);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(20,0.004194565);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(21,0.001842678);
   bjet_en_ls_TIG_t#bar{t}__9->SetEntries(329524);
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
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(3,2.932719);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(4,6.129784);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(5,7.734373);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(6,7.923146);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(7,8.052453);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(8,7.21225);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(9,5.109177);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(10,3.959138);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(11,2.721466);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(12,1.788332);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(13,1.149024);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(14,0.6489853);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(15,0.3655126);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(16,0.1851843);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(17,0.06771773);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(18,0.03556902);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(19,0.01265967);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(20,0.007155748);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(21,0.001280273);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(3,0.3341647);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(4,0.4508285);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(5,0.4569167);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(6,0.4186445);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(7,0.3827209);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(8,0.3275835);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(9,0.2499633);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(10,0.1996586);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(11,0.1495021);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(12,0.1098796);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(13,0.07965398);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(14,0.05453915);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(15,0.03726222);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(16,0.02348732);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(17,0.0130062);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(18,0.008330686);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(19,0.004494154);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(20,0.003219575);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(21,0.0009437937);
   bjet_en_ls_TIG_SinglesPtop__13->SetEntries(4122);
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
   58.57995,
   129.2032,
   171.5201,
   191.28,
   187.8531,
   166.6354,
   134.4077,
   98.71039,
   66.72572,
   39.8465,
   23.10748,
   12.86985,
   6.329346,
   2.750104,
   1.187158,
   0.4155616,
   0.1380774,
   0.03799964,
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
   7.631993,
   11.35227,
   13.08407,
   13.8186,
   13.69403,
   12.89604,
   11.57924,
   9.918656,
   8.148222,
   6.285924,
   4.772081,
   3.540391,
   2.448178,
   1.554463,
   0.9304425,
   0.4065909,
   0.1380764,
   0.03799964,
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
   8.69751,
   12.39637,
   14.12234,
   14.85484,
   14.73061,
   13.93487,
   12.62248,
   10.96912,
   9.209607,
   7.365368,
   5.876387,
   4.680031,
   3.646633,
   2.852129,
   2.369112,
   2.054538,
   1.917032,
   1.862563,
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
   Graph_Graph_from_bjet_en_ls_TIG3003->SetMaximum(226.7483);
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
   ratioframe__14->SetEntries(333832);

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
   0.8490389,
   0.8556192,
   0.8715045,
   0.9034765,
   0.9006065,
   0.9039928,
   0.9055702,
   0.9058241,
   0.8936003,
   0.8652129,
   0.8652188,
   0.8804547,
   0.8687217,
   0.8107576,
   0.8748991,
   0.8612922,
   0.863538,
   0.7585619};
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
   0.0223307,
   0.01404886,
   0.01127698,
   0.0101065,
   0.009181945,
   0.008766736,
   0.008844203,
   0.009356693,
   0.01023183,
   0.01145705,
   0.01382306,
   0.01740052,
   0.02150916,
   0.0273215,
   0.04110262,
   0.06209391,
   0.09795291,
   0.1485951};
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
   0.0223307,
   0.01404886,
   0.01127698,
   0.0101065,
   0.009181945,
   0.008766736,
   0.008844203,
   0.009356693,
   0.01023183,
   0.01145705,
   0.01382306,
   0.01740052,
   0.02150916,
   0.0273215,
   0.04110262,
   0.06209391,
   0.09795291,
   0.1485951};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.05764);
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
