void csv_discriminator()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 10 16:18:41 2018) by ROOT version6.08/07
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
   p1->Range(0,0,1,1);
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
   
   TH1F *frame__92 = new TH1F("frame__92","t#bar{t}",6,-0.5,2.5);
   frame__92->SetMinimum(0.1);
   frame__92->SetMaximum(0);
   frame__92->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__92->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__92->SetMarkerColor(ci);
   frame__92->GetXaxis()->SetTitle("mass [GeV]");
   frame__92->GetXaxis()->SetLabelFont(42);
   frame__92->GetXaxis()->SetLabelSize(0.035);
   frame__92->GetXaxis()->SetTitleSize(0.035);
   frame__92->GetXaxis()->SetTitleFont(42);
   frame__92->GetYaxis()->SetTitle(" Events");
   frame__92->GetYaxis()->SetNoExponent();
   frame__92->GetYaxis()->SetLabelFont(42);
   frame__92->GetYaxis()->SetTitleSize(0.045);
   frame__92->GetYaxis()->SetTitleOffset(1.3);
   frame__92->GetYaxis()->SetTitleFont(42);
   frame__92->GetZaxis()->SetLabelFont(42);
   frame__92->GetZaxis()->SetLabelSize(0.035);
   frame__92->GetZaxis()->SetTitleSize(0.035);
   frame__92->GetZaxis()->SetTitleFont(42);
   frame__92->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_14 = new TH1F("mc_stack_14","mc",6,-0.5,2.5);
   mc_stack_14->SetMinimum(0);
   mc_stack_14->SetMaximum(0);
   mc_stack_14->SetDirectory(0);
   mc_stack_14->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_14->SetLineColor(ci);
   mc_stack_14->GetXaxis()->SetLabelFont(42);
   mc_stack_14->GetXaxis()->SetLabelSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleSize(0.035);
   mc_stack_14->GetXaxis()->SetTitleFont(42);
   mc_stack_14->GetYaxis()->SetLabelFont(42);
   mc_stack_14->GetYaxis()->SetLabelSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleSize(0.035);
   mc_stack_14->GetYaxis()->SetTitleFont(42);
   mc_stack_14->GetZaxis()->SetLabelFont(42);
   mc_stack_14->GetZaxis()->SetLabelSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleSize(0.035);
   mc_stack_14->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_14);
   
   
   TH1F *csv_discriminator_t#bar{t}__93 = new TH1F("csv_discriminator_t#bar{t}__93","t#bar{t}",6,-0.5,2.5);
   csv_discriminator_t#bar{t}__93->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__93->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   csv_discriminator_t#bar{t}__93->SetMarkerColor(ci);
   csv_discriminator_t#bar{t}__93->GetXaxis()->SetTitle("mass [GeV]");
   csv_discriminator_t#bar{t}__93->GetXaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__93->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__93->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__93->GetXaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__93->GetYaxis()->SetTitle(" Events");
   csv_discriminator_t#bar{t}__93->GetYaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__93->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__93->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__93->GetYaxis()->SetTitleFont(42);
   csv_discriminator_t#bar{t}__93->GetZaxis()->SetLabelFont(42);
   csv_discriminator_t#bar{t}__93->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_t#bar{t}__93->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_t#bar{t}__93->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_t#bar{t},"hist");
   
   TH1F *csv_discriminator_Diboson__94 = new TH1F("csv_discriminator_Diboson__94","Diboson",6,-0.5,2.5);
   csv_discriminator_Diboson__94->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__94->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   csv_discriminator_Diboson__94->SetMarkerColor(ci);
   csv_discriminator_Diboson__94->GetXaxis()->SetTitle("mass [GeV]");
   csv_discriminator_Diboson__94->GetXaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__94->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__94->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__94->GetXaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__94->GetYaxis()->SetTitle(" Events");
   csv_discriminator_Diboson__94->GetYaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__94->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__94->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__94->GetYaxis()->SetTitleFont(42);
   csv_discriminator_Diboson__94->GetZaxis()->SetLabelFont(42);
   csv_discriminator_Diboson__94->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_Diboson__94->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_Diboson__94->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Diboson,"hist");
   
   TH1F *csv_discriminator_DY__95 = new TH1F("csv_discriminator_DY__95","DY",6,-0.5,2.5);
   csv_discriminator_DY__95->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__95->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   csv_discriminator_DY__95->SetMarkerColor(ci);
   csv_discriminator_DY__95->GetXaxis()->SetTitle("mass [GeV]");
   csv_discriminator_DY__95->GetXaxis()->SetLabelFont(42);
   csv_discriminator_DY__95->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__95->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__95->GetXaxis()->SetTitleFont(42);
   csv_discriminator_DY__95->GetYaxis()->SetTitle(" Events");
   csv_discriminator_DY__95->GetYaxis()->SetLabelFont(42);
   csv_discriminator_DY__95->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__95->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__95->GetYaxis()->SetTitleFont(42);
   csv_discriminator_DY__95->GetZaxis()->SetLabelFont(42);
   csv_discriminator_DY__95->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_DY__95->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_DY__95->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_DY,"hist");
   
   TH1F *csv_discriminator_W__96 = new TH1F("csv_discriminator_W__96","W",6,-0.5,2.5);
   csv_discriminator_W__96->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__96->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   csv_discriminator_W__96->SetMarkerColor(ci);
   csv_discriminator_W__96->GetXaxis()->SetTitle("mass [GeV]");
   csv_discriminator_W__96->GetXaxis()->SetLabelFont(42);
   csv_discriminator_W__96->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_W__96->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_W__96->GetXaxis()->SetTitleFont(42);
   csv_discriminator_W__96->GetYaxis()->SetTitle(" Events");
   csv_discriminator_W__96->GetYaxis()->SetLabelFont(42);
   csv_discriminator_W__96->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_W__96->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_W__96->GetYaxis()->SetTitleFont(42);
   csv_discriminator_W__96->GetZaxis()->SetLabelFont(42);
   csv_discriminator_W__96->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_W__96->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_W__96->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_W,"hist");
   
   TH1F *csv_discriminator_SinglesPtop__97 = new TH1F("csv_discriminator_SinglesPtop__97","Single top",6,-0.5,2.5);
   csv_discriminator_SinglesPtop__97->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__97->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   csv_discriminator_SinglesPtop__97->SetMarkerColor(ci);
   csv_discriminator_SinglesPtop__97->GetXaxis()->SetTitle("mass [GeV]");
   csv_discriminator_SinglesPtop__97->GetXaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__97->GetXaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__97->GetXaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__97->GetXaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__97->GetYaxis()->SetTitle(" Events");
   csv_discriminator_SinglesPtop__97->GetYaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__97->GetYaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__97->GetYaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__97->GetYaxis()->SetTitleFont(42);
   csv_discriminator_SinglesPtop__97->GetZaxis()->SetLabelFont(42);
   csv_discriminator_SinglesPtop__97->GetZaxis()->SetLabelSize(0.035);
   csv_discriminator_SinglesPtop__97->GetZaxis()->SetTitleSize(0.035);
   csv_discriminator_SinglesPtop__97->GetZaxis()->SetTitleFont(42);
   mc->Add(csv_discriminator_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_csv_discriminator_fx3027[7] = {
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25,
   0};
   Double_t Graph_from_csv_discriminator_fy3027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_csv_discriminator_felx3027[7] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0};
   Double_t Graph_from_csv_discriminator_fely3027[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_csv_discriminator_fehx3027[7] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0};
   Double_t Graph_from_csv_discriminator_fehy3027[7] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_csv_discriminator_fx3027,Graph_from_csv_discriminator_fy3027,Graph_from_csv_discriminator_felx3027,Graph_from_csv_discriminator_fehx3027,Graph_from_csv_discriminator_fely3027,Graph_from_csv_discriminator_fehy3027);
   grae->SetName("Graph_from_csv_discriminator");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_csv_discriminator3027 = new TH1F("Graph_Graph_from_csv_discriminator3027","Data",100,-0.8,2.8);
   Graph_Graph_from_csv_discriminator3027->SetMinimum(0);
   Graph_Graph_from_csv_discriminator3027->SetMaximum(2.02516);
   Graph_Graph_from_csv_discriminator3027->SetDirectory(0);
   Graph_Graph_from_csv_discriminator3027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_csv_discriminator3027->SetLineColor(ci);
   Graph_Graph_from_csv_discriminator3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_csv_discriminator3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_csv_discriminator3027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_csv_discriminator3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_csv_discriminator3027);
   
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
   p2->Range(-0.9337349,0.4485106,2.680723,1.597447);
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
   
   TH1F *ratioframe__98 = new TH1F("ratioframe__98","t#bar{t}",6,-0.5,2.5);
   ratioframe__98->SetMinimum(0.46);
   ratioframe__98->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__98->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__98->SetMarkerColor(ci);
   ratioframe__98->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__98->GetXaxis()->SetLabelFont(42);
   ratioframe__98->GetXaxis()->SetLabelSize(0);
   ratioframe__98->GetXaxis()->SetTitleSize(0);
   ratioframe__98->GetXaxis()->SetTitleOffset(0);
   ratioframe__98->GetXaxis()->SetTitleFont(42);
   ratioframe__98->GetYaxis()->SetTitle("Data/MC");
   ratioframe__98->GetYaxis()->SetNoExponent();
   ratioframe__98->GetYaxis()->SetNdivisions(5);
   ratioframe__98->GetYaxis()->SetLabelFont(42);
   ratioframe__98->GetYaxis()->SetLabelSize(0.18);
   ratioframe__98->GetYaxis()->SetTitleSize(0.2);
   ratioframe__98->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__98->GetYaxis()->SetTitleFont(42);
   ratioframe__98->GetZaxis()->SetLabelFont(42);
   ratioframe__98->GetZaxis()->SetLabelSize(0.035);
   ratioframe__98->GetZaxis()->SetTitleSize(0.035);
   ratioframe__98->GetZaxis()->SetTitleFont(42);
   ratioframe__98->Draw("");
   
   Double_t Graph_from_ratio_fx3028[6] = {
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_ratio_fy3028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3028[6] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_ratio_fely3028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3028[6] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_ratio_fehy3028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(6,Graph_from_ratio_fx3028,Graph_from_ratio_fy3028,Graph_from_ratio_felx3028,Graph_from_ratio_fehx3028,Graph_from_ratio_fely3028,Graph_from_ratio_fehy3028);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3028 = new TH1F("Graph_Graph_from_ratio3028","Data",100,-0.8,2.8);
   Graph_Graph_from_ratio3028->SetMinimum(0);
   Graph_Graph_from_ratio3028->SetMaximum(1.1);
   Graph_Graph_from_ratio3028->SetDirectory(0);
   Graph_Graph_from_ratio3028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3028->SetLineColor(ci);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3028);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
