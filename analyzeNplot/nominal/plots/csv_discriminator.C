void csv_discriminator()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 10:49:17 2018) by ROOT version6.08/07
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
   p1->Range(-0.1445783,-35953.27,1.060241,263658.1);
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
   Double_t xAxis1[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *frame__127 = new TH1F("frame__127","t#bar{t}",4, xAxis1);
   frame__127->SetMinimum(0.1);
   frame__127->SetMaximum(260662);
   frame__127->SetEntries(1193516);
   frame__127->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__127->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__127->SetMarkerColor(ci);
   frame__127->GetXaxis()->SetTitle("B-Tag Criterion");
   frame__127->GetXaxis()->SetLabelFont(42);
   frame__127->GetXaxis()->SetLabelSize(0.035);
   frame__127->GetXaxis()->SetTitleSize(0.035);
   frame__127->GetXaxis()->SetTitleFont(42);
   frame__127->GetYaxis()->SetTitle(" Events");
   frame__127->GetYaxis()->SetNoExponent();
   frame__127->GetYaxis()->SetLabelFont(42);
   frame__127->GetYaxis()->SetTitleSize(0.045);
   frame__127->GetYaxis()->SetTitleOffset(1.3);
   frame__127->GetYaxis()->SetTitleFont(42);
   frame__127->GetZaxis()->SetLabelFont(42);
   frame__127->GetZaxis()->SetLabelSize(0.035);
   frame__127->GetZaxis()->SetTitleSize(0.035);
   frame__127->GetZaxis()->SetTitleFont(42);
   frame__127->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   Double_t xAxis2[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *mc_stack_19 = new TH1F("mc_stack_19","mc",4, xAxis2);
   mc_stack_19->SetMinimum(0);
   mc_stack_19->SetMaximum(210534.7);
   mc_stack_19->SetDirectory(0);
   mc_stack_19->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_19->SetLineColor(ci);
   mc_stack_19->GetXaxis()->SetLabelFont(42);
   mc_stack_19->GetXaxis()->SetLabelSize(0.035);
   mc_stack_19->GetXaxis()->SetTitleSize(0.035);
   mc_stack_19->GetXaxis()->SetTitleFont(42);
   mc_stack_19->GetYaxis()->SetLabelFont(42);
   mc_stack_19->GetYaxis()->SetLabelSize(0.035);
   mc_stack_19->GetYaxis()->SetTitleSize(0.035);
   mc_stack_19->GetYaxis()->SetTitleFont(42);
   mc_stack_19->GetZaxis()->SetLabelFont(42);
   mc_stack_19->GetZaxis()->SetLabelSize(0.035);
   mc_stack_19->GetZaxis()->SetTitleSize(0.035);
   mc_stack_19->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_19);
   
   Double_t xAxis3[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_t#bar{t}__128 = new TH1F("csv_discriminator_t#bar{t}__128","t#bar{t}",4, xAxis3);
   csv_discriminator_t#bar{t}__128->SetBinContent(0,6364.504);
   csv_discriminator_t#bar{t}__128->SetBinContent(1,191348.5);
   csv_discriminator_t#bar{t}__128->SetBinContent(2,55150.5);
   csv_discriminator_t#bar{t}__128->SetBinContent(3,67450.71);
   csv_discriminator_t#bar{t}__128->SetBinContent(4,129539.7);
   csv_discriminator_t#bar{t}__128->SetBinContent(5,0.815666);
   csv_discriminator_t#bar{t}__128->SetBinError(0,51.13153);
   csv_discriminator_t#bar{t}__128->SetBinError(1,280.3422);
   csv_discriminator_t#bar{t}__128->SetBinError(2,150.4951);
   csv_discriminator_t#bar{t}__128->SetBinError(3,166.4265);
   csv_discriminator_t#bar{t}__128->SetBinError(4,230.6777);
   csv_discriminator_t#bar{t}__128->SetBinError(5,0.509084);
   csv_discriminator_t#bar{t}__128->SetEntries(1176595);
   csv_discriminator_t#bar{t}__128->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__128->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__128->SetMarkerColor(ci);
   csv_discriminator_t#bar{t}__128->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_t#bar{t}__128->GetXaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__128->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__128->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__128->GetXaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__128->GetYaxis()->SetTitle(" Events");
   csv_discriminator_t#bar{t}__128->GetYaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__128->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__128->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__128->GetYaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__128->GetZaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__128->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__128->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__128->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_t#bar{t},"hist");
   Double_t xAxis4[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_Diboson__129 = new TH1F("csv_discriminator_Diboson__129","Diboson",4, xAxis4);
   csv_discriminator_Diboson__129->SetBinContent(0,12.31027);
   csv_discriminator_Diboson__129->SetBinContent(1,279.3778);
   csv_discriminator_Diboson__129->SetBinContent(2,58.9299);
   csv_discriminator_Diboson__129->SetBinContent(3,129.5679);
   csv_discriminator_Diboson__129->SetBinContent(4,66.73421);
   csv_discriminator_Diboson__129->SetBinError(0,2.18606);
   csv_discriminator_Diboson__129->SetBinError(1,10.40676);
   csv_discriminator_Diboson__129->SetBinError(2,4.797228);
   csv_discriminator_Diboson__129->SetBinError(3,7.080239);
   csv_discriminator_Diboson__129->SetBinError(4,5.096629);
   csv_discriminator_Diboson__129->SetEntries(1539);
   csv_discriminator_Diboson__129->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__129->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__129->SetMarkerColor(ci);
   csv_discriminator_Diboson__129->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_Diboson__129->GetXaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__129->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__129->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__129->GetXaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__129->GetYaxis()->SetTitle(" Events");
   csv_discriminator_Diboson__129->GetYaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__129->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__129->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__129->GetYaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__129->GetZaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__129->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__129->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__129->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Diboson,"hist");
   Double_t xAxis5[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_DY__130 = new TH1F("csv_discriminator_DY__130","DY",4, xAxis5);
   csv_discriminator_DY__130->SetBinContent(0,50.51452);
   csv_discriminator_DY__130->SetBinContent(1,405.9186);
   csv_discriminator_DY__130->SetBinContent(2,50.00715);
   csv_discriminator_DY__130->SetBinContent(3,260.9279);
   csv_discriminator_DY__130->SetBinContent(4,164.09);
   csv_discriminator_DY__130->SetBinError(0,29.43275);
   csv_discriminator_DY__130->SetBinError(1,83.64881);
   csv_discriminator_DY__130->SetBinError(2,28.93178);
   csv_discriminator_DY__130->SetBinError(3,67.35224);
   csv_discriminator_DY__130->SetBinError(4,54.27384);
   csv_discriminator_DY__130->SetEntries(59);
   csv_discriminator_DY__130->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__130->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__130->SetMarkerColor(ci);
   csv_discriminator_DY__130->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_DY__130->GetXaxis()->SetLabelFont(42);
   csv_discriminator_DY__130->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__130->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__130->GetXaxis()->SetTitleFont(42);
   csv_discriminator_DY__130->GetYaxis()->SetTitle(" Events");
   csv_discriminator_DY__130->GetYaxis()->SetLabelFont(42);
   csv_discriminator_DY__130->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__130->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__130->GetYaxis()->SetTitleFont(42);
   csv_discriminator_DY__130->GetZaxis()->SetLabelFont(42);
   csv_discriminator_DY__130->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__130->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__130->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_DY,"hist");
   Double_t xAxis6[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_W__131 = new TH1F("csv_discriminator_W__131","W",4, xAxis6);
   csv_discriminator_W__131->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__131->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__131->SetMarkerColor(ci);
   csv_discriminator_W__131->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_W__131->GetXaxis()->SetLabelFont(42);
   csv_discriminator_W__131->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_W__131->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_W__131->GetXaxis()->SetTitleFont(42);
   csv_discriminator_W__131->GetYaxis()->SetTitle(" Events");
   csv_discriminator_W__131->GetYaxis()->SetLabelFont(42);
   csv_discriminator_W__131->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_W__131->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_W__131->GetYaxis()->SetTitleFont(42);
   csv_discriminator_W__131->GetZaxis()->SetLabelFont(42);
   csv_discriminator_W__131->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_W__131->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_W__131->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_W,"hist");
   Double_t xAxis7[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_SinglesPtop__132 = new TH1F("csv_discriminator_SinglesPtop__132","Single top",4, xAxis7);
   csv_discriminator_SinglesPtop__132->SetBinContent(0,284.4315);
   csv_discriminator_SinglesPtop__132->SetBinContent(1,8475.438);
   csv_discriminator_SinglesPtop__132->SetBinContent(2,2159.924);
   csv_discriminator_SinglesPtop__132->SetBinContent(3,2872.103);
   csv_discriminator_SinglesPtop__132->SetBinContent(4,5211.137);
   csv_discriminator_SinglesPtop__132->SetBinError(0,19.70751);
   csv_discriminator_SinglesPtop__132->SetBinError(1,106.4394);
   csv_discriminator_SinglesPtop__132->SetBinError(2,53.76695);
   csv_discriminator_SinglesPtop__132->SetBinError(3,62.083);
   csv_discriminator_SinglesPtop__132->SetBinError(4,83.46794);
   csv_discriminator_SinglesPtop__132->SetEntries(15323);
   csv_discriminator_SinglesPtop__132->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__132->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__132->SetMarkerColor(ci);
   csv_discriminator_SinglesPtop__132->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_SinglesPtop__132->GetXaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__132->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__132->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__132->GetXaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__132->GetYaxis()->SetTitle(" Events");
   csv_discriminator_SinglesPtop__132->GetYaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__132->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__132->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__132->GetYaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__132->GetZaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__132->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__132->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__132->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_csv_discriminator_fx3037[5] = {
   0.2713,
   0.6955,
   0.90095,
   0.97675,
   0};
   Double_t Graph_from_csv_discriminator_fy3037[5] = {
   182113,
   52844,
   64495,
   119791,
   0};
   Double_t Graph_from_csv_discriminator_felx3037[5] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325,
   0};
   Double_t Graph_from_csv_discriminator_fely3037[5] = {
   426.747,
   229.8782,
   253.9587,
   346.1084,
   0};
   Double_t Graph_from_csv_discriminator_fehx3037[5] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325,
   0};
   Double_t Graph_from_csv_discriminator_fehy3037[5] = {
   426.747,
   229.8782,
   253.9587,
   346.1084,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph_from_csv_discriminator_fx3037,Graph_from_csv_discriminator_fy3037,Graph_from_csv_discriminator_felx3037,Graph_from_csv_discriminator_fehx3037,Graph_from_csv_discriminator_fely3037,Graph_from_csv_discriminator_fehy3037);
   grae->SetName("Graph_from_csv_discriminator");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_csv_discriminator3037 = new TH1F("Graph_Graph_from_csv_discriminator3037","Data",100,0,1.1);
   Graph_Graph_from_csv_discriminator3037->SetMinimum(0);
   Graph_Graph_from_csv_discriminator3037->SetMaximum(200793.7);
   Graph_Graph_from_csv_discriminator3037->SetDirectory(0);
   Graph_Graph_from_csv_discriminator3037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_csv_discriminator3037->SetLineColor(ci);
   Graph_Graph_from_csv_discriminator3037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3037->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_csv_discriminator3037);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_csv_discriminator","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("csv_discriminator_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("csv_discriminator_Diboson","Diboson","f");

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
   entry=leg->AddEntry("csv_discriminator_DY","DY","f");

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
   entry=leg->AddEntry("csv_discriminator_W","W","f");

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
   entry=leg->AddEntry("csv_discriminator_Single top","Single top","f");

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
   p2->Range(-0.1445783,0.4485106,1.060241,1.597447);
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
   Double_t xAxis8[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *ratioframe__133 = new TH1F("ratioframe__133","t#bar{t}",4, xAxis8);
   ratioframe__133->SetMinimum(0.46);
   ratioframe__133->SetMaximum(1.54);
   ratioframe__133->SetEntries(1193516);

   ci = TColor::GetColor("#cc0000");
   ratioframe__133->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__133->SetMarkerColor(ci);
   ratioframe__133->GetXaxis()->SetTitle("B-Tag Criterion");
   ratioframe__133->GetXaxis()->SetLabelFont(42);
   ratioframe__133->GetXaxis()->SetLabelSize(0);
   ratioframe__133->GetXaxis()->SetTitleSize(0);
   ratioframe__133->GetXaxis()->SetTitleOffset(0);
   ratioframe__133->GetXaxis()->SetTitleFont(42);
   ratioframe__133->GetYaxis()->SetTitle("Data/MC");
   ratioframe__133->GetYaxis()->SetNoExponent();
   ratioframe__133->GetYaxis()->SetNdivisions(5);
   ratioframe__133->GetYaxis()->SetLabelFont(42);
   ratioframe__133->GetYaxis()->SetLabelSize(0.18);
   ratioframe__133->GetYaxis()->SetTitleSize(0.2);
   ratioframe__133->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__133->GetYaxis()->SetTitleFont(42);
   ratioframe__133->GetZaxis()->SetLabelFont(42);
   ratioframe__133->GetZaxis()->SetLabelSize(0.035);
   ratioframe__133->GetZaxis()->SetTitleSize(0.035);
   ratioframe__133->GetZaxis()->SetTitleFont(42);
   ratioframe__133->Draw("");
   
   Double_t Graph_from_ratio_fx3038[4] = {
   0.2713,
   0.6955,
   0.90095,
   0.97675};
   Double_t Graph_from_ratio_fy3038[4] = {
   0.9082524,
   0.9203167,
   0.9120631,
   0.887461};
   Double_t Graph_from_ratio_felx3038[4] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325};
   Double_t Graph_from_ratio_fely3038[4] = {
   0.002553539,
   0.004775979,
   0.004348566,
   0.00305032};
   Double_t Graph_from_ratio_fehx3038[4] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325};
   Double_t Graph_from_ratio_fehy3038[4] = {
   0.002553539,
   0.004775979,
   0.004348566,
   0.00305032};
   grae = new TGraphAsymmErrors(4,Graph_from_ratio_fx3038,Graph_from_ratio_fy3038,Graph_from_ratio_felx3038,Graph_from_ratio_fehx3038,Graph_from_ratio_fely3038,Graph_from_ratio_fehy3038);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3038 = new TH1F("Graph_Graph_from_ratio3038","Data",100,0,1.1);
   Graph_Graph_from_ratio3038->SetMinimum(0.8803425);
   Graph_Graph_from_ratio3038->SetMaximum(0.9291609);
   Graph_Graph_from_ratio3038->SetDirectory(0);
   Graph_Graph_from_ratio3038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3038->SetLineColor(ci);
   Graph_Graph_from_ratio3038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3038->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3038);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
