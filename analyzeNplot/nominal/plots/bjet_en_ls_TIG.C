void bjet_en_ls_TIG()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 10:49:16 2018) by ROOT version6.08/07
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
   
   TH1F *frame__71 = new TH1F("frame__71","t#bar{t}",20,3,7);
   frame__71->SetMinimum(0.1);
   frame__71->SetMaximum(275.2302);
   frame__71->SetEntries(333832);
   frame__71->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__71->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__71->SetMarkerColor(ci);
   frame__71->GetXaxis()->SetTitle("log(E)");
   frame__71->GetXaxis()->SetLabelFont(42);
   frame__71->GetXaxis()->SetLabelSize(0.035);
   frame__71->GetXaxis()->SetTitleSize(0.035);
   frame__71->GetXaxis()->SetTitleFont(42);
   frame__71->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
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
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",20,3,7);
   mc_stack_11->SetMinimum(-1.310485e-08);
   mc_stack_11->SetMaximum(222.3013);
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
   
   
   TH1F *bjet_en_ls_TIG_t#bar{t}__72 = new TH1F("bjet_en_ls_TIG_t#bar{t}__72","t#bar{t}",20,3,7);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(3,65.99333);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(4,144.407);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(5,188.6098);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(6,203.1306);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(7,199.9845);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(8,177.0693);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(9,143.2634);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(10,104.9732);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(11,71.80295);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(12,44.22754);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(13,25.46902);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(14,13.89376);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(15,6.912075);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(16,3.201992);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(17,1.287634);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(18,0.445149);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(19,0.1462911);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(20,0.04213619);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinContent(21,0.01077818);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(3,0.8910002);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(4,1.208126);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(5,1.252436);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(6,1.176181);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(7,1.056975);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(8,0.9009445);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(9,0.734168);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(10,0.5690024);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(11,0.42631);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(12,0.3024482);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(13,0.2079203);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(14,0.1389993);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(15,0.0886411);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(16,0.05471811);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(17,0.03145577);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(18,0.01676841);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(19,0.00867195);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(20,0.004194565);
   bjet_en_ls_TIG_t#bar{t}__72->SetBinError(21,0.001842678);
   bjet_en_ls_TIG_t#bar{t}__72->SetEntries(329524);
   bjet_en_ls_TIG_t#bar{t}__72->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_TIG_t#bar{t}__72->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_TIG_t#bar{t}__72->SetMarkerColor(ci);
   bjet_en_ls_TIG_t#bar{t}__72->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_t#bar{t}__72->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__72->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_t#bar{t}__72->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_t#bar{t}__72->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__72->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_t#bar{t}__72->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_t#bar{t}__72->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_t#bar{t}__72->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_TIG_Diboson__73 = new TH1F("bjet_en_ls_TIG_Diboson__73","Diboson",20,3,7);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(3,0.06954827);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(4,0.08990321);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(5,0.09221028);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(6,0.09293905);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(7,0.08951606);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(8,0.05107588);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(9,0.0507102);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(10,0.04068642);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(11,0.03316674);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(12,0.02743613);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(13,0.01943409);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(14,0.004152002);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(15,0.008227497);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(16,0.004841308);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(17,0.00155697);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(18,0.001768193);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(19,0.0009465906);
   bjet_en_ls_TIG_Diboson__73->SetBinContent(20,0.0008023741);
   bjet_en_ls_TIG_Diboson__73->SetBinError(3,0.02747424);
   bjet_en_ls_TIG_Diboson__73->SetBinError(4,0.02999446);
   bjet_en_ls_TIG_Diboson__73->SetBinError(5,0.02775713);
   bjet_en_ls_TIG_Diboson__73->SetBinError(6,0.02486885);
   bjet_en_ls_TIG_Diboson__73->SetBinError(7,0.02135717);
   bjet_en_ls_TIG_Diboson__73->SetBinError(8,0.01506445);
   bjet_en_ls_TIG_Diboson__73->SetBinError(9,0.01359636);
   bjet_en_ls_TIG_Diboson__73->SetBinError(10,0.01106915);
   bjet_en_ls_TIG_Diboson__73->SetBinError(11,0.008929317);
   bjet_en_ls_TIG_Diboson__73->SetBinError(12,0.007251239);
   bjet_en_ls_TIG_Diboson__73->SetBinError(13,0.005671347);
   bjet_en_ls_TIG_Diboson__73->SetBinError(14,0.002145372);
   bjet_en_ls_TIG_Diboson__73->SetBinError(15,0.002927559);
   bjet_en_ls_TIG_Diboson__73->SetBinError(16,0.001983509);
   bjet_en_ls_TIG_Diboson__73->SetBinError(17,0.001100944);
   bjet_en_ls_TIG_Diboson__73->SetBinError(18,0.001026894);
   bjet_en_ls_TIG_Diboson__73->SetBinError(19,0.0006700679);
   bjet_en_ls_TIG_Diboson__73->SetBinError(20,0.0005679436);
   bjet_en_ls_TIG_Diboson__73->SetEntries(176);
   bjet_en_ls_TIG_Diboson__73->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_TIG_Diboson__73->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_TIG_Diboson__73->SetMarkerColor(ci);
   bjet_en_ls_TIG_Diboson__73->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_Diboson__73->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__73->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_Diboson__73->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_Diboson__73->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__73->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_Diboson__73->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_Diboson__73->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_Diboson__73->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_Diboson,"hist");
   
   TH1F *bjet_en_ls_TIG_DY__74 = new TH1F("bjet_en_ls_TIG_DY__74","DY",20,3,7);
   bjet_en_ls_TIG_DY__74->SetBinContent(4,0.3788093);
   bjet_en_ls_TIG_DY__74->SetBinContent(5,0.3728831);
   bjet_en_ls_TIG_DY__74->SetBinContent(6,0.5688182);
   bjet_en_ls_TIG_DY__74->SetBinContent(7,0.4586417);
   bjet_en_ls_TIG_DY__74->SetBinContent(11,0.1130757);
   bjet_en_ls_TIG_DY__74->SetBinContent(12,0.01067735);
   bjet_en_ls_TIG_DY__74->SetBinContent(13,0.06962138);
   bjet_en_ls_TIG_DY__74->SetBinContent(14,0.07038381);
   bjet_en_ls_TIG_DY__74->SetBinError(4,0.3788093);
   bjet_en_ls_TIG_DY__74->SetBinError(5,0.3728831);
   bjet_en_ls_TIG_DY__74->SetBinError(6,0.4022325);
   bjet_en_ls_TIG_DY__74->SetBinError(7,0.324971);
   bjet_en_ls_TIG_DY__74->SetBinError(11,0.1130757);
   bjet_en_ls_TIG_DY__74->SetBinError(12,0.01067735);
   bjet_en_ls_TIG_DY__74->SetBinError(13,0.06962138);
   bjet_en_ls_TIG_DY__74->SetBinError(14,0.07038381);
   bjet_en_ls_TIG_DY__74->SetEntries(10);
   bjet_en_ls_TIG_DY__74->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_TIG_DY__74->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_TIG_DY__74->SetMarkerColor(ci);
   bjet_en_ls_TIG_DY__74->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_DY__74->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__74->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__74->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__74->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_DY__74->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_DY__74->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__74->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__74->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__74->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_DY__74->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_DY__74->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_DY__74->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_DY__74->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_DY,"hist");
   
   TH1F *bjet_en_ls_TIG_W__75 = new TH1F("bjet_en_ls_TIG_W__75","W",20,3,7);
   bjet_en_ls_TIG_W__75->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_TIG_W__75->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_TIG_W__75->SetMarkerColor(ci);
   bjet_en_ls_TIG_W__75->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_W__75->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__75->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__75->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__75->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_W__75->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_W__75->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__75->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__75->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__75->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_W__75->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_W__75->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_W__75->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_W__75->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_W,"hist");
   
   TH1F *bjet_en_ls_TIG_SinglesPtop__76 = new TH1F("bjet_en_ls_TIG_SinglesPtop__76","Single top",20,3,7);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(3,2.932719);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(4,6.129784);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(5,7.734373);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(6,7.923146);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(7,8.052453);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(8,7.21225);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(9,5.109177);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(10,3.959138);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(11,2.721466);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(12,1.788332);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(13,1.149024);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(14,0.6489853);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(15,0.3655126);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(16,0.1851843);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(17,0.06771773);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(18,0.03556902);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(19,0.01265967);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(20,0.007155748);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinContent(21,0.001280273);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(3,0.3341647);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(4,0.4508285);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(5,0.4569167);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(6,0.4186445);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(7,0.3827209);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(8,0.3275835);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(9,0.2499633);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(10,0.1996586);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(11,0.1495021);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(12,0.1098796);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(13,0.07965398);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(14,0.05453915);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(15,0.03726222);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(16,0.02348732);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(17,0.0130062);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(18,0.008330686);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(19,0.004494154);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(20,0.003219575);
   bjet_en_ls_TIG_SinglesPtop__76->SetBinError(21,0.0009437937);
   bjet_en_ls_TIG_SinglesPtop__76->SetEntries(4122);
   bjet_en_ls_TIG_SinglesPtop__76->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_TIG_SinglesPtop__76->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_TIG_SinglesPtop__76->SetMarkerColor(ci);
   bjet_en_ls_TIG_SinglesPtop__76->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_TIG_SinglesPtop__76->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__76->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_SinglesPtop__76->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_TIG_SinglesPtop__76->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__76->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_TIG_SinglesPtop__76->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_TIG_SinglesPtop__76->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_TIG_SinglesPtop__76->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_TIG_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_TIG_fx3021[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_fy3021[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_felx3021[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjet_en_ls_TIG_fely3021[21] = {
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
   Double_t Graph_from_bjet_en_ls_TIG_fehx3021[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_bjet_en_ls_TIG_fehy3021[21] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_TIG_fx3021,Graph_from_bjet_en_ls_TIG_fy3021,Graph_from_bjet_en_ls_TIG_felx3021,Graph_from_bjet_en_ls_TIG_fehx3021,Graph_from_bjet_en_ls_TIG_fely3021,Graph_from_bjet_en_ls_TIG_fehy3021);
   grae->SetName("Graph_from_bjet_en_ls_TIG");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls_TIG3021 = new TH1F("Graph_Graph_from_bjet_en_ls_TIG3021","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls_TIG3021->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls_TIG3021->SetMaximum(226.7483);
   Graph_Graph_from_bjet_en_ls_TIG3021->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls_TIG3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls_TIG3021->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls_TIG3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls_TIG3021);
   
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
   
   TH1F *ratioframe__77 = new TH1F("ratioframe__77","t#bar{t}",20,3,7);
   ratioframe__77->SetMinimum(0.46);
   ratioframe__77->SetMaximum(1.54);
   ratioframe__77->SetEntries(333832);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetMarkerColor(ci);
   ratioframe__77->GetXaxis()->SetTitle("log(E)");
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
   
   Double_t Graph_from_ratio_fx3022[20] = {
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
   Double_t Graph_from_ratio_fy3022[20] = {
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
   Double_t Graph_from_ratio_felx3022[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fely3022[20] = {
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
   Double_t Graph_from_ratio_fehx3022[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_ratio_fehy3022[20] = {
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
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(1.05764);
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
