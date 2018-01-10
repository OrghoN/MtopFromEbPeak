void nbtags()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 10 16:18:40 2018) by ROOT version6.08/07
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
   p1->Range(0.2108434,-16263.57,2.620482,119267);
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
   
   TH1F *frame__36 = new TH1F("frame__36","t#bar{t}",2,0.5,2.5);
   frame__36->SetMinimum(0.1);
   frame__36->SetMaximum(117911.7);
   frame__36->SetEntries(365945);
   frame__36->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__36->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__36->SetMarkerColor(ci);
   frame__36->GetXaxis()->SetTitle("b-tag multiplicity");
   frame__36->GetXaxis()->SetLabelFont(42);
   frame__36->GetXaxis()->SetLabelSize(0.035);
   frame__36->GetXaxis()->SetTitleSize(0.035);
   frame__36->GetXaxis()->SetTitleFont(42);
   frame__36->GetYaxis()->SetTitle(" Events");
   frame__36->GetYaxis()->SetNoExponent();
   frame__36->GetYaxis()->SetLabelFont(42);
   frame__36->GetYaxis()->SetTitleSize(0.045);
   frame__36->GetYaxis()->SetTitleOffset(1.3);
   frame__36->GetYaxis()->SetTitleFont(42);
   frame__36->GetZaxis()->SetLabelFont(42);
   frame__36->GetZaxis()->SetLabelSize(0.035);
   frame__36->GetZaxis()->SetTitleSize(0.035);
   frame__36->GetZaxis()->SetTitleFont(42);
   frame__36->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_6 = new TH1F("mc_stack_6","mc",2,0.5,2.5);
   mc_stack_6->SetMinimum(0);
   mc_stack_6->SetMaximum(95236.37);
   mc_stack_6->SetDirectory(0);
   mc_stack_6->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_6->SetLineColor(ci);
   mc_stack_6->GetXaxis()->SetLabelFont(42);
   mc_stack_6->GetXaxis()->SetLabelSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleSize(0.035);
   mc_stack_6->GetXaxis()->SetTitleFont(42);
   mc_stack_6->GetYaxis()->SetLabelFont(42);
   mc_stack_6->GetYaxis()->SetLabelSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleSize(0.035);
   mc_stack_6->GetYaxis()->SetTitleFont(42);
   mc_stack_6->GetZaxis()->SetLabelFont(42);
   mc_stack_6->GetZaxis()->SetLabelSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleSize(0.035);
   mc_stack_6->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_6);
   
   
   TH1F *nbtags_t#bar{t}__37 = new TH1F("nbtags_t#bar{t}__37","t#bar{t}",2,0.5,2.5);
   nbtags_t#bar{t}__37->SetBinContent(1,85300.87);
   nbtags_t#bar{t}__37->SetBinContent(2,52800.67);
   nbtags_t#bar{t}__37->SetBinError(1,187.2514);
   nbtags_t#bar{t}__37->SetBinError(2,147.2167);
   nbtags_t#bar{t}__37->SetEntries(360257);
   nbtags_t#bar{t}__37->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}__37->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nbtags_t#bar{t}__37->SetMarkerColor(ci);
   nbtags_t#bar{t}__37->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_t#bar{t}__37->GetXaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__37->GetXaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__37->GetXaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__37->GetXaxis()->SetTitleFont(42);
   nbtags_t#bar{t}__37->GetYaxis()->SetTitle(" Events");
   nbtags_t#bar{t}__37->GetYaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__37->GetYaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__37->GetYaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__37->GetYaxis()->SetTitleFont(42);
   nbtags_t#bar{t}__37->GetZaxis()->SetLabelFont(42);
   nbtags_t#bar{t}__37->GetZaxis()->SetLabelSize(0.035);
   nbtags_t#bar{t}__37->GetZaxis()->SetTitleSize(0.035);
   nbtags_t#bar{t}__37->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_t#bar{t},"hist");
   
   TH1F *nbtags_Diboson__38 = new TH1F("nbtags_Diboson__38","Diboson",2,0.5,2.5);
   nbtags_Diboson__38->SetBinContent(1,171.6413);
   nbtags_Diboson__38->SetBinContent(2,10.50985);
   nbtags_Diboson__38->SetBinError(1,8.188742);
   nbtags_Diboson__38->SetBinError(2,1.991931);
   nbtags_Diboson__38->SetEntries(511);
   nbtags_Diboson__38->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson__38->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nbtags_Diboson__38->SetMarkerColor(ci);
   nbtags_Diboson__38->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_Diboson__38->GetXaxis()->SetLabelFont(42);
   nbtags_Diboson__38->GetXaxis()->SetLabelSize(0.035);
   nbtags_Diboson__38->GetXaxis()->SetTitleSize(0.035);
   nbtags_Diboson__38->GetXaxis()->SetTitleFont(42);
   nbtags_Diboson__38->GetYaxis()->SetTitle(" Events");
   nbtags_Diboson__38->GetYaxis()->SetLabelFont(42);
   nbtags_Diboson__38->GetYaxis()->SetLabelSize(0.035);
   nbtags_Diboson__38->GetYaxis()->SetTitleSize(0.035);
   nbtags_Diboson__38->GetYaxis()->SetTitleFont(42);
   nbtags_Diboson__38->GetZaxis()->SetLabelFont(42);
   nbtags_Diboson__38->GetZaxis()->SetLabelSize(0.035);
   nbtags_Diboson__38->GetZaxis()->SetTitleSize(0.035);
   nbtags_Diboson__38->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Diboson,"hist");
   
   TH1F *nbtags_DY__39 = new TH1F("nbtags_DY__39","DY",2,0.5,2.5);
   nbtags_DY__39->SetBinContent(1,283.7373);
   nbtags_DY__39->SetBinContent(2,55.57008);
   nbtags_DY__39->SetBinError(1,69.35243);
   nbtags_DY__39->SetBinError(2,32.2111);
   nbtags_DY__39->SetEntries(21);
   nbtags_DY__39->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY__39->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nbtags_DY__39->SetMarkerColor(ci);
   nbtags_DY__39->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_DY__39->GetXaxis()->SetLabelFont(42);
   nbtags_DY__39->GetXaxis()->SetLabelSize(0.035);
   nbtags_DY__39->GetXaxis()->SetTitleSize(0.035);
   nbtags_DY__39->GetXaxis()->SetTitleFont(42);
   nbtags_DY__39->GetYaxis()->SetTitle(" Events");
   nbtags_DY__39->GetYaxis()->SetLabelFont(42);
   nbtags_DY__39->GetYaxis()->SetLabelSize(0.035);
   nbtags_DY__39->GetYaxis()->SetTitleSize(0.035);
   nbtags_DY__39->GetYaxis()->SetTitleFont(42);
   nbtags_DY__39->GetZaxis()->SetLabelFont(42);
   nbtags_DY__39->GetZaxis()->SetLabelSize(0.035);
   nbtags_DY__39->GetZaxis()->SetTitleSize(0.035);
   nbtags_DY__39->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_DY,"hist");
   
   TH1F *nbtags_W__40 = new TH1F("nbtags_W__40","W",2,0.5,2.5);
   nbtags_W__40->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nbtags_W__40->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nbtags_W__40->SetMarkerColor(ci);
   nbtags_W__40->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_W__40->GetXaxis()->SetLabelFont(42);
   nbtags_W__40->GetXaxis()->SetLabelSize(0.035);
   nbtags_W__40->GetXaxis()->SetTitleSize(0.035);
   nbtags_W__40->GetXaxis()->SetTitleFont(42);
   nbtags_W__40->GetYaxis()->SetTitle(" Events");
   nbtags_W__40->GetYaxis()->SetLabelFont(42);
   nbtags_W__40->GetYaxis()->SetLabelSize(0.035);
   nbtags_W__40->GetYaxis()->SetTitleSize(0.035);
   nbtags_W__40->GetYaxis()->SetTitleFont(42);
   nbtags_W__40->GetZaxis()->SetLabelFont(42);
   nbtags_W__40->GetZaxis()->SetLabelSize(0.035);
   nbtags_W__40->GetZaxis()->SetTitleSize(0.035);
   nbtags_W__40->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_W,"hist");
   
   TH1F *nbtags_SinglesPtop__41 = new TH1F("nbtags_SinglesPtop__41","Single top",2,0.5,2.5);
   nbtags_SinglesPtop__41->SetBinContent(1,4945.064);
   nbtags_SinglesPtop__41->SetBinContent(2,1493.305);
   nbtags_SinglesPtop__41->SetBinError(1,81.32827);
   nbtags_SinglesPtop__41->SetBinError(2,44.71368);
   nbtags_SinglesPtop__41->SetEntries(5156);
   nbtags_SinglesPtop__41->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop__41->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nbtags_SinglesPtop__41->SetMarkerColor(ci);
   nbtags_SinglesPtop__41->GetXaxis()->SetTitle("b-tag multiplicity");
   nbtags_SinglesPtop__41->GetXaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__41->GetXaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__41->GetXaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__41->GetXaxis()->SetTitleFont(42);
   nbtags_SinglesPtop__41->GetYaxis()->SetTitle(" Events");
   nbtags_SinglesPtop__41->GetYaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__41->GetYaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__41->GetYaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__41->GetYaxis()->SetTitleFont(42);
   nbtags_SinglesPtop__41->GetZaxis()->SetLabelFont(42);
   nbtags_SinglesPtop__41->GetZaxis()->SetLabelSize(0.035);
   nbtags_SinglesPtop__41->GetZaxis()->SetTitleSize(0.035);
   nbtags_SinglesPtop__41->GetZaxis()->SetTitleFont(42);
   mc->Add(nbtags_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nbtags_fx3011[3] = {
   1,
   2,
   0};
   Double_t Graph_from_nbtags_fy3011[3] = {
   83737,
   47383,
   0};
   Double_t Graph_from_nbtags_felx3011[3] = {
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fely3011[3] = {
   289.3735,
   217.6764,
   0};
   Double_t Graph_from_nbtags_fehx3011[3] = {
   0.5,
   0.5,
   0};
   Double_t Graph_from_nbtags_fehy3011[3] = {
   289.3735,
   217.6764,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_nbtags_fx3011,Graph_from_nbtags_fy3011,Graph_from_nbtags_felx3011,Graph_from_nbtags_fehx3011,Graph_from_nbtags_fely3011,Graph_from_nbtags_fehy3011);
   grae->SetName("Graph_from_nbtags");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nbtags3011 = new TH1F("Graph_Graph_from_nbtags3011","Data",100,0,2.75);
   Graph_Graph_from_nbtags3011->SetMinimum(0);
   Graph_Graph_from_nbtags3011->SetMaximum(92429.01);
   Graph_Graph_from_nbtags3011->SetDirectory(0);
   Graph_Graph_from_nbtags3011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nbtags3011->SetLineColor(ci);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nbtags3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nbtags3011);
   
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
   
   TH1F *ratioframe__42 = new TH1F("ratioframe__42","t#bar{t}",2,0.5,2.5);
   ratioframe__42->SetMinimum(0.46);
   ratioframe__42->SetMaximum(1.54);
   ratioframe__42->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__42->SetMarkerColor(ci);
   ratioframe__42->GetXaxis()->SetTitle("b-tag multiplicity");
   ratioframe__42->GetXaxis()->SetLabelFont(42);
   ratioframe__42->GetXaxis()->SetLabelSize(0);
   ratioframe__42->GetXaxis()->SetTitleSize(0);
   ratioframe__42->GetXaxis()->SetTitleOffset(0);
   ratioframe__42->GetXaxis()->SetTitleFont(42);
   ratioframe__42->GetYaxis()->SetTitle("Data/MC");
   ratioframe__42->GetYaxis()->SetNoExponent();
   ratioframe__42->GetYaxis()->SetNdivisions(5);
   ratioframe__42->GetYaxis()->SetLabelFont(42);
   ratioframe__42->GetYaxis()->SetLabelSize(0.18);
   ratioframe__42->GetYaxis()->SetTitleSize(0.2);
   ratioframe__42->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__42->GetYaxis()->SetTitleFont(42);
   ratioframe__42->GetZaxis()->SetLabelFont(42);
   ratioframe__42->GetZaxis()->SetLabelSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleSize(0.035);
   ratioframe__42->GetZaxis()->SetTitleFont(42);
   ratioframe__42->Draw("");
   
   Double_t Graph_from_ratio_fx3012[2] = {
   1,
   2};
   Double_t Graph_from_ratio_fy3012[2] = {
   0.9232172,
   0.8716511};
   Double_t Graph_from_ratio_felx3012[2] = {
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3012[2] = {
   0.003873229,
   0.004731699};
   Double_t Graph_from_ratio_fehx3012[2] = {
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3012[2] = {
   0.003873229,
   0.004731699};
   grae = new TGraphAsymmErrors(2,Graph_from_ratio_fx3012,Graph_from_ratio_fy3012,Graph_from_ratio_felx3012,Graph_from_ratio_fehx3012,Graph_from_ratio_fely3012,Graph_from_ratio_fehy3012);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3012 = new TH1F("Graph_Graph_from_ratio3012","Data",100,0.3,2.7);
   Graph_Graph_from_ratio3012->SetMinimum(0.8609022);
   Graph_Graph_from_ratio3012->SetMaximum(0.9331075);
   Graph_Graph_from_ratio3012->SetDirectory(0);
   Graph_Graph_from_ratio3012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3012->SetLineColor(ci);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3012);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
