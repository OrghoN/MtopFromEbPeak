void bjet_en_ls_TIG()
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
   p1->Range(2.421687,-36.49257,7.240964,268.4455);
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
   frame__8->SetMaximum(265.3962);
   frame__8->SetEntries(326514);
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
   mc_stack_2->SetMaximum(214.3584);
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
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(3,62.06028);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(4,137.8237);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(5,181.2148);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(6,195.9422);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(7,194.4682);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(8,173.1064);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(9,140.6334);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(10,103.2022);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(11,70.81109);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(12,43.85252);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(13,25.31598);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(14,13.82999);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(15,6.914935);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(16,3.223194);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(17,1.282132);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(18,0.4483138);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(19,0.1534262);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(20,0.04432612);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(21,0.01428433);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(3,0.8641875);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(4,1.1803);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(5,1.22743);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(6,1.155096);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(7,1.042289);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(8,0.8907103);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(9,0.7273872);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(10,0.5642458);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(11,0.4233608);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(12,0.3011469);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(13,0.207304);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(14,0.1386703);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(15,0.08868873);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(16,0.05490527);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(17,0.03137096);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(18,0.01680984);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(19,0.008885783);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(20,0.004289073);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(21,0.002142768);
   bjet_en_ls_TIG_t#bar{t}__9->SetEntries(322345);
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
   bjet_en_ls_TIG_Diboson__10->SetBinContent(4,0.0793027);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(5,0.07423998);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(6,0.09293905);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(7,0.08951606);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(8,0.0457077);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(9,0.04725233);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(10,0.03787204);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(11,0.02837802);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(12,0.02743613);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(13,0.01943409);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(14,0.004152002);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(15,0.007139909);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(16,0.004841308);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(17,0.00155697);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(18,0.001110876);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(19,0.0009465906);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(20,0.0008023741);
   bjet_en_ls_TIG_Diboson__10->SetBinError(3,0.02747424);
   bjet_en_ls_TIG_Diboson__10->SetBinError(4,0.02805881);
   bjet_en_ls_TIG_Diboson__10->SetBinError(5,0.02467585);
   bjet_en_ls_TIG_Diboson__10->SetBinError(6,0.02486885);
   bjet_en_ls_TIG_Diboson__10->SetBinError(7,0.02135717);
   bjet_en_ls_TIG_Diboson__10->SetBinError(8,0.01407552);
   bjet_en_ls_TIG_Diboson__10->SetBinError(9,0.0131493);
   bjet_en_ls_TIG_Diboson__10->SetBinError(10,0.01070538);
   bjet_en_ls_TIG_Diboson__10->SetBinError(11,0.008262362);
   bjet_en_ls_TIG_Diboson__10->SetBinError(12,0.007251239);
   bjet_en_ls_TIG_Diboson__10->SetBinError(13,0.005671347);
   bjet_en_ls_TIG_Diboson__10->SetBinError(14,0.002145372);
   bjet_en_ls_TIG_Diboson__10->SetBinError(15,0.002718042);
   bjet_en_ls_TIG_Diboson__10->SetBinError(16,0.001983509);
   bjet_en_ls_TIG_Diboson__10->SetBinError(17,0.001100944);
   bjet_en_ls_TIG_Diboson__10->SetBinError(18,0.0007889523);
   bjet_en_ls_TIG_Diboson__10->SetBinError(19,0.0006700679);
   bjet_en_ls_TIG_Diboson__10->SetBinError(20,0.0005679436);
   bjet_en_ls_TIG_Diboson__10->SetEntries(166);
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
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(3,2.817602);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(4,5.710698);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(5,7.493307);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(6,7.546917);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(7,7.673276);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(8,6.885498);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(9,5.110148);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(10,3.81776);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(11,2.588239);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(12,1.728363);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(13,1.151981);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(14,0.6581928);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(15,0.3600791);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(16,0.1877877);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(17,0.07066417);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(18,0.03775676);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(19,0.01428771);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(20,0.007155748);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(21,0.001280273);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(3,0.3259194);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(4,0.4341445);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(5,0.4498441);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(6,0.4081624);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(7,0.3737832);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(8,0.319988);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(9,0.2499098);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(10,0.1959996);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(11,0.1458051);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(12,0.1080469);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(13,0.07994365);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(14,0.05491437);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(15,0.03695399);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(16,0.02368762);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(17,0.01327559);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(18,0.008613159);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(19,0.00477995);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(20,0.003219575);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(21,0.0009437937);
   bjet_en_ls_TIG_SinglesPtop__13->SetEntries(3993);
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
   ratioframe__14->SetEntries(326514);

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
   0.9152035,
   0.9103265,
   0.9219283,
   0.9508677,
   0.940959,
   0.9429107,
   0.9377128,
   0.9392598,
   0.9268343,
   0.8937388,
   0.8917704,
   0.9047045,
   0.8960987,
   0.8329627,
   0.9091436,
   0.9115316,
   0.885096,
   0.8030844};
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
   0.02415528,
   0.0149816,
   0.01193773,
   0.01064652,
   0.009586217,
   0.009112293,
   0.009128437,
   0.009661513,
   0.01055509,
   0.01175024,
   0.01414114,
   0.01775553,
   0.02194129,
   0.02770423,
   0.04218565,
   0.06414742,
   0.09704803,
   0.1504669};
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
   0.02415528,
   0.0149816,
   0.01193773,
   0.01064652,
   0.009586217,
   0.009112293,
   0.009128437,
   0.009661513,
   0.01055509,
   0.01175024,
   0.01414114,
   0.01775553,
   0.02194129,
   0.02770423,
   0.04218565,
   0.06414742,
   0.09704803,
   0.1504669};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.080358);
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
