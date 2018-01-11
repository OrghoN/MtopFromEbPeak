void cut_flow()
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
   
   TH1F *frame__57 = new TH1F("frame__57","t#bar{t}",4,0.5,4.5);
   frame__57->SetMinimum(0.1);
   frame__57->SetMaximum(306886.3);
   frame__57->SetEntries(1773475);
   frame__57->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__57->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__57->SetMarkerColor(ci);
   frame__57->GetXaxis()->SetTitle("mass [GeV]");
   frame__57->GetXaxis()->SetLabelFont(42);
   frame__57->GetXaxis()->SetLabelSize(0.035);
   frame__57->GetXaxis()->SetTitleSize(0.035);
   frame__57->GetXaxis()->SetTitleFont(42);
   frame__57->GetYaxis()->SetTitle(" Events");
   frame__57->GetYaxis()->SetNoExponent();
   frame__57->GetYaxis()->SetLabelFont(42);
   frame__57->GetYaxis()->SetTitleSize(0.045);
   frame__57->GetYaxis()->SetTitleOffset(1.3);
   frame__57->GetYaxis()->SetTitleFont(42);
   frame__57->GetZaxis()->SetLabelFont(42);
   frame__57->GetZaxis()->SetLabelSize(0.035);
   frame__57->GetZaxis()->SetTitleSize(0.035);
   frame__57->GetZaxis()->SetTitleFont(42);
   frame__57->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_9 = new TH1F("mc_stack_9","mc",4,0.5,4.5);
   mc_stack_9->SetMinimum(0);
   mc_stack_9->SetMaximum(247869.7);
   mc_stack_9->SetDirectory(0);
   mc_stack_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_9->SetLineColor(ci);
   mc_stack_9->GetXaxis()->SetLabelFont(42);
   mc_stack_9->GetXaxis()->SetLabelSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleFont(42);
   mc_stack_9->GetYaxis()->SetLabelFont(42);
   mc_stack_9->GetYaxis()->SetLabelSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleFont(42);
   mc_stack_9->GetZaxis()->SetLabelFont(42);
   mc_stack_9->GetZaxis()->SetLabelSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_9);
   
   
   TH1F *cut_flow_t#bar{t}__58 = new TH1F("cut_flow_t#bar{t}__58","t#bar{t}",4,0.5,4.5);
   cut_flow_t#bar{t}__58->SetBinContent(1,208869.5);
   cut_flow_t#bar{t}__58->SetBinContent(2,173497.6);
   cut_flow_t#bar{t}__58->SetBinContent(3,137859.4);
   cut_flow_t#bar{t}__58->SetBinContent(4,137767.4);
   cut_flow_t#bar{t}__58->SetBinError(1,292.9197);
   cut_flow_t#bar{t}__58->SetBinError(2,266.9722);
   cut_flow_t#bar{t}__58->SetBinError(3,237.9584);
   cut_flow_t#bar{t}__58->SetBinError(4,237.8798);
   cut_flow_t#bar{t}__58->SetEntries(1720698);
   cut_flow_t#bar{t}__58->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__58->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__58->SetMarkerColor(ci);
   cut_flow_t#bar{t}__58->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_t#bar{t}__58->GetXaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__58->GetXaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__58->GetXaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__58->GetXaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__58->GetYaxis()->SetTitle(" Events");
   cut_flow_t#bar{t}__58->GetYaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__58->GetYaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__58->GetYaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__58->GetYaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__58->GetZaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__58->GetZaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__58->GetZaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__58->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_t#bar{t},"hist");
   
   TH1F *cut_flow_Diboson__59 = new TH1F("cut_flow_Diboson__59","Diboson",4,0.5,4.5);
   cut_flow_Diboson__59->SetBinContent(1,5347.222);
   cut_flow_Diboson__59->SetBinContent(2,2579.448);
   cut_flow_Diboson__59->SetBinContent(3,181.1088);
   cut_flow_Diboson__59->SetBinContent(4,181.1088);
   cut_flow_Diboson__59->SetBinError(1,45.58919);
   cut_flow_Diboson__59->SetBinError(2,31.66543);
   cut_flow_Diboson__59->SetBinError(3,8.38248);
   cut_flow_Diboson__59->SetBinError(4,8.38248);
   cut_flow_Diboson__59->SetEntries(23289);
   cut_flow_Diboson__59->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__59->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__59->SetMarkerColor(ci);
   cut_flow_Diboson__59->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_Diboson__59->GetXaxis()->SetLabelFont(42);
   cut_flow_Diboson__59->GetXaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__59->GetXaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__59->GetXaxis()->SetTitleFont(42);
   cut_flow_Diboson__59->GetYaxis()->SetTitle(" Events");
   cut_flow_Diboson__59->GetYaxis()->SetLabelFont(42);
   cut_flow_Diboson__59->GetYaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__59->GetYaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__59->GetYaxis()->SetTitleFont(42);
   cut_flow_Diboson__59->GetZaxis()->SetLabelFont(42);
   cut_flow_Diboson__59->GetZaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__59->GetZaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__59->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Diboson,"hist");
   
   TH1F *cut_flow_DY__60 = new TH1F("cut_flow_DY__60","DY",4,0.5,4.5);
   cut_flow_DY__60->SetBinContent(1,7085.233);
   cut_flow_DY__60->SetBinContent(2,3011.9);
   cut_flow_DY__60->SetBinContent(3,331.7063);
   cut_flow_DY__60->SetBinContent(4,331.7063);
   cut_flow_DY__60->SetBinError(1,345.4941);
   cut_flow_DY__60->SetBinError(2,227.4528);
   cut_flow_DY__60->SetBinError(3,75.73561);
   cut_flow_DY__60->SetBinError(4,75.73561);
   cut_flow_DY__60->SetEntries(696);
   cut_flow_DY__60->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__60->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__60->SetMarkerColor(ci);
   cut_flow_DY__60->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_DY__60->GetXaxis()->SetLabelFont(42);
   cut_flow_DY__60->GetXaxis()->SetLabelSize(0.035);
   cut_flow_DY__60->GetXaxis()->SetTitleSize(0.035);
   cut_flow_DY__60->GetXaxis()->SetTitleFont(42);
   cut_flow_DY__60->GetYaxis()->SetTitle(" Events");
   cut_flow_DY__60->GetYaxis()->SetLabelFont(42);
   cut_flow_DY__60->GetYaxis()->SetLabelSize(0.035);
   cut_flow_DY__60->GetYaxis()->SetTitleSize(0.035);
   cut_flow_DY__60->GetYaxis()->SetTitleFont(42);
   cut_flow_DY__60->GetZaxis()->SetLabelFont(42);
   cut_flow_DY__60->GetZaxis()->SetLabelSize(0.035);
   cut_flow_DY__60->GetZaxis()->SetTitleSize(0.035);
   cut_flow_DY__60->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_DY,"hist");
   
   TH1F *cut_flow_W__61 = new TH1F("cut_flow_W__61","W",4,0.5,4.5);
   cut_flow_W__61->SetBinContent(1,975.6682);
   cut_flow_W__61->SetBinContent(2,620.6245);
   cut_flow_W__61->SetBinError(1,288.476);
   cut_flow_W__61->SetBinError(2,228.586);
   cut_flow_W__61->SetEntries(23);
   cut_flow_W__61->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__61->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__61->SetMarkerColor(ci);
   cut_flow_W__61->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_W__61->GetXaxis()->SetLabelFont(42);
   cut_flow_W__61->GetXaxis()->SetLabelSize(0.035);
   cut_flow_W__61->GetXaxis()->SetTitleSize(0.035);
   cut_flow_W__61->GetXaxis()->SetTitleFont(42);
   cut_flow_W__61->GetYaxis()->SetTitle(" Events");
   cut_flow_W__61->GetYaxis()->SetLabelFont(42);
   cut_flow_W__61->GetYaxis()->SetLabelSize(0.035);
   cut_flow_W__61->GetYaxis()->SetTitleSize(0.035);
   cut_flow_W__61->GetYaxis()->SetTitleFont(42);
   cut_flow_W__61->GetZaxis()->SetLabelFont(42);
   cut_flow_W__61->GetZaxis()->SetLabelSize(0.035);
   cut_flow_W__61->GetZaxis()->SetTitleSize(0.035);
   cut_flow_W__61->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_W,"hist");
   
   TH1F *cut_flow_SinglesPtop__62 = new TH1F("cut_flow_SinglesPtop__62","Single top",4,0.5,4.5);
   cut_flow_SinglesPtop__62->SetBinContent(1,13788.83);
   cut_flow_SinglesPtop__62->SetBinContent(2,9081.609);
   cut_flow_SinglesPtop__62->SetBinContent(3,6402.376);
   cut_flow_SinglesPtop__62->SetBinContent(4,6396.946);
   cut_flow_SinglesPtop__62->SetBinError(1,135.785);
   cut_flow_SinglesPtop__62->SetBinError(2,110.2191);
   cut_flow_SinglesPtop__62->SetBinError(3,92.54642);
   cut_flow_SinglesPtop__62->SetBinError(4,92.50653);
   cut_flow_SinglesPtop__62->SetEntries(28769);
   cut_flow_SinglesPtop__62->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__62->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__62->SetMarkerColor(ci);
   cut_flow_SinglesPtop__62->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_SinglesPtop__62->GetXaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__62->GetXaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__62->GetXaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__62->GetXaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__62->GetYaxis()->SetTitle(" Events");
   cut_flow_SinglesPtop__62->GetYaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__62->GetYaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__62->GetYaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__62->GetYaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__62->GetZaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__62->GetZaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__62->GetZaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__62->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_cut_flow_fx3017[5] = {
   1,
   2,
   3,
   4,
   0};
   Double_t Graph_from_cut_flow_fy3017[5] = {
   222631,
   176629,
   131175,
   131120,
   0};
   Double_t Graph_from_cut_flow_felx3017[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_cut_flow_fely3017[5] = {
   471.8379,
   420.2725,
   362.1809,
   362.105,
   0};
   Double_t Graph_from_cut_flow_fehx3017[5] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_cut_flow_fehy3017[5] = {
   471.8379,
   420.2725,
   362.1809,
   362.105,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph_from_cut_flow_fx3017,Graph_from_cut_flow_fy3017,Graph_from_cut_flow_felx3017,Graph_from_cut_flow_fehx3017,Graph_from_cut_flow_fely3017,Graph_from_cut_flow_fehy3017);
   grae->SetName("Graph_from_cut_flow");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_cut_flow3017 = new TH1F("Graph_Graph_from_cut_flow3017","Data",100,0,4.95);
   Graph_Graph_from_cut_flow3017->SetMinimum(0);
   Graph_Graph_from_cut_flow3017->SetMaximum(245413.1);
   Graph_Graph_from_cut_flow3017->SetDirectory(0);
   Graph_Graph_from_cut_flow3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_cut_flow3017->SetLineColor(ci);
   Graph_Graph_from_cut_flow3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_cut_flow3017);
   
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
   
   TH1F *ratioframe__63 = new TH1F("ratioframe__63","t#bar{t}",4,0.5,4.5);
   ratioframe__63->SetMinimum(0.46);
   ratioframe__63->SetMaximum(1.54);
   ratioframe__63->SetEntries(1773475);

   ci = TColor::GetColor("#cc0000");
   ratioframe__63->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__63->SetMarkerColor(ci);
   ratioframe__63->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__63->GetXaxis()->SetLabelFont(42);
   ratioframe__63->GetXaxis()->SetLabelSize(0);
   ratioframe__63->GetXaxis()->SetTitleSize(0);
   ratioframe__63->GetXaxis()->SetTitleOffset(0);
   ratioframe__63->GetXaxis()->SetTitleFont(42);
   ratioframe__63->GetYaxis()->SetTitle("Data/MC");
   ratioframe__63->GetYaxis()->SetNoExponent();
   ratioframe__63->GetYaxis()->SetNdivisions(5);
   ratioframe__63->GetYaxis()->SetLabelFont(42);
   ratioframe__63->GetYaxis()->SetLabelSize(0.18);
   ratioframe__63->GetYaxis()->SetTitleSize(0.2);
   ratioframe__63->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__63->GetYaxis()->SetTitleFont(42);
   ratioframe__63->GetZaxis()->SetLabelFont(42);
   ratioframe__63->GetZaxis()->SetLabelSize(0.035);
   ratioframe__63->GetZaxis()->SetTitleSize(0.035);
   ratioframe__63->GetZaxis()->SetTitleFont(42);
   ratioframe__63->Draw("");
   
   Double_t Graph_from_ratio_fx3018[4] = {
   1,
   2,
   3,
   4};
   Double_t Graph_from_ratio_fy3018[4] = {
   0.9430863,
   0.9355787,
   0.9060639,
   0.9062935};
   Double_t Graph_from_ratio_felx3018[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3018[4] = {
   0.002987491,
   0.00309559,
   0.003006526,
   0.003008055};
   Double_t Graph_from_ratio_fehx3018[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3018[4] = {
   0.002987491,
   0.00309559,
   0.003006526,
   0.003008055};
   grae = new TGraphAsymmErrors(4,Graph_from_ratio_fx3018,Graph_from_ratio_fy3018,Graph_from_ratio_felx3018,Graph_from_ratio_fehx3018,Graph_from_ratio_fely3018,Graph_from_ratio_fehy3018);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3018 = new TH1F("Graph_Graph_from_ratio3018","Data",100,0.1,4.9);
   Graph_Graph_from_ratio3018->SetMinimum(0.8987557);
   Graph_Graph_from_ratio3018->SetMaximum(0.9503754);
   Graph_Graph_from_ratio3018->SetDirectory(0);
   Graph_Graph_from_ratio3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3018->SetLineColor(ci);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3018);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
