void nbtags()
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
   p1->Range(0.2108434,-16234.55,2.620482,119054.2);
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
   
   TH1F *frame__64 = new TH1F("frame__64","t#bar{t}",2,0.5,2.5);
   frame__64->SetMinimum(0.1);
   frame__64->SetMaximum(117701.3);
   frame__64->SetEntries(365945);
   frame__64->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__64->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__64->SetMarkerColor(ci);
   frame__64->GetXaxis()->SetTitle("b-tag multiplicity");
   frame__64->GetXaxis()->SetLabelFont(42);
   frame__64->GetXaxis()->SetLabelSize(0.035);
   frame__64->GetXaxis()->SetTitleSize(0.035);
   frame__64->GetXaxis()->SetTitleFont(42);
   frame__64->GetYaxis()->SetTitle(" Events");
   frame__64->GetYaxis()->SetNoExponent();
   frame__64->GetYaxis()->SetLabelFont(42);
   frame__64->GetYaxis()->SetTitleSize(0.045);
   frame__64->GetYaxis()->SetTitleOffset(1.3);
   frame__64->GetYaxis()->SetTitleFont(42);
   frame__64->GetZaxis()->SetLabelFont(42);
   frame__64->GetZaxis()->SetLabelSize(0.035);
   frame__64->GetZaxis()->SetTitleSize(0.035);
   frame__64->GetZaxis()->SetTitleFont(42);
   frame__64->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_10 = new TH1F("mc_stack_10","mc",2,0.5,2.5);
   mc_stack_10->SetMinimum(0);
   mc_stack_10->SetMaximum(95066.44);
   mc_stack_10->SetDirectory(0);
   mc_stack_10->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_10->SetLineColor(ci);
   mc_stack_10->GetXaxis()->SetLabelFont(42);
   mc_stack_10->GetXaxis()->SetLabelSize(0.035);
   mc_stack_10->GetXaxis()->SetTitleSize(0.035);
   mc_stack_10->GetXaxis()->SetTitleFont(42);
   mc_stack_10->GetYaxis()->SetLabelFont(42);
   mc_stack_10->GetYaxis()->SetLabelSize(0.035);
   mc_stack_10->GetYaxis()->SetTitleSize(0.035);
   mc_stack_10->GetYaxis()->SetTitleFont(42);
   mc_stack_10->GetZaxis()->SetLabelFont(42);
   mc_stack_10->GetZaxis()->SetLabelSize(0.035);
   mc_stack_10->GetZaxis()->SetTitleSize(0.035);
   mc_stack_10->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_10);
   
   
   TH1F *nbtags_t#bar{t}__65 = new TH1F("nbtags_t#bar{t}__65","t#bar{t}",2,0.5,2.5);
   nbtags_t#bar{t}__65->SetBinContent(1,85189.11);
   nbtags_t#bar{t}__65->SetBinContent(2,52577.23);
   nbtags_t#bar{t}__65->SetBinError(1,187.0562);
   nbtags_t#bar{t}__65->SetBinError(2,146.9585);
   nbtags_t#bar{t}__65->SetEntries(360257);
   nbtags_t#bar{t}__65->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}__65->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}__65->SetMarkerColor(ci);
   nbtags_t#bar{t}__65->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_t#bar{t}__65->GetXaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__65->GetXaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__65->GetXaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__65->GetXaxis()->SetTitleFont(42);
   nbtags_t#bar{t}__65->GetYaxis()->SetTitle(" Events");
   nbtags_t#bar{t}__65->GetYaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__65->GetYaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__65->GetYaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__65->GetYaxis()->SetTitleFont(42);
   nbtags_t#bar{t}__65->GetZaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__65->GetZaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__65->GetZaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__65->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_t#bar{t},"hist");
   
   TH1F *nbtags_Diboson__66 = new TH1F("nbtags_Diboson__66","Diboson",2,0.5,2.5);
   nbtags_Diboson__66->SetBinContent(1,170.4882);
   nbtags_Diboson__66->SetBinContent(2,10.62065);
   nbtags_Diboson__66->SetBinError(1,8.136612);
   nbtags_Diboson__66->SetBinError(2,2.01532);
   nbtags_Diboson__66->SetEntries(511);
   nbtags_Diboson__66->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson__66->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson__66->SetMarkerColor(ci);
   nbtags_Diboson__66->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_Diboson__66->GetXaxis()->SetLabelFont(42);
   nbtags_Diboson__66->GetXaxis()->SetLabelSize(0.035);
   nbtags_Diboson__66->GetXaxis()->SetTitleSize(0.035);
   nbtags_Diboson__66->GetXaxis()->SetTitleFont(42);
   nbtags_Diboson__66->GetYaxis()->SetTitle(" Events");
   nbtags_Diboson__66->GetYaxis()->SetLabelFont(42);
   nbtags_Diboson__66->GetYaxis()->SetLabelSize(0.035);
   nbtags_Diboson__66->GetYaxis()->SetTitleSize(0.035);
   nbtags_Diboson__66->GetYaxis()->SetTitleFont(42);
   nbtags_Diboson__66->GetZaxis()->SetLabelFont(42);
   nbtags_Diboson__66->GetZaxis()->SetLabelSize(0.035);
   nbtags_Diboson__66->GetZaxis()->SetTitleSize(0.035);
   nbtags_Diboson__66->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Diboson,"hist");
   
   TH1F *nbtags_DY__67 = new TH1F("nbtags_DY__67","DY",2,0.5,2.5);
   nbtags_DY__67->SetBinContent(1,277.0593);
   nbtags_DY__67->SetBinContent(2,54.64707);
   nbtags_DY__67->SetBinError(1,68.83347);
   nbtags_DY__67->SetBinError(2,31.58856);
   nbtags_DY__67->SetEntries(21);
   nbtags_DY__67->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY__67->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY__67->SetMarkerColor(ci);
   nbtags_DY__67->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_DY__67->GetXaxis()->SetLabelFont(42);
   nbtags_DY__67->GetXaxis()->SetLabelSize(0.035);
   nbtags_DY__67->GetXaxis()->SetTitleSize(0.035);
   nbtags_DY__67->GetXaxis()->SetTitleFont(42);
   nbtags_DY__67->GetYaxis()->SetTitle(" Events");
   nbtags_DY__67->GetYaxis()->SetLabelFont(42);
   nbtags_DY__67->GetYaxis()->SetLabelSize(0.035);
   nbtags_DY__67->GetYaxis()->SetTitleSize(0.035);
   nbtags_DY__67->GetYaxis()->SetTitleFont(42);
   nbtags_DY__67->GetZaxis()->SetLabelFont(42);
   nbtags_DY__67->GetZaxis()->SetLabelSize(0.035);
   nbtags_DY__67->GetZaxis()->SetTitleSize(0.035);
   nbtags_DY__67->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_DY,"hist");
   
   TH1F *nbtags_W__68 = new TH1F("nbtags_W__68","W",2,0.5,2.5);
   nbtags_W__68->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nbtags_W__68->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nbtags_W__68->SetMarkerColor(ci);
   nbtags_W__68->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_W__68->GetXaxis()->SetLabelFont(42);
   nbtags_W__68->GetXaxis()->SetLabelSize(0.035);
   nbtags_W__68->GetXaxis()->SetTitleSize(0.035);
   nbtags_W__68->GetXaxis()->SetTitleFont(42);
   nbtags_W__68->GetYaxis()->SetTitle(" Events");
   nbtags_W__68->GetYaxis()->SetLabelFont(42);
   nbtags_W__68->GetYaxis()->SetLabelSize(0.035);
   nbtags_W__68->GetYaxis()->SetTitleSize(0.035);
   nbtags_W__68->GetYaxis()->SetTitleFont(42);
   nbtags_W__68->GetZaxis()->SetLabelFont(42);
   nbtags_W__68->GetZaxis()->SetLabelSize(0.035);
   nbtags_W__68->GetZaxis()->SetTitleSize(0.035);
   nbtags_W__68->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_W,"hist");
   
   TH1F *nbtags_SinglesPtop__69 = new TH1F("nbtags_SinglesPtop__69","Single top",2,0.5,2.5);
   nbtags_SinglesPtop__69->SetBinContent(1,4902.809);
   nbtags_SinglesPtop__69->SetBinContent(2,1494.137);
   nbtags_SinglesPtop__69->SetBinError(1,80.94604);
   nbtags_SinglesPtop__69->SetBinError(2,44.77941);
   nbtags_SinglesPtop__69->SetEntries(5156);
   nbtags_SinglesPtop__69->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop__69->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop__69->SetMarkerColor(ci);
   nbtags_SinglesPtop__69->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_SinglesPtop__69->GetXaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__69->GetXaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__69->GetXaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__69->GetXaxis()->SetTitleFont(42);
   nbtags_SinglesPtop__69->GetYaxis()->SetTitle(" Events");
   nbtags_SinglesPtop__69->GetYaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__69->GetYaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__69->GetYaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__69->GetYaxis()->SetTitleFont(42);
   nbtags_SinglesPtop__69->GetZaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__69->GetZaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__69->GetZaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__69->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nbtags_fx3019[3] = {
   1,
   2,
   0};
   Double_t Graph_from_nbtags_fy3019[3] = {
   83737,
   47383,
   0};
   Double_t Graph_from_nbtags_felx3019[3] = {
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fely3019[3] = {
   289.3735,
   217.6764,
   0};
   Double_t Graph_from_nbtags_fehx3019[3] = {
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fehy3019[3] = {
   289.3735,
   217.6764,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_nbtags_fx3019,Graph_from_nbtags_fy3019,Graph_from_nbtags_felx3019,Graph_from_nbtags_fehx3019,Graph_from_nbtags_fely3019,Graph_from_nbtags_fehy3019);
   grae->SetName("Graph_from_nbtags");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nbtags3019 = new TH1F("Graph_Graph_from_nbtags3019","Data",100,0,2.75);
   Graph_Graph_from_nbtags3019->SetMinimum(0);
   Graph_Graph_from_nbtags3019->SetMaximum(92429.01);
   Graph_Graph_from_nbtags3019->SetDirectory(0);
   Graph_Graph_from_nbtags3019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nbtags3019->SetLineColor(ci);
   Graph_Graph_from_nbtags3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nbtags3019);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nbtags","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nbtags_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nbtags_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nbtags_DY","DY","f");

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
   entry=leg->AddEntry("nbtags_W","W","f");

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
   entry=leg->AddEntry("nbtags_Single top","Single top","f");

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
   p2->Range(0.2108434,0.4485106,2.620482,1.597447);
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
   
   TH1F *ratioframe__70 = new TH1F("ratioframe__70","t#bar{t}",2,0.5,2.5);
   ratioframe__70->SetMinimum(0.46);
   ratioframe__70->SetMaximum(1.54);
   ratioframe__70->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__70->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__70->SetMarkerColor(ci);
   ratioframe__70->GetXaxis()->SetTitle("b-tag multiplicity");
   ratioframe__70->GetXaxis()->SetLabelFont(42);
   ratioframe__70->GetXaxis()->SetLabelSize(0);
   ratioframe__70->GetXaxis()->SetTitleSize(0);
   ratioframe__70->GetXaxis()->SetTitleOffset(0);
   ratioframe__70->GetXaxis()->SetTitleFont(42);
   ratioframe__70->GetYaxis()->SetTitle("Data/MC");
   ratioframe__70->GetYaxis()->SetNoExponent();
   ratioframe__70->GetYaxis()->SetNdivisions(5);
   ratioframe__70->GetYaxis()->SetLabelFont(42);
   ratioframe__70->GetYaxis()->SetLabelSize(0.18);
   ratioframe__70->GetYaxis()->SetTitleSize(0.2);
   ratioframe__70->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__70->GetYaxis()->SetTitleFont(42);
   ratioframe__70->GetZaxis()->SetLabelFont(42);
   ratioframe__70->GetZaxis()->SetLabelSize(0.035);
   ratioframe__70->GetZaxis()->SetTitleSize(0.035);
   ratioframe__70->GetZaxis()->SetTitleFont(42);
   ratioframe__70->Draw("");
   
   Double_t Graph_from_ratio_fx3020[2] = {
   1,
   2};
   Double_t Graph_from_ratio_fy3020[2] = {
   0.9248674,
   0.8752483};
   Double_t Graph_from_ratio_felx3020[2] = {
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3020[2] = {
   0.003879591,
   0.004753785};
   Double_t Graph_from_ratio_fehx3020[2] = {
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3020[2] = {
   0.003879591,
   0.004753785};
   grae = new TGraphAsymmErrors(2,Graph_from_ratio_fx3020,Graph_from_ratio_fy3020,Graph_from_ratio_felx3020,Graph_from_ratio_fehx3020,Graph_from_ratio_fely3020,Graph_from_ratio_fehy3020);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3020 = new TH1F("Graph_Graph_from_ratio3020","Data",100,0.3,2.7);
   Graph_Graph_from_ratio3020->SetMinimum(0.8646693);
   Graph_Graph_from_ratio3020->SetMaximum(0.9345722);
   Graph_Graph_from_ratio3020->SetDirectory(0);
   Graph_Graph_from_ratio3020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3020->SetLineColor(ci);
   Graph_Graph_from_ratio3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3020);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
