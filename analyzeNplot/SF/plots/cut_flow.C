void cut_flow()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:38:01 2018) by ROOT version6.08/07
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
   p1->Range(-0.07831325,-42329.04,4.740964,310413.8);
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
   
   TH1F *frame__148 = new TH1F("frame__148","t#bar{t}",4,0.5,4.5);
   frame__148->SetMinimum(0.1);
   frame__148->SetMaximum(306886.3);
   frame__148->SetEntries(1762726);
   frame__148->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__148->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__148->SetMarkerColor(ci);
   frame__148->GetXaxis()->SetTitle("mass [GeV]");
   frame__148->GetXaxis()->SetLabelFont(42);
   frame__148->GetXaxis()->SetLabelSize(0.035);
   frame__148->GetXaxis()->SetTitleSize(0.035);
   frame__148->GetXaxis()->SetTitleFont(42);
   frame__148->GetYaxis()->SetTitle(" Events");
   frame__148->GetYaxis()->SetNoExponent();
   frame__148->GetYaxis()->SetLabelFont(42);
   frame__148->GetYaxis()->SetTitleSize(0.045);
   frame__148->GetYaxis()->SetTitleOffset(1.3);
   frame__148->GetYaxis()->SetTitleFont(42);
   frame__148->GetZaxis()->SetLabelFont(42);
   frame__148->GetZaxis()->SetLabelSize(0.035);
   frame__148->GetZaxis()->SetTitleSize(0.035);
   frame__148->GetZaxis()->SetTitleFont(42);
   frame__148->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_22 = new TH1F("mc_stack_22","mc",4,0.5,4.5);
   mc_stack_22->SetMinimum(0);
   mc_stack_22->SetMaximum(247869.7);
   mc_stack_22->SetDirectory(0);
   mc_stack_22->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_22->SetLineColor(ci);
   mc_stack_22->GetXaxis()->SetLabelFont(42);
   mc_stack_22->GetXaxis()->SetLabelSize(0.035);
   mc_stack_22->GetXaxis()->SetTitleSize(0.035);
   mc_stack_22->GetXaxis()->SetTitleFont(42);
   mc_stack_22->GetYaxis()->SetLabelFont(42);
   mc_stack_22->GetYaxis()->SetLabelSize(0.035);
   mc_stack_22->GetYaxis()->SetTitleSize(0.035);
   mc_stack_22->GetYaxis()->SetTitleFont(42);
   mc_stack_22->GetZaxis()->SetLabelFont(42);
   mc_stack_22->GetZaxis()->SetLabelSize(0.035);
   mc_stack_22->GetZaxis()->SetTitleSize(0.035);
   mc_stack_22->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_22);
   
   
   TH1F *cut_flow_t#bar{t}__149 = new TH1F("cut_flow_t#bar{t}__149","t#bar{t}",4,0.5,4.5);
   cut_flow_t#bar{t}__149->SetBinContent(1,208869.5);
   cut_flow_t#bar{t}__149->SetBinContent(2,173497.6);
   cut_flow_t#bar{t}__149->SetBinContent(3,135849.9);
   cut_flow_t#bar{t}__149->SetBinContent(4,135760.7);
   cut_flow_t#bar{t}__149->SetBinError(1,292.9197);
   cut_flow_t#bar{t}__149->SetBinError(2,266.9722);
   cut_flow_t#bar{t}__149->SetBinError(3,236.2217);
   cut_flow_t#bar{t}__149->SetBinError(4,236.1449);
   cut_flow_t#bar{t}__149->SetEntries(1710249);
   cut_flow_t#bar{t}__149->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__149->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__149->SetMarkerColor(ci);
   cut_flow_t#bar{t}__149->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_t#bar{t}__149->GetXaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__149->GetXaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__149->GetXaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__149->GetXaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__149->GetYaxis()->SetTitle(" Events");
   cut_flow_t#bar{t}__149->GetYaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__149->GetYaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__149->GetYaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__149->GetYaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__149->GetZaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__149->GetZaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__149->GetZaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__149->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_t#bar{t},"hist");
   
   TH1F *cut_flow_Diboson__150 = new TH1F("cut_flow_Diboson__150","Diboson",4,0.5,4.5);
   cut_flow_Diboson__150->SetBinContent(1,5347.222);
   cut_flow_Diboson__150->SetBinContent(2,2579.448);
   cut_flow_Diboson__150->SetBinContent(3,176.0617);
   cut_flow_Diboson__150->SetBinContent(4,176.0617);
   cut_flow_Diboson__150->SetBinError(1,45.58919);
   cut_flow_Diboson__150->SetBinError(2,31.66543);
   cut_flow_Diboson__150->SetBinError(3,8.258263);
   cut_flow_Diboson__150->SetBinError(4,8.258263);
   cut_flow_Diboson__150->SetEntries(23263);
   cut_flow_Diboson__150->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__150->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__150->SetMarkerColor(ci);
   cut_flow_Diboson__150->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_Diboson__150->GetXaxis()->SetLabelFont(42);
   cut_flow_Diboson__150->GetXaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__150->GetXaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__150->GetXaxis()->SetTitleFont(42);
   cut_flow_Diboson__150->GetYaxis()->SetTitle(" Events");
   cut_flow_Diboson__150->GetYaxis()->SetLabelFont(42);
   cut_flow_Diboson__150->GetYaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__150->GetYaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__150->GetYaxis()->SetTitleFont(42);
   cut_flow_Diboson__150->GetZaxis()->SetLabelFont(42);
   cut_flow_Diboson__150->GetZaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__150->GetZaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__150->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Diboson,"hist");
   
   TH1F *cut_flow_DY__151 = new TH1F("cut_flow_DY__151","DY",4,0.5,4.5);
   cut_flow_DY__151->SetBinContent(1,7085.233);
   cut_flow_DY__151->SetBinContent(2,3011.9);
   cut_flow_DY__151->SetBinContent(3,331.7063);
   cut_flow_DY__151->SetBinContent(4,331.7063);
   cut_flow_DY__151->SetBinError(1,345.4941);
   cut_flow_DY__151->SetBinError(2,227.4528);
   cut_flow_DY__151->SetBinError(3,75.73561);
   cut_flow_DY__151->SetBinError(4,75.73561);
   cut_flow_DY__151->SetEntries(696);
   cut_flow_DY__151->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__151->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__151->SetMarkerColor(ci);
   cut_flow_DY__151->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_DY__151->GetXaxis()->SetLabelFont(42);
   cut_flow_DY__151->GetXaxis()->SetLabelSize(0.035);
   cut_flow_DY__151->GetXaxis()->SetTitleSize(0.035);
   cut_flow_DY__151->GetXaxis()->SetTitleFont(42);
   cut_flow_DY__151->GetYaxis()->SetTitle(" Events");
   cut_flow_DY__151->GetYaxis()->SetLabelFont(42);
   cut_flow_DY__151->GetYaxis()->SetLabelSize(0.035);
   cut_flow_DY__151->GetYaxis()->SetTitleSize(0.035);
   cut_flow_DY__151->GetYaxis()->SetTitleFont(42);
   cut_flow_DY__151->GetZaxis()->SetLabelFont(42);
   cut_flow_DY__151->GetZaxis()->SetLabelSize(0.035);
   cut_flow_DY__151->GetZaxis()->SetTitleSize(0.035);
   cut_flow_DY__151->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_DY,"hist");
   
   TH1F *cut_flow_W__152 = new TH1F("cut_flow_W__152","W",4,0.5,4.5);
   cut_flow_W__152->SetBinContent(1,975.6682);
   cut_flow_W__152->SetBinContent(2,620.6245);
   cut_flow_W__152->SetBinError(1,288.476);
   cut_flow_W__152->SetBinError(2,228.586);
   cut_flow_W__152->SetEntries(23);
   cut_flow_W__152->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__152->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__152->SetMarkerColor(ci);
   cut_flow_W__152->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_W__152->GetXaxis()->SetLabelFont(42);
   cut_flow_W__152->GetXaxis()->SetLabelSize(0.035);
   cut_flow_W__152->GetXaxis()->SetTitleSize(0.035);
   cut_flow_W__152->GetXaxis()->SetTitleFont(42);
   cut_flow_W__152->GetYaxis()->SetTitle(" Events");
   cut_flow_W__152->GetYaxis()->SetLabelFont(42);
   cut_flow_W__152->GetYaxis()->SetLabelSize(0.035);
   cut_flow_W__152->GetYaxis()->SetTitleSize(0.035);
   cut_flow_W__152->GetYaxis()->SetTitleFont(42);
   cut_flow_W__152->GetZaxis()->SetLabelFont(42);
   cut_flow_W__152->GetZaxis()->SetLabelSize(0.035);
   cut_flow_W__152->GetZaxis()->SetTitleSize(0.035);
   cut_flow_W__152->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_W,"hist");
   
   TH1F *cut_flow_SinglesPtop__153 = new TH1F("cut_flow_SinglesPtop__153","Single top",4,0.5,4.5);
   cut_flow_SinglesPtop__153->SetBinContent(1,13788.83);
   cut_flow_SinglesPtop__153->SetBinContent(2,9081.609);
   cut_flow_SinglesPtop__153->SetBinContent(3,6231.372);
   cut_flow_SinglesPtop__153->SetBinContent(4,6225.942);
   cut_flow_SinglesPtop__153->SetBinError(1,135.785);
   cut_flow_SinglesPtop__153->SetBinError(2,110.2191);
   cut_flow_SinglesPtop__153->SetBinError(3,91.28846);
   cut_flow_SinglesPtop__153->SetBinError(4,91.24801);
   cut_flow_SinglesPtop__153->SetEntries(28495);
   cut_flow_SinglesPtop__153->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__153->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__153->SetMarkerColor(ci);
   cut_flow_SinglesPtop__153->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_SinglesPtop__153->GetXaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__153->GetXaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__153->GetXaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__153->GetXaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__153->GetYaxis()->SetTitle(" Events");
   cut_flow_SinglesPtop__153->GetYaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__153->GetYaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__153->GetYaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__153->GetYaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__153->GetZaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__153->GetZaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__153->GetZaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__153->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_cut_flow_fx3043[5] = {
   1,
   2,
   3,
   4,
   0};
   Double_t Graph_from_cut_flow_fy3043[5] = {
   222631,
   176629,
   132659,
   132604,
   0};
   Double_t Graph_from_cut_flow_felx3043[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_cut_flow_fely3043[5] = {
   471.8379,
   420.2725,
   364.2238,
   364.1483,
   0};
   Double_t Graph_from_cut_flow_fehx3043[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_cut_flow_fehy3043[5] = {
   471.8379,
   420.2725,
   364.2238,
   364.1483,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph_from_cut_flow_fx3043,Graph_from_cut_flow_fy3043,Graph_from_cut_flow_felx3043,Graph_from_cut_flow_fehx3043,Graph_from_cut_flow_fely3043,Graph_from_cut_flow_fehy3043);
   grae->SetName("Graph_from_cut_flow");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_cut_flow3043 = new TH1F("Graph_Graph_from_cut_flow3043","Data",100,0,4.95);
   Graph_Graph_from_cut_flow3043->SetMinimum(0);
   Graph_Graph_from_cut_flow3043->SetMaximum(245413.1);
   Graph_Graph_from_cut_flow3043->SetDirectory(0);
   Graph_Graph_from_cut_flow3043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_cut_flow3043->SetLineColor(ci);
   Graph_Graph_from_cut_flow3043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3043->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_cut_flow3043);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_cut_flow","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("cut_flow_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("cut_flow_Diboson","Diboson","f");

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
   entry=leg->AddEntry("cut_flow_DY","DY","f");

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
   entry=leg->AddEntry("cut_flow_W","W","f");

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
   entry=leg->AddEntry("cut_flow_Single top","Single top","f");

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
   p2->Range(-0.07831325,0.4485106,4.740964,1.597447);
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
   
   TH1F *ratioframe__154 = new TH1F("ratioframe__154","t#bar{t}",4,0.5,4.5);
   ratioframe__154->SetMinimum(0.46);
   ratioframe__154->SetMaximum(1.54);
   ratioframe__154->SetEntries(1762726);

   ci = TColor::GetColor("#cc0000");
   ratioframe__154->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__154->SetMarkerColor(ci);
   ratioframe__154->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__154->GetXaxis()->SetLabelFont(42);
   ratioframe__154->GetXaxis()->SetLabelSize(0);
   ratioframe__154->GetXaxis()->SetTitleSize(0);
   ratioframe__154->GetXaxis()->SetTitleOffset(0);
   ratioframe__154->GetXaxis()->SetTitleFont(42);
   ratioframe__154->GetYaxis()->SetTitle("Data/MC");
   ratioframe__154->GetYaxis()->SetNoExponent();
   ratioframe__154->GetYaxis()->SetNdivisions(5);
   ratioframe__154->GetYaxis()->SetLabelFont(42);
   ratioframe__154->GetYaxis()->SetLabelSize(0.18);
   ratioframe__154->GetYaxis()->SetTitleSize(0.2);
   ratioframe__154->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__154->GetYaxis()->SetTitleFont(42);
   ratioframe__154->GetZaxis()->SetLabelFont(42);
   ratioframe__154->GetZaxis()->SetLabelSize(0.035);
   ratioframe__154->GetZaxis()->SetTitleSize(0.035);
   ratioframe__154->GetZaxis()->SetTitleFont(42);
   ratioframe__154->Draw("");
   
   Double_t Graph_from_ratio_fx3044[4] = {
   1,
   2,
   3,
   4};
   Double_t Graph_from_ratio_fy3044[4] = {
   0.9430863,
   0.9355787,
   0.9303589,
   0.9305912};
   Double_t Graph_from_ratio_felx3044[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3044[4] = {
   0.002987491,
   0.00309559,
   0.003082564,
   0.003084114};
   Double_t Graph_from_ratio_fehx3044[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3044[4] = {
   0.002987491,
   0.00309559,
   0.003082564,
   0.003084114};
   grae = new TGraphAsymmErrors(4,Graph_from_ratio_fx3044,Graph_from_ratio_fy3044,Graph_from_ratio_felx3044,Graph_from_ratio_fehx3044,Graph_from_ratio_fely3044,Graph_from_ratio_fehy3044);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3044 = new TH1F("Graph_Graph_from_ratio3044","Data",100,0.1,4.9);
   Graph_Graph_from_ratio3044->SetMinimum(0.9253966);
   Graph_Graph_from_ratio3044->SetMaximum(0.9479535);
   Graph_Graph_from_ratio3044->SetDirectory(0);
   Graph_Graph_from_ratio3044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3044->SetLineColor(ci);
   Graph_Graph_from_ratio3044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3044->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3044);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
