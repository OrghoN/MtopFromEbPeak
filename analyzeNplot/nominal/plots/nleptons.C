void nleptons()
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
   p1->Range(-0.5783133,-26010.87,4.240964,190747.2);
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
   
   TH1F *frame__120 = new TH1F("frame__120","t#bar{t}",10,0,4);
   frame__120->SetMinimum(0.1);
   frame__120->SetMaximum(188579.6);
   frame__120->SetEntries(365945);
   frame__120->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__120->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__120->SetMarkerColor(ci);
   frame__120->GetXaxis()->SetTitle("Number of leptons");
   frame__120->GetXaxis()->SetLabelFont(42);
   frame__120->GetXaxis()->SetLabelSize(0.035);
   frame__120->GetXaxis()->SetTitleSize(0.035);
   frame__120->GetXaxis()->SetTitleFont(42);
   frame__120->GetYaxis()->SetTitle(" Events");
   frame__120->GetYaxis()->SetNoExponent();
   frame__120->GetYaxis()->SetLabelFont(42);
   frame__120->GetYaxis()->SetTitleSize(0.045);
   frame__120->GetYaxis()->SetTitleOffset(1.3);
   frame__120->GetYaxis()->SetTitleFont(42);
   frame__120->GetZaxis()->SetLabelFont(42);
   frame__120->GetZaxis()->SetLabelSize(0.035);
   frame__120->GetZaxis()->SetTitleSize(0.035);
   frame__120->GetZaxis()->SetTitleFont(42);
   frame__120->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_18 = new TH1F("mc_stack_18","mc",10,0,4);
   mc_stack_18->SetMinimum(0);
   mc_stack_18->SetMaximum(152314.3);
   mc_stack_18->SetDirectory(0);
   mc_stack_18->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_18->SetLineColor(ci);
   mc_stack_18->GetXaxis()->SetLabelFont(42);
   mc_stack_18->GetXaxis()->SetLabelSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleSize(0.035);
   mc_stack_18->GetXaxis()->SetTitleFont(42);
   mc_stack_18->GetYaxis()->SetLabelFont(42);
   mc_stack_18->GetYaxis()->SetLabelSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleSize(0.035);
   mc_stack_18->GetYaxis()->SetTitleFont(42);
   mc_stack_18->GetZaxis()->SetLabelFont(42);
   mc_stack_18->GetZaxis()->SetLabelSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleSize(0.035);
   mc_stack_18->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_18);
   
   
   TH1F *nleptons_t#bar{t}__121 = new TH1F("nleptons_t#bar{t}__121","t#bar{t}",10,0,4);
   nleptons_t#bar{t}__121->SetBinContent(6,138101.4);
   nleptons_t#bar{t}__121->SetBinError(6,238.1928);
   nleptons_t#bar{t}__121->SetEntries(360257);
   nleptons_t#bar{t}__121->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}__121->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nleptons_t#bar{t}__121->SetMarkerColor(ci);
   nleptons_t#bar{t}__121->GetXaxis()->SetTitle("Number of leptons");
   nleptons_t#bar{t}__121->GetXaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__121->GetXaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__121->GetXaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__121->GetXaxis()->SetTitleFont(42);
   nleptons_t#bar{t}__121->GetYaxis()->SetTitle(" Events");
   nleptons_t#bar{t}__121->GetYaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__121->GetYaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__121->GetYaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__121->GetYaxis()->SetTitleFont(42);
   nleptons_t#bar{t}__121->GetZaxis()->SetLabelFont(42);
   nleptons_t#bar{t}__121->GetZaxis()->SetLabelSize(0.035);
   nleptons_t#bar{t}__121->GetZaxis()->SetTitleSize(0.035);
   nleptons_t#bar{t}__121->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_t#bar{t},"hist");
   
   TH1F *nleptons_Diboson__122 = new TH1F("nleptons_Diboson__122","Diboson",10,0,4);
   nleptons_Diboson__122->SetBinContent(6,182.1511);
   nleptons_Diboson__122->SetBinError(6,8.427531);
   nleptons_Diboson__122->SetEntries(511);
   nleptons_Diboson__122->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson__122->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nleptons_Diboson__122->SetMarkerColor(ci);
   nleptons_Diboson__122->GetXaxis()->SetTitle("Number of leptons");
   nleptons_Diboson__122->GetXaxis()->SetLabelFont(42);
   nleptons_Diboson__122->GetXaxis()->SetLabelSize(0.035);
   nleptons_Diboson__122->GetXaxis()->SetTitleSize(0.035);
   nleptons_Diboson__122->GetXaxis()->SetTitleFont(42);
   nleptons_Diboson__122->GetYaxis()->SetTitle(" Events");
   nleptons_Diboson__122->GetYaxis()->SetLabelFont(42);
   nleptons_Diboson__122->GetYaxis()->SetLabelSize(0.035);
   nleptons_Diboson__122->GetYaxis()->SetTitleSize(0.035);
   nleptons_Diboson__122->GetYaxis()->SetTitleFont(42);
   nleptons_Diboson__122->GetZaxis()->SetLabelFont(42);
   nleptons_Diboson__122->GetZaxis()->SetLabelSize(0.035);
   nleptons_Diboson__122->GetZaxis()->SetTitleSize(0.035);
   nleptons_Diboson__122->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Diboson,"hist");
   
   TH1F *nleptons_DY__123 = new TH1F("nleptons_DY__123","DY",10,0,4);
   nleptons_DY__123->SetBinContent(6,339.3073);
   nleptons_DY__123->SetBinError(6,76.46774);
   nleptons_DY__123->SetEntries(21);
   nleptons_DY__123->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY__123->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nleptons_DY__123->SetMarkerColor(ci);
   nleptons_DY__123->GetXaxis()->SetTitle("Number of leptons");
   nleptons_DY__123->GetXaxis()->SetLabelFont(42);
   nleptons_DY__123->GetXaxis()->SetLabelSize(0.035);
   nleptons_DY__123->GetXaxis()->SetTitleSize(0.035);
   nleptons_DY__123->GetXaxis()->SetTitleFont(42);
   nleptons_DY__123->GetYaxis()->SetTitle(" Events");
   nleptons_DY__123->GetYaxis()->SetLabelFont(42);
   nleptons_DY__123->GetYaxis()->SetLabelSize(0.035);
   nleptons_DY__123->GetYaxis()->SetTitleSize(0.035);
   nleptons_DY__123->GetYaxis()->SetTitleFont(42);
   nleptons_DY__123->GetZaxis()->SetLabelFont(42);
   nleptons_DY__123->GetZaxis()->SetLabelSize(0.035);
   nleptons_DY__123->GetZaxis()->SetTitleSize(0.035);
   nleptons_DY__123->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_DY,"hist");
   
   TH1F *nleptons_W__124 = new TH1F("nleptons_W__124","W",10,0,4);
   nleptons_W__124->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nleptons_W__124->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nleptons_W__124->SetMarkerColor(ci);
   nleptons_W__124->GetXaxis()->SetTitle("Number of leptons");
   nleptons_W__124->GetXaxis()->SetLabelFont(42);
   nleptons_W__124->GetXaxis()->SetLabelSize(0.035);
   nleptons_W__124->GetXaxis()->SetTitleSize(0.035);
   nleptons_W__124->GetXaxis()->SetTitleFont(42);
   nleptons_W__124->GetYaxis()->SetTitle(" Events");
   nleptons_W__124->GetYaxis()->SetLabelFont(42);
   nleptons_W__124->GetYaxis()->SetLabelSize(0.035);
   nleptons_W__124->GetYaxis()->SetTitleSize(0.035);
   nleptons_W__124->GetYaxis()->SetTitleFont(42);
   nleptons_W__124->GetZaxis()->SetLabelFont(42);
   nleptons_W__124->GetZaxis()->SetLabelSize(0.035);
   nleptons_W__124->GetZaxis()->SetTitleSize(0.035);
   nleptons_W__124->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_W,"hist");
   
   TH1F *nleptons_SinglesPtop__125 = new TH1F("nleptons_SinglesPtop__125","Single top",10,0,4);
   nleptons_SinglesPtop__125->SetBinContent(6,6438.368);
   nleptons_SinglesPtop__125->SetBinError(6,92.80948);
   nleptons_SinglesPtop__125->SetEntries(5156);
   nleptons_SinglesPtop__125->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop__125->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nleptons_SinglesPtop__125->SetMarkerColor(ci);
   nleptons_SinglesPtop__125->GetXaxis()->SetTitle("Number of leptons");
   nleptons_SinglesPtop__125->GetXaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__125->GetXaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__125->GetXaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__125->GetXaxis()->SetTitleFont(42);
   nleptons_SinglesPtop__125->GetYaxis()->SetTitle(" Events");
   nleptons_SinglesPtop__125->GetYaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__125->GetYaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__125->GetYaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__125->GetYaxis()->SetTitleFont(42);
   nleptons_SinglesPtop__125->GetZaxis()->SetLabelFont(42);
   nleptons_SinglesPtop__125->GetZaxis()->SetLabelSize(0.035);
   nleptons_SinglesPtop__125->GetZaxis()->SetTitleSize(0.035);
   nleptons_SinglesPtop__125->GetZaxis()->SetTitleFont(42);
   mc->Add(nleptons_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nleptons_fx3035[11] = {
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
   Double_t Graph_from_nleptons_fy3035[11] = {
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
   Double_t Graph_from_nleptons_felx3035[11] = {
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
   Double_t Graph_from_nleptons_fely3035[11] = {
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
   Double_t Graph_from_nleptons_fehx3035[11] = {
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
   Double_t Graph_from_nleptons_fehy3035[11] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,Graph_from_nleptons_fx3035,Graph_from_nleptons_fy3035,Graph_from_nleptons_felx3035,Graph_from_nleptons_fehx3035,Graph_from_nleptons_fely3035,Graph_from_nleptons_fehy3035);
   grae->SetName("Graph_from_nleptons");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nleptons3035 = new TH1F("Graph_Graph_from_nleptons3035","Data",100,0,4.4);
   Graph_Graph_from_nleptons3035->SetMinimum(0);
   Graph_Graph_from_nleptons3035->SetMaximum(144630.3);
   Graph_Graph_from_nleptons3035->SetDirectory(0);
   Graph_Graph_from_nleptons3035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nleptons3035->SetLineColor(ci);
   Graph_Graph_from_nleptons3035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nleptons3035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nleptons3035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nleptons3035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nleptons3035->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nleptons3035);
   
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
   
   TH1F *ratioframe__126 = new TH1F("ratioframe__126","t#bar{t}",10,0,4);
   ratioframe__126->SetMinimum(0.46);
   ratioframe__126->SetMaximum(1.54);
   ratioframe__126->SetEntries(365945);

   ci = TColor::GetColor("#cc0000");
   ratioframe__126->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__126->SetMarkerColor(ci);
   ratioframe__126->GetXaxis()->SetTitle("Number of leptons");
   ratioframe__126->GetXaxis()->SetLabelFont(42);
   ratioframe__126->GetXaxis()->SetLabelSize(0);
   ratioframe__126->GetXaxis()->SetTitleSize(0);
   ratioframe__126->GetXaxis()->SetTitleOffset(0);
   ratioframe__126->GetXaxis()->SetTitleFont(42);
   ratioframe__126->GetYaxis()->SetTitle("Data/MC");
   ratioframe__126->GetYaxis()->SetNoExponent();
   ratioframe__126->GetYaxis()->SetNdivisions(5);
   ratioframe__126->GetYaxis()->SetLabelFont(42);
   ratioframe__126->GetYaxis()->SetLabelSize(0.18);
   ratioframe__126->GetYaxis()->SetTitleSize(0.2);
   ratioframe__126->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__126->GetYaxis()->SetTitleFont(42);
   ratioframe__126->GetZaxis()->SetLabelFont(42);
   ratioframe__126->GetZaxis()->SetLabelSize(0.035);
   ratioframe__126->GetZaxis()->SetTitleSize(0.035);
   ratioframe__126->GetZaxis()->SetTitleFont(42);
   ratioframe__126->Draw("");
   
   Double_t Graph_from_ratio_fx3036[10] = {
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
   Double_t Graph_from_ratio_fy3036[10] = {
   0,
   0,
   0,
   0,
   0,
   0.9038941,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3036[10] = {
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
   Double_t Graph_from_ratio_fely3036[10] = {
   0,
   0,
   0,
   0,
   0,
   0.002999704,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3036[10] = {
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
   Double_t Graph_from_ratio_fehy3036[10] = {
   0,
   0,
   0,
   0,
   0,
   0.002999704,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(10,Graph_from_ratio_fx3036,Graph_from_ratio_fy3036,Graph_from_ratio_felx3036,Graph_from_ratio_fehx3036,Graph_from_ratio_fely3036,Graph_from_ratio_fehy3036);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3036 = new TH1F("Graph_Graph_from_ratio3036","Data",100,0,4.4);
   Graph_Graph_from_ratio3036->SetMinimum(0);
   Graph_Graph_from_ratio3036->SetMaximum(0.9975832);
   Graph_Graph_from_ratio3036->SetDirectory(0);
   Graph_Graph_from_ratio3036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3036->SetLineColor(ci);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3036->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3036);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
