void bjet_en_ls_TIG()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 09:29:22 2018) by ROOT version6.08/07
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
   p1->Range(2.421687,-38.06194,7.240964,279.9542);
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
   frame__8->SetMaximum(276.774);
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
   mc_stack_2->SetMinimum(-1.271617e-09);
   mc_stack_2->SetMaximum(223.5483);
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
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(3,66.63194);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(4,145.116);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(5,188.8804);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(6,204.2468);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(7,201.0725);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(8,177.2129);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(9,143.8668);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(10,105.7758);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(11,72.0946);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(12,44.613);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(13,25.58489);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(14,13.96529);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(15,7.00219);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(16,3.218709);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(17,1.311421);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(18,0.4416588);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(19,0.146705);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(20,0.04342412);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinContent(21,0.01070294);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(3,0.8952971);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(4,1.213002);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(5,1.25259);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(6,1.179394);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(7,1.059804);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(8,0.9006862);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(9,0.7354683);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(10,0.5710362);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(11,0.4268881);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(12,0.304281);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(13,0.2083699);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(14,0.1393548);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(15,0.08936858);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(16,0.05490712);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(17,0.03182035);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(18,0.01667547);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(19,0.008738911);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(20,0.004288161);
   bjet_en_ls_TIG_t#bar{t}__9->SetBinError(21,0.001881521);
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
   bjet_en_ls_TIG_Diboson__10->SetBinContent(3,0.07097473);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(4,0.08839886);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(5,0.09466824);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(6,0.08616517);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(7,0.08828762);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(8,0.05470472);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(9,0.05101918);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(10,0.04253267);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(11,0.03022805);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(12,0.026906);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(13,0.01939414);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(14,0.004515364);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(15,0.009843149);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(16,0.005862821);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(17,0.001567069);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(18,0.001851905);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(19,0.0009863022);
   bjet_en_ls_TIG_Diboson__10->SetBinContent(20,0.0004528819);
   bjet_en_ls_TIG_Diboson__10->SetBinError(3,0.02752502);
   bjet_en_ls_TIG_Diboson__10->SetBinError(4,0.0297722);
   bjet_en_ls_TIG_Diboson__10->SetBinError(5,0.02660772);
   bjet_en_ls_TIG_Diboson__10->SetBinError(6,0.02365785);
   bjet_en_ls_TIG_Diboson__10->SetBinError(7,0.02128822);
   bjet_en_ls_TIG_Diboson__10->SetBinError(8,0.01589381);
   bjet_en_ls_TIG_Diboson__10->SetBinError(9,0.01363023);
   bjet_en_ls_TIG_Diboson__10->SetBinError(10,0.0110697);
   bjet_en_ls_TIG_Diboson__10->SetBinError(11,0.008316089);
   bjet_en_ls_TIG_Diboson__10->SetBinError(12,0.007249803);
   bjet_en_ls_TIG_Diboson__10->SetBinError(13,0.005764641);
   bjet_en_ls_TIG_Diboson__10->SetBinError(14,0.002580497);
   bjet_en_ls_TIG_Diboson__10->SetBinError(15,0.003298103);
   bjet_en_ls_TIG_Diboson__10->SetBinError(16,0.002239682);
   bjet_en_ls_TIG_Diboson__10->SetBinError(17,0.001108439);
   bjet_en_ls_TIG_Diboson__10->SetBinError(18,0.001070007);
   bjet_en_ls_TIG_Diboson__10->SetBinError(19,0.0006978377);
   bjet_en_ls_TIG_Diboson__10->SetBinError(20,0.0003955987);
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
   bjet_en_ls_TIG_DY__11->SetBinContent(4,0.3716342);
   bjet_en_ls_TIG_DY__11->SetBinContent(5,0.3266973);
   bjet_en_ls_TIG_DY__11->SetBinContent(6,0.6099051);
   bjet_en_ls_TIG_DY__11->SetBinContent(7,0.4398852);
   bjet_en_ls_TIG_DY__11->SetBinContent(11,0.09528551);
   bjet_en_ls_TIG_DY__11->SetBinContent(12,0.08875276);
   bjet_en_ls_TIG_DY__11->SetBinContent(13,0.06326108);
   bjet_en_ls_TIG_DY__11->SetBinContent(14,0.07642314);
   bjet_en_ls_TIG_DY__11->SetBinError(4,0.3716342);
   bjet_en_ls_TIG_DY__11->SetBinError(5,0.3266973);
   bjet_en_ls_TIG_DY__11->SetBinError(6,0.4313827);
   bjet_en_ls_TIG_DY__11->SetBinError(7,0.311372);
   bjet_en_ls_TIG_DY__11->SetBinError(11,0.09528551);
   bjet_en_ls_TIG_DY__11->SetBinError(12,0.08875276);
   bjet_en_ls_TIG_DY__11->SetBinError(13,0.06326108);
   bjet_en_ls_TIG_DY__11->SetBinError(14,0.07642314);
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
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(3,3.182916);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(4,6.138379);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(5,7.901271);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(6,7.960227);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(7,7.884522);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(8,7.48569);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(9,5.132428);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(10,4.002085);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(11,2.842556);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(12,1.845783);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(13,1.087414);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(14,0.6470273);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(15,0.3560692);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(16,0.1909409);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(17,0.07404736);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(18,0.03498236);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(19,0.01584283);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(20,0.005581606);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinContent(21,0.003219509);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(3,0.3535719);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(4,0.4478082);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(5,0.4651627);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(6,0.4192047);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(7,0.3794552);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(8,0.3353836);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(9,0.2498642);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(10,0.2004911);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(11,0.1532979);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(12,0.1121902);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(13,0.07724247);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(14,0.05363136);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(15,0.03630097);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(16,0.0240038);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(17,0.01366349);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(18,0.008239134);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(19,0.005305275);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(20,0.002609343);
   bjet_en_ls_TIG_SinglesPtop__13->SetBinError(21,0.001868235);
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
   0.8382235,
   0.8516212,
   0.869764,
   0.8984368,
   0.8967372,
   0.9019344,
   0.9017609,
   0.8988348,
   0.8889335,
   0.8555444,
   0.8636708,
   0.875902,
   0.8590199,
   0.8051805,
   0.8558958,
   0.8684798,
   0.8443338,
   0.7683119};
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
   0.02203804,
   0.01396821,
   0.01122671,
   0.01006156,
   0.009125441,
   0.008747498,
   0.008800281,
   0.009273569,
   0.01014832,
   0.01143325,
   0.01375178,
   0.01737257,
   0.02122124,
   0.02713047,
   0.04015555,
   0.06264527,
   0.09643228,
   0.148718};
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
   0.02203804,
   0.01396821,
   0.01122671,
   0.01006156,
   0.009125441,
   0.008747498,
   0.008800281,
   0.009273569,
   0.01014832,
   0.01143325,
   0.01375178,
   0.01737257,
   0.02122124,
   0.02713047,
   0.04015555,
   0.06264527,
   0.09643228,
   0.148718};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3004,Graph_from_ratio_fy3004,Graph_from_ratio_felx3004,Graph_from_ratio_fehx3004,Graph_from_ratio_fely3004,Graph_from_ratio_fehy3004);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3004 = new TH1F("Graph_Graph_from_ratio3004","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3004->SetMinimum(0);
   Graph_Graph_from_ratio3004->SetMaximum(1.034843);
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
