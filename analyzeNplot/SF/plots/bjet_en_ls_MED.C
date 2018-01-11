void bjet_en_ls_MED()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:38:00 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-53.59395,7.240964,393.8556);
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
   frame__50->SetMaximum(389.3811);
   frame__50->SetEntries(492473);
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
   mc_stack_8->SetMinimum(-1.310485e-08);
   mc_stack_8->SetMaximum(314.5002);
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
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(3,93.75731);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(4,204.6779);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(5,265.7886);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(6,286.7581);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(7,286.6967);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(8,256.4954);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(9,208.6879);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(10,154.8826);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(11,107.3345);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(12,67.23928);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(13,39.64949);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(14,22.02745);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(15,11.42208);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(16,5.350737);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(17,2.366751);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(18,0.9165391);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(19,0.3413796);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(20,0.1154794);
   bjet_en_ls_MED_t#bar{t}__51->SetBinContent(21,0.05323373);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(3,1.06191);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(4,1.438965);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(5,1.486362);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(6,1.397216);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(7,1.265615);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(8,1.084126);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(9,0.8859175);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(10,0.6909897);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(11,0.5210303);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(12,0.3729467);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(13,0.2593897);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(14,0.1750142);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(15,0.1140256);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(16,0.07070414);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(17,0.04256162);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(18,0.02395204);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(19,0.01323288);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(20,0.006959919);
   bjet_en_ls_MED_t#bar{t}__51->SetBinError(21,0.004142267);
   bjet_en_ls_MED_t#bar{t}__51->SetEntries(485782);
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
   bjet_en_ls_MED_Diboson__52->SetBinContent(4,0.2564945);
   bjet_en_ls_MED_Diboson__52->SetBinContent(5,0.2387119);
   bjet_en_ls_MED_Diboson__52->SetBinContent(6,0.2514413);
   bjet_en_ls_MED_Diboson__52->SetBinContent(7,0.223582);
   bjet_en_ls_MED_Diboson__52->SetBinContent(8,0.2027298);
   bjet_en_ls_MED_Diboson__52->SetBinContent(9,0.1336667);
   bjet_en_ls_MED_Diboson__52->SetBinContent(10,0.115264);
   bjet_en_ls_MED_Diboson__52->SetBinContent(11,0.1024448);
   bjet_en_ls_MED_Diboson__52->SetBinContent(12,0.0769822);
   bjet_en_ls_MED_Diboson__52->SetBinContent(13,0.04979927);
   bjet_en_ls_MED_Diboson__52->SetBinContent(14,0.02152406);
   bjet_en_ls_MED_Diboson__52->SetBinContent(15,0.02020164);
   bjet_en_ls_MED_Diboson__52->SetBinContent(16,0.01081927);
   bjet_en_ls_MED_Diboson__52->SetBinContent(17,0.009351619);
   bjet_en_ls_MED_Diboson__52->SetBinContent(18,0.006188313);
   bjet_en_ls_MED_Diboson__52->SetBinContent(19,0.001828043);
   bjet_en_ls_MED_Diboson__52->SetBinContent(20,0.002938897);
   bjet_en_ls_MED_Diboson__52->SetBinContent(21,0.001295976);
   bjet_en_ls_MED_Diboson__52->SetBinError(3,0.037752);
   bjet_en_ls_MED_Diboson__52->SetBinError(4,0.05021474);
   bjet_en_ls_MED_Diboson__52->SetBinError(5,0.0439746);
   bjet_en_ls_MED_Diboson__52->SetBinError(6,0.04072428);
   bjet_en_ls_MED_Diboson__52->SetBinError(7,0.03431226);
   bjet_en_ls_MED_Diboson__52->SetBinError(8,0.02961478);
   bjet_en_ls_MED_Diboson__52->SetBinError(9,0.02178397);
   bjet_en_ls_MED_Diboson__52->SetBinError(10,0.01847976);
   bjet_en_ls_MED_Diboson__52->SetBinError(11,0.01563633);
   bjet_en_ls_MED_Diboson__52->SetBinError(12,0.01220501);
   bjet_en_ls_MED_Diboson__52->SetBinError(13,0.009036464);
   bjet_en_ls_MED_Diboson__52->SetBinError(14,0.005287139);
   bjet_en_ls_MED_Diboson__52->SetBinError(15,0.004451787);
   bjet_en_ls_MED_Diboson__52->SetBinError(16,0.003102885);
   bjet_en_ls_MED_Diboson__52->SetBinError(17,0.002600929);
   bjet_en_ls_MED_Diboson__52->SetBinError(18,0.001882997);
   bjet_en_ls_MED_Diboson__52->SetBinError(19,0.0009155402);
   bjet_en_ls_MED_Diboson__52->SetBinError(20,0.001058505);
   bjet_en_ls_MED_Diboson__52->SetBinError(21,0.0006564165);
   bjet_en_ls_MED_Diboson__52->SetEntries(520);
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
   bjet_en_ls_MED_DY__53->SetBinContent(5,0.3728831);
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
   bjet_en_ls_MED_DY__53->SetBinError(5,0.3728831);
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
   bjet_en_ls_MED_DY__53->SetEntries(23);
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
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(3,4.004724);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(4,8.466209);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(5,11.5395);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(6,11.40605);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(7,11.69499);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(8,10.14566);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(9,7.658117);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(10,5.993486);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(11,4.142594);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(12,2.77812);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(13,1.770484);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(14,1.012595);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(15,0.5792373);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(16,0.304655);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(17,0.1427572);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(18,0.06474642);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(19,0.03413267);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(20,0.01220403);
   bjet_en_ls_MED_SinglesPtop__55->SetBinContent(21,0.009178041);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(3,0.3918364);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(4,0.528527);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(5,0.5595419);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(6,0.502228);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(7,0.4622485);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(8,0.3882921);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(9,0.306107);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(10,0.245526);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(11,0.1847073);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(12,0.1369908);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(13,0.09933196);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(14,0.06789403);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(15,0.04668095);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(16,0.03034805);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(17,0.01886005);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(18,0.01121414);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(19,0.007571728);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(20,0.004122966);
   bjet_en_ls_MED_SinglesPtop__55->SetBinError(21,0.003144888);
   bjet_en_ls_MED_SinglesPtop__55->SetEntries(6148);
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
   93.00105,
   198.9978,
   257.4034,
   287.7973,
   285.2325,
   255.7357,
   205.8304,
   151.9744,
   103.104,
   63.63716,
   37.43613,
   21.09787,
   10.76463,
   4.968298,
   2.193947,
   0.9010584,
   0.307947,
   0.0955622,
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
   9.626533,
   14.0951,
   16.0438,
   16.96459,
   16.88883,
   15.99174,
   14.34679,
   12.31447,
   10.13773,
   7.956431,
   6.091168,
   4.556644,
   3.229395,
   2.152374,
   1.364495,
   0.767992,
   0.3061697,
   0.0955622,
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
   10.67852,
   15.13063,
   16.0438,
   16.96459,
   16.88883,
   15.99174,
   14.34679,
   13.35513,
   11.1871,
   9.019289,
   7.17313,
   5.665797,
   4.381998,
   3.375884,
   2.695862,
   2.261308,
   2.003288,
   1.894258,
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
   Graph_Graph_from_bjet_en_ls_MED3015->SetMaximum(335.2381);
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
   ratioframe__56->SetEntries(492473);

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
   0.9456595,
   0.9308557,
   0.9261124,
   0.961607,
   0.9522862,
   0.9575785,
   0.950807,
   0.9433064,
   0.9222944,
   0.9065697,
   0.90122,
   0.912066,
   0.8918741,
   0.8706386,
   0.8612842,
   0.8872968,
   0.8160989,
   0.7315915};
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
   0.02049007,
   0.01242854,
   0.009848543,
   0.008870119,
   0.00798255,
   0.007590861,
   0.007559267,
   0.007928649,
   0.008549185,
   0.009631921,
   0.0113259,
   0.01399966,
   0.01734435,
   0.0228769,
   0.03118783,
   0.04975088,
   0.06169983,
   0.08865612};
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
   0.02049007,
   0.01242854,
   0.009848543,
   0.008870119,
   0.00798255,
   0.007590861,
   0.007559267,
   0.007928649,
   0.008549185,
   0.009631921,
   0.0113259,
   0.01399966,
   0.01734435,
   0.0228769,
   0.03118783,
   0.04975088,
   0.06169983,
   0.08865612};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3016,Graph_from_ratio_fy3016,Graph_from_ratio_felx3016,Graph_from_ratio_fehx3016,Graph_from_ratio_fely3016,Graph_from_ratio_fehy3016);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3016 = new TH1F("Graph_Graph_from_ratio3016","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3016->SetMinimum(0);
   Graph_Graph_from_ratio3016->SetMaximum(1.067525);
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
