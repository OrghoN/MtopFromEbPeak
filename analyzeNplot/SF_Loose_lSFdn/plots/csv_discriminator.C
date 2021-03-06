void csv_discriminator()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 20:12:54 2018) by ROOT version6.08/07
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
   p1->Range(-0.1445783,-41539.87,1.060241,304626.5);
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
   
   TH1F *frame__113 = new TH1F("frame__113","t#bar{t}",4, xAxis1);
   frame__113->SetMinimum(0.1);
   frame__113->SetMaximum(301164.9);
   frame__113->SetEntries(1290030);
   frame__113->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__113->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__113->SetMarkerColor(ci);
   frame__113->GetXaxis()->SetTitle("B-Tag Criterion");
   frame__113->GetXaxis()->SetLabelFont(42);
   frame__113->GetXaxis()->SetLabelSize(0.035);
   frame__113->GetXaxis()->SetTitleSize(0.035);
   frame__113->GetXaxis()->SetTitleFont(42);
   frame__113->GetYaxis()->SetTitle(" Events");
   frame__113->GetYaxis()->SetNoExponent();
   frame__113->GetYaxis()->SetLabelFont(42);
   frame__113->GetYaxis()->SetTitleSize(0.045);
   frame__113->GetYaxis()->SetTitleOffset(1.3);
   frame__113->GetYaxis()->SetTitleFont(42);
   frame__113->GetZaxis()->SetLabelFont(42);
   frame__113->GetZaxis()->SetLabelSize(0.035);
   frame__113->GetZaxis()->SetTitleSize(0.035);
   frame__113->GetZaxis()->SetTitleFont(42);
   frame__113->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   Double_t xAxis2[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *mc_stack_17 = new TH1F("mc_stack_17","mc",4, xAxis2);
   mc_stack_17->SetMinimum(0);
   mc_stack_17->SetMaximum(243248.5);
   mc_stack_17->SetDirectory(0);
   mc_stack_17->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_17->SetLineColor(ci);
   mc_stack_17->GetXaxis()->SetLabelFont(42);
   mc_stack_17->GetXaxis()->SetLabelSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleSize(0.035);
   mc_stack_17->GetXaxis()->SetTitleFont(42);
   mc_stack_17->GetYaxis()->SetLabelFont(42);
   mc_stack_17->GetYaxis()->SetLabelSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleSize(0.035);
   mc_stack_17->GetYaxis()->SetTitleFont(42);
   mc_stack_17->GetZaxis()->SetLabelFont(42);
   mc_stack_17->GetZaxis()->SetLabelSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleSize(0.035);
   mc_stack_17->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_17);
   
   Double_t xAxis3[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_t#bar{t}__114 = new TH1F("csv_discriminator_t#bar{t}__114","t#bar{t}",4, xAxis3);
   csv_discriminator_t#bar{t}__114->SetBinContent(0,7182.794);
   csv_discriminator_t#bar{t}__114->SetBinContent(1,218005.2);
   csv_discriminator_t#bar{t}__114->SetBinContent(2,72960.47);
   csv_discriminator_t#bar{t}__114->SetBinContent(3,63709.87);
   csv_discriminator_t#bar{t}__114->SetBinContent(4,122273.5);
   csv_discriminator_t#bar{t}__114->SetBinContent(5,0.815666);
   csv_discriminator_t#bar{t}__114->SetBinError(0,54.31064);
   csv_discriminator_t#bar{t}__114->SetBinError(1,299.2654);
   csv_discriminator_t#bar{t}__114->SetBinError(2,173.1526);
   csv_discriminator_t#bar{t}__114->SetBinError(3,161.7508);
   csv_discriminator_t#bar{t}__114->SetBinError(4,224.1151);
   csv_discriminator_t#bar{t}__114->SetBinError(5,0.509084);
   csv_discriminator_t#bar{t}__114->SetEntries(1265926);
   csv_discriminator_t#bar{t}__114->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__114->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__114->SetMarkerColor(ci);
   csv_discriminator_t#bar{t}__114->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_t#bar{t}__114->GetXaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__114->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__114->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__114->GetXaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__114->GetYaxis()->SetTitle(" Events");
   csv_discriminator_t#bar{t}__114->GetYaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__114->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__114->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__114->GetYaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__114->GetZaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__114->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__114->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__114->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_t#bar{t},"hist");
   Double_t xAxis4[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_Diboson__115 = new TH1F("csv_discriminator_Diboson__115","Diboson",4, xAxis4);
   csv_discriminator_Diboson__115->SetBinContent(0,37.93954);
   csv_discriminator_Diboson__115->SetBinContent(1,1223.463);
   csv_discriminator_Diboson__115->SetBinContent(2,707.826);
   csv_discriminator_Diboson__115->SetBinContent(3,128.5278);
   csv_discriminator_Diboson__115->SetBinContent(4,66.79003);
   csv_discriminator_Diboson__115->SetBinError(0,3.85304);
   csv_discriminator_Diboson__115->SetBinError(1,21.86887);
   csv_discriminator_Diboson__115->SetBinError(2,16.63528);
   csv_discriminator_Diboson__115->SetBinError(3,7.047897);
   csv_discriminator_Diboson__115->SetBinError(4,5.099144);
   csv_discriminator_Diboson__115->SetEntries(6064);
   csv_discriminator_Diboson__115->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__115->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__115->SetMarkerColor(ci);
   csv_discriminator_Diboson__115->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_Diboson__115->GetXaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__115->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__115->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__115->GetXaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__115->GetYaxis()->SetTitle(" Events");
   csv_discriminator_Diboson__115->GetYaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__115->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__115->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__115->GetYaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__115->GetZaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__115->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__115->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__115->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Diboson,"hist");
   Double_t xAxis5[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_DY__116 = new TH1F("csv_discriminator_DY__116","DY",4, xAxis5);
   csv_discriminator_DY__116->SetBinContent(0,84.30082);
   csv_discriminator_DY__116->SetBinContent(1,1248.096);
   csv_discriminator_DY__116->SetBinContent(2,649.2856);
   csv_discriminator_DY__116->SetBinContent(3,260.9279);
   csv_discriminator_DY__116->SetBinContent(4,164.09);
   csv_discriminator_DY__116->SetBinError(0,37.91071);
   csv_discriminator_DY__116->SetBinError(1,146.1866);
   csv_discriminator_DY__116->SetBinError(2,104.8751);
   csv_discriminator_DY__116->SetBinError(3,67.35224);
   csv_discriminator_DY__116->SetBinError(4,54.27384);
   csv_discriminator_DY__116->SetEntries(167);
   csv_discriminator_DY__116->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__116->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__116->SetMarkerColor(ci);
   csv_discriminator_DY__116->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_DY__116->GetXaxis()->SetLabelFont(42);
   csv_discriminator_DY__116->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__116->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__116->GetXaxis()->SetTitleFont(42);
   csv_discriminator_DY__116->GetYaxis()->SetTitle(" Events");
   csv_discriminator_DY__116->GetYaxis()->SetLabelFont(42);
   csv_discriminator_DY__116->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__116->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__116->GetYaxis()->SetTitleFont(42);
   csv_discriminator_DY__116->GetZaxis()->SetLabelFont(42);
   csv_discriminator_DY__116->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__116->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__116->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_DY,"hist");
   Double_t xAxis6[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_W__117 = new TH1F("csv_discriminator_W__117","W",4, xAxis6);
   csv_discriminator_W__117->SetBinContent(1,793.209);
   csv_discriminator_W__117->SetBinContent(2,599.7181);
   csv_discriminator_W__117->SetBinError(1,264.4991);
   csv_discriminator_W__117->SetBinError(2,226.5412);
   csv_discriminator_W__117->SetEntries(18);
   csv_discriminator_W__117->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__117->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__117->SetMarkerColor(ci);
   csv_discriminator_W__117->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_W__117->GetXaxis()->SetLabelFont(42);
   csv_discriminator_W__117->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_W__117->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_W__117->GetXaxis()->SetTitleFont(42);
   csv_discriminator_W__117->GetYaxis()->SetTitle(" Events");
   csv_discriminator_W__117->GetYaxis()->SetLabelFont(42);
   csv_discriminator_W__117->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_W__117->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_W__117->GetYaxis()->SetTitleFont(42);
   csv_discriminator_W__117->GetZaxis()->SetLabelFont(42);
   csv_discriminator_W__117->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_W__117->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_W__117->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_W,"hist");
   Double_t xAxis7[5] = {0, 0.5426, 0.8484, 0.9535, 1}; 
   
   TH1F *csv_discriminator_SinglesPtop__118 = new TH1F("csv_discriminator_SinglesPtop__118","Single top",4, xAxis7);
   csv_discriminator_SinglesPtop__118->SetBinContent(0,339.2547);
   csv_discriminator_SinglesPtop__118->SetBinContent(1,10395.36);
   csv_discriminator_SinglesPtop__118->SetBinContent(2,3644.742);
   csv_discriminator_SinglesPtop__118->SetBinContent(3,2740.753);
   csv_discriminator_SinglesPtop__118->SetBinContent(4,4990.522);
   csv_discriminator_SinglesPtop__118->SetBinError(0,21.51578);
   csv_discriminator_SinglesPtop__118->SetBinError(1,117.8313);
   csv_discriminator_SinglesPtop__118->SetBinError(2,69.84648);
   csv_discriminator_SinglesPtop__118->SetBinError(3,60.59324);
   csv_discriminator_SinglesPtop__118->SetBinError(4,81.67722);
   csv_discriminator_SinglesPtop__118->SetEntries(17855);
   csv_discriminator_SinglesPtop__118->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__118->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__118->SetMarkerColor(ci);
   csv_discriminator_SinglesPtop__118->GetXaxis()->SetTitle("B-Tag Criterion");
   csv_discriminator_SinglesPtop__118->GetXaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__118->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__118->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__118->GetXaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__118->GetYaxis()->SetTitle(" Events");
   csv_discriminator_SinglesPtop__118->GetYaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__118->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__118->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__118->GetYaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__118->GetZaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__118->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__118->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__118->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_csv_discriminator_fx3033[5] = {
   0.2713,
   0.6955,
   0.90095,
   0.97675,
   0};
   Double_t Graph_from_csv_discriminator_fy3033[5] = {
   216102,
   74239,
   61000,
   113377,
   0};
   Double_t Graph_from_csv_discriminator_felx3033[5] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325,
   0};
   Double_t Graph_from_csv_discriminator_fely3033[5] = {
   464.8677,
   272.4683,
   246.9818,
   336.715,
   0};
   Double_t Graph_from_csv_discriminator_fehx3033[5] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325,
   0};
   Double_t Graph_from_csv_discriminator_fehy3033[5] = {
   464.8677,
   272.4683,
   246.9818,
   336.715,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph_from_csv_discriminator_fx3033,Graph_from_csv_discriminator_fy3033,Graph_from_csv_discriminator_felx3033,Graph_from_csv_discriminator_fehx3033,Graph_from_csv_discriminator_fely3033,Graph_from_csv_discriminator_fehy3033);
   grae->SetName("Graph_from_csv_discriminator");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_csv_discriminator3033 = new TH1F("Graph_Graph_from_csv_discriminator3033","Data",100,0,1.1);
   Graph_Graph_from_csv_discriminator3033->SetMinimum(0);
   Graph_Graph_from_csv_discriminator3033->SetMaximum(238223.6);
   Graph_Graph_from_csv_discriminator3033->SetDirectory(0);
   Graph_Graph_from_csv_discriminator3033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_csv_discriminator3033->SetLineColor(ci);
   Graph_Graph_from_csv_discriminator3033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3033->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_csv_discriminator3033);
   
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
   
   TH1F *ratioframe__119 = new TH1F("ratioframe__119","t#bar{t}",4, xAxis8);
   ratioframe__119->SetMinimum(0.46);
   ratioframe__119->SetMaximum(1.54);
   ratioframe__119->SetEntries(1290030);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__119->SetMarkerColor(ci);
   ratioframe__119->GetXaxis()->SetTitle("B-Tag Criterion");
   ratioframe__119->GetXaxis()->SetLabelFont(42);
   ratioframe__119->GetXaxis()->SetLabelSize(0);
   ratioframe__119->GetXaxis()->SetTitleSize(0);
   ratioframe__119->GetXaxis()->SetTitleOffset(0);
   ratioframe__119->GetXaxis()->SetTitleFont(42);
   ratioframe__119->GetYaxis()->SetTitle("Data/MC");
   ratioframe__119->GetYaxis()->SetNoExponent();
   ratioframe__119->GetYaxis()->SetNdivisions(5);
   ratioframe__119->GetYaxis()->SetLabelFont(42);
   ratioframe__119->GetYaxis()->SetLabelSize(0.18);
   ratioframe__119->GetYaxis()->SetTitleSize(0.2);
   ratioframe__119->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__119->GetYaxis()->SetTitleFont(42);
   ratioframe__119->GetZaxis()->SetLabelFont(42);
   ratioframe__119->GetZaxis()->SetLabelSize(0.035);
   ratioframe__119->GetZaxis()->SetTitleSize(0.035);
   ratioframe__119->GetZaxis()->SetTitleFont(42);
   ratioframe__119->Draw("");
   
   Double_t Graph_from_ratio_fx3034[4] = {
   0.2713,
   0.6955,
   0.90095,
   0.97675};
   Double_t Graph_from_ratio_fy3034[4] = {
   0.93282,
   0.9449728,
   0.9126261,
   0.8892672};
   Double_t Graph_from_ratio_felx3034[4] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325};
   Double_t Graph_from_ratio_fely3034[4] = {
   0.002681845,
   0.00511161,
   0.004480055,
   0.003144455};
   Double_t Graph_from_ratio_fehx3034[4] = {
   0.2713,
   0.1529,
   0.05255,
   0.02325};
   Double_t Graph_from_ratio_fehy3034[4] = {
   0.002681845,
   0.00511161,
   0.004480055,
   0.003144455};
   grae = new TGraphAsymmErrors(4,Graph_from_ratio_fx3034,Graph_from_ratio_fy3034,Graph_from_ratio_felx3034,Graph_from_ratio_fehx3034,Graph_from_ratio_fely3034,Graph_from_ratio_fehy3034);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3034 = new TH1F("Graph_Graph_from_ratio3034","Data",100,0,1.1);
   Graph_Graph_from_ratio3034->SetMinimum(0.8797266);
   Graph_Graph_from_ratio3034->SetMaximum(0.9564806);
   Graph_Graph_from_ratio3034->SetDirectory(0);
   Graph_Graph_from_ratio3034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3034->SetLineColor(ci);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3034->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3034);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
