void nleptons()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 15:17:13 2018) by ROOT version6.08/07
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
   p1->Range(-0.5783133,-26848.14,4.240964,196887.2);
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
   
   TH1F *frame__29 = new TH1F("frame__29","t#bar{t}",10,0,4);
   frame__29->SetMinimum(0.1);
   frame__29->SetMaximum(194649.8);
   frame__29->SetEntries(45339);
   frame__29->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__29->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__29->SetMarkerColor(ci);
   frame__29->GetXaxis()->SetTitle("Number of leptons");
   frame__29->GetXaxis()->SetLabelFont(42);
   frame__29->GetXaxis()->SetLabelSize(0.035);
   frame__29->GetXaxis()->SetTitleSize(0.035);
   frame__29->GetXaxis()->SetTitleFont(42);
   frame__29->GetYaxis()->SetTitle(" Events");
   frame__29->GetYaxis()->SetNoExponent();
   frame__29->GetYaxis()->SetLabelFont(42);
   frame__29->GetYaxis()->SetTitleSize(0.045);
   frame__29->GetYaxis()->SetTitleOffset(1.3);
   frame__29->GetYaxis()->SetTitleFont(42);
   frame__29->GetZaxis()->SetLabelFont(42);
   frame__29->GetZaxis()->SetLabelSize(0.035);
   frame__29->GetZaxis()->SetTitleSize(0.035);
   frame__29->GetZaxis()->SetTitleFont(42);
   frame__29->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_5 = new TH1F("mc_stack_5","mc",10,0,4);
   mc_stack_5->SetMinimum(0);
   mc_stack_5->SetMaximum(157217.2);
   mc_stack_5->SetDirectory(0);
   mc_stack_5->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_5->SetLineColor(ci);
   mc_stack_5->GetXaxis()->SetLabelFont(42);
   mc_stack_5->GetXaxis()->SetLabelSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleSize(0.035);
   mc_stack_5->GetXaxis()->SetTitleFont(42);
   mc_stack_5->GetYaxis()->SetLabelFont(42);
   mc_stack_5->GetYaxis()->SetLabelSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleSize(0.035);
   mc_stack_5->GetYaxis()->SetTitleFont(42);
   mc_stack_5->GetZaxis()->SetLabelFont(42);
   mc_stack_5->GetZaxis()->SetLabelSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleSize(0.035);
   mc_stack_5->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_5);
   
   
   TH1F *nleptons_t#bar{t}__30 = new TH1F("nleptons_t#bar{t}__30","t#bar{t}",10,0,4);
   nleptons_t#bar{t}__30->SetBinContent(6,142820.9);
   nleptons_t#bar{t}__30->SetBinError(6,743.1057);
   nleptons_t#bar{t}__30->SetEntries(39651);
   nleptons_t#bar{t}__30->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}__30->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}__30->SetMarkerColor(ci);
   nleptons_t#bar{t}__30->GetXaxis()->SetTitle("Number of leptons");
   nleptons_t#bar{t}__30->GetXaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__30->GetXaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__30->GetXaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__30->GetXaxis()->SetTitleFont(42);
   nleptons_t#bar{t}__30->GetYaxis()->SetTitle(" Events");
   nleptons_t#bar{t}__30->GetYaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__30->GetYaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__30->GetYaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__30->GetYaxis()->SetTitleFont(42);
   nleptons_t#bar{t}__30->GetZaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__30->GetZaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__30->GetZaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__30->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_t#bar{t},"hist");
   
   TH1F *nleptons_Diboson__31 = new TH1F("nleptons_Diboson__31","Diboson",10,0,4);
   nleptons_Diboson__31->SetBinContent(6,181.1088);
   nleptons_Diboson__31->SetBinError(6,8.38248);
   nleptons_Diboson__31->SetEntries(511);
   nleptons_Diboson__31->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson__31->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson__31->SetMarkerColor(ci);
   nleptons_Diboson__31->GetXaxis()->SetTitle("Number of leptons");
   nleptons_Diboson__31->GetXaxis()->SetLabelFont(42);
   nleptons_Diboson__31->GetXaxis()->SetLabelSize(0.035);
   nleptons_Diboson__31->GetXaxis()->SetTitleSize(0.035);
   nleptons_Diboson__31->GetXaxis()->SetTitleFont(42);
   nleptons_Diboson__31->GetYaxis()->SetTitle(" Events");
   nleptons_Diboson__31->GetYaxis()->SetLabelFont(42);
   nleptons_Diboson__31->GetYaxis()->SetLabelSize(0.035);
   nleptons_Diboson__31->GetYaxis()->SetTitleSize(0.035);
   nleptons_Diboson__31->GetYaxis()->SetTitleFont(42);
   nleptons_Diboson__31->GetZaxis()->SetLabelFont(42);
   nleptons_Diboson__31->GetZaxis()->SetLabelSize(0.035);
   nleptons_Diboson__31->GetZaxis()->SetTitleSize(0.035);
   nleptons_Diboson__31->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Diboson,"hist");
   
   TH1F *nleptons_DY__32 = new TH1F("nleptons_DY__32","DY",10,0,4);
   nleptons_DY__32->SetBinContent(6,331.7063);
   nleptons_DY__32->SetBinError(6,75.73561);
   nleptons_DY__32->SetEntries(21);
   nleptons_DY__32->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY__32->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY__32->SetMarkerColor(ci);
   nleptons_DY__32->GetXaxis()->SetTitle("Number of leptons");
   nleptons_DY__32->GetXaxis()->SetLabelFont(42);
   nleptons_DY__32->GetXaxis()->SetLabelSize(0.035);
   nleptons_DY__32->GetXaxis()->SetTitleSize(0.035);
   nleptons_DY__32->GetXaxis()->SetTitleFont(42);
   nleptons_DY__32->GetYaxis()->SetTitle(" Events");
   nleptons_DY__32->GetYaxis()->SetLabelFont(42);
   nleptons_DY__32->GetYaxis()->SetLabelSize(0.035);
   nleptons_DY__32->GetYaxis()->SetTitleSize(0.035);
   nleptons_DY__32->GetYaxis()->SetTitleFont(42);
   nleptons_DY__32->GetZaxis()->SetLabelFont(42);
   nleptons_DY__32->GetZaxis()->SetLabelSize(0.035);
   nleptons_DY__32->GetZaxis()->SetTitleSize(0.035);
   nleptons_DY__32->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_DY,"hist");
   
   TH1F *nleptons_W__33 = new TH1F("nleptons_W__33","W",10,0,4);
   nleptons_W__33->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nleptons_W__33->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nleptons_W__33->SetMarkerColor(ci);
   nleptons_W__33->GetXaxis()->SetTitle("Number of leptons");
   nleptons_W__33->GetXaxis()->SetLabelFont(42);
   nleptons_W__33->GetXaxis()->SetLabelSize(0.035);
   nleptons_W__33->GetXaxis()->SetTitleSize(0.035);
   nleptons_W__33->GetXaxis()->SetTitleFont(42);
   nleptons_W__33->GetYaxis()->SetTitle(" Events");
   nleptons_W__33->GetYaxis()->SetLabelFont(42);
   nleptons_W__33->GetYaxis()->SetLabelSize(0.035);
   nleptons_W__33->GetYaxis()->SetTitleSize(0.035);
   nleptons_W__33->GetYaxis()->SetTitleFont(42);
   nleptons_W__33->GetZaxis()->SetLabelFont(42);
   nleptons_W__33->GetZaxis()->SetLabelSize(0.035);
   nleptons_W__33->GetZaxis()->SetTitleSize(0.035);
   nleptons_W__33->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_W,"hist");
   
   TH1F *nleptons_SinglesPtop__34 = new TH1F("nleptons_SinglesPtop__34","Single top",10,0,4);
   nleptons_SinglesPtop__34->SetBinContent(6,6396.946);
   nleptons_SinglesPtop__34->SetBinError(6,92.50653);
   nleptons_SinglesPtop__34->SetEntries(5156);
   nleptons_SinglesPtop__34->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop__34->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop__34->SetMarkerColor(ci);
   nleptons_SinglesPtop__34->GetXaxis()->SetTitle("Number of leptons");
   nleptons_SinglesPtop__34->GetXaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__34->GetXaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__34->GetXaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__34->GetXaxis()->SetTitleFont(42);
   nleptons_SinglesPtop__34->GetYaxis()->SetTitle(" Events");
   nleptons_SinglesPtop__34->GetYaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__34->GetYaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__34->GetYaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__34->GetYaxis()->SetTitleFont(42);
   nleptons_SinglesPtop__34->GetZaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__34->GetZaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__34->GetZaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__34->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nleptons_fx3009[11] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   0};
   Double_t Graph_from_nleptons_fy3009[11] = {
   0,
   0,
   0,
   0,
   0,
   131120,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nleptons_felx3009[11] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0};
   Double_t Graph_from_nleptons_fely3009[11] = {
   0,
   0,
   0,
   0,
   0,
   362.105,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_nleptons_fehx3009[11] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0};
   Double_t Graph_from_nleptons_fehy3009[11] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   362.105,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_from_nleptons_fx3009,Graph_from_nleptons_fy3009,Graph_from_nleptons_felx3009,Graph_from_nleptons_fehx3009,Graph_from_nleptons_fely3009,Graph_from_nleptons_fehy3009);
   grae->SetName("Graph_from_nleptons");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nleptons3009 = new TH1F("Graph_Graph_from_nleptons3009","Data",100,0,4.4);
   Graph_Graph_from_nleptons3009->SetMinimum(0);
   Graph_Graph_from_nleptons3009->SetMaximum(144630.3);
   Graph_Graph_from_nleptons3009->SetDirectory(0);
   Graph_Graph_from_nleptons3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nleptons3009->SetLineColor(ci);
   Graph_Graph_from_nleptons3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nleptons3009);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nleptons","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nleptons_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nleptons_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nleptons_DY","DY","f");

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
   entry=leg->AddEntry("nleptons_W","W","f");

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
   entry=leg->AddEntry("nleptons_Single top","Single top","f");

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
   p2->Range(-0.5783133,0.4485106,4.240964,1.597447);
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
   
   TH1F *ratioframe__35 = new TH1F("ratioframe__35","t#bar{t}",10,0,4);
   ratioframe__35->SetMinimum(0.46);
   ratioframe__35->SetMaximum(1.54);
   ratioframe__35->SetEntries(45339);

   ci = TColor::GetColor("#cc0000");
   ratioframe__35->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__35->SetMarkerColor(ci);
   ratioframe__35->GetXaxis()->SetTitle("Number of leptons");
   ratioframe__35->GetXaxis()->SetLabelFont(42);
   ratioframe__35->GetXaxis()->SetLabelSize(0);
   ratioframe__35->GetXaxis()->SetTitleSize(0);
   ratioframe__35->GetXaxis()->SetTitleOffset(0);
   ratioframe__35->GetXaxis()->SetTitleFont(42);
   ratioframe__35->GetYaxis()->SetTitle("Data/MC");
   ratioframe__35->GetYaxis()->SetNoExponent();
   ratioframe__35->GetYaxis()->SetNdivisions(5);
   ratioframe__35->GetYaxis()->SetLabelFont(42);
   ratioframe__35->GetYaxis()->SetLabelSize(0.18);
   ratioframe__35->GetYaxis()->SetTitleSize(0.2);
   ratioframe__35->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__35->GetYaxis()->SetTitleFont(42);
   ratioframe__35->GetZaxis()->SetLabelFont(42);
   ratioframe__35->GetZaxis()->SetLabelSize(0.035);
   ratioframe__35->GetZaxis()->SetTitleSize(0.035);
   ratioframe__35->GetZaxis()->SetTitleFont(42);
   ratioframe__35->Draw("");
   
   Double_t Graph_from_ratio_fx3010[10] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8};
   Double_t Graph_from_ratio_fy3010[10] = {
   0,
   0,
   0,
   0,
   0,
   0.8757058,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3010[10] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_ratio_fely3010[10] = {
   0,
   0,
   0,
   0,
   0,
   0.005022779,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3010[10] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_ratio_fehy3010[10] = {
   0,
   0,
   0,
   0,
   0,
   0.005022779,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(10,Graph_from_ratio_fx3010,Graph_from_ratio_fy3010,Graph_from_ratio_felx3010,Graph_from_ratio_fehx3010,Graph_from_ratio_fely3010,Graph_from_ratio_fehy3010);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3010 = new TH1F("Graph_Graph_from_ratio3010","Data",100,0,4.4);
   Graph_Graph_from_ratio3010->SetMinimum(0);
   Graph_Graph_from_ratio3010->SetMaximum(0.9688015);
   Graph_Graph_from_ratio3010->SetDirectory(0);
   Graph_Graph_from_ratio3010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3010->SetLineColor(ci);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3010);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
