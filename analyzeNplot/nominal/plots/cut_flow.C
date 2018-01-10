void cut_flow()
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
   
   TH1F *frame__85 = new TH1F("frame__85","t#bar{t}",5,0,1);
   frame__85->SetMinimum(0.1);
   frame__85->SetMaximum(0);
   frame__85->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__85->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__85->SetMarkerColor(ci);
   frame__85->GetXaxis()->SetTitle("mass [GeV]");
   frame__85->GetXaxis()->SetLabelFont(42);
   frame__85->GetXaxis()->SetLabelSize(0.035);
   frame__85->GetXaxis()->SetTitleSize(0.035);
   frame__85->GetXaxis()->SetTitleFont(42);
   frame__85->GetYaxis()->SetTitle(" Events");
   frame__85->GetYaxis()->SetNoExponent();
   frame__85->GetYaxis()->SetLabelFont(42);
   frame__85->GetYaxis()->SetTitleSize(0.045);
   frame__85->GetYaxis()->SetTitleOffset(1.3);
   frame__85->GetYaxis()->SetTitleFont(42);
   frame__85->GetZaxis()->SetLabelFont(42);
   frame__85->GetZaxis()->SetLabelSize(0.035);
   frame__85->GetZaxis()->SetTitleSize(0.035);
   frame__85->GetZaxis()->SetTitleFont(42);
   frame__85->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_13 = new TH1F("mc_stack_13","mc",5,0,1);
   mc_stack_13->SetMinimum(0);
   mc_stack_13->SetMaximum(0);
   mc_stack_13->SetDirectory(0);
   mc_stack_13->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_13->SetLineColor(ci);
   mc_stack_13->GetXaxis()->SetLabelFont(42);
   mc_stack_13->GetXaxis()->SetLabelSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleFont(42);
   mc_stack_13->GetYaxis()->SetLabelFont(42);
   mc_stack_13->GetYaxis()->SetLabelSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleFont(42);
   mc_stack_13->GetZaxis()->SetLabelFont(42);
   mc_stack_13->GetZaxis()->SetLabelSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_13);
   
   
   TH1F *cut_flow_t#bar{t}__86 = new TH1F("cut_flow_t#bar{t}__86","t#bar{t}",5,0,1);
   cut_flow_t#bar{t}__86->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__86->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   cut_flow_t#bar{t}__86->SetMarkerColor(ci);
   cut_flow_t#bar{t}__86->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_t#bar{t}__86->GetXaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__86->GetXaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__86->GetXaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__86->GetXaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__86->GetYaxis()->SetTitle(" Events");
   cut_flow_t#bar{t}__86->GetYaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__86->GetYaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__86->GetYaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__86->GetYaxis()->SetTitleFont(42);
   cut_flow_t#bar{t}__86->GetZaxis()->SetLabelFont(42);
   cut_flow_t#bar{t}__86->GetZaxis()->SetLabelSize(0.035);
   cut_flow_t#bar{t}__86->GetZaxis()->SetTitleSize(0.035);
   cut_flow_t#bar{t}__86->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_t#bar{t},"hist");
   
   TH1F *cut_flow_Diboson__87 = new TH1F("cut_flow_Diboson__87","Diboson",5,0,1);
   cut_flow_Diboson__87->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__87->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   cut_flow_Diboson__87->SetMarkerColor(ci);
   cut_flow_Diboson__87->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_Diboson__87->GetXaxis()->SetLabelFont(42);
   cut_flow_Diboson__87->GetXaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__87->GetXaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__87->GetXaxis()->SetTitleFont(42);
   cut_flow_Diboson__87->GetYaxis()->SetTitle(" Events");
   cut_flow_Diboson__87->GetYaxis()->SetLabelFont(42);
   cut_flow_Diboson__87->GetYaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__87->GetYaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__87->GetYaxis()->SetTitleFont(42);
   cut_flow_Diboson__87->GetZaxis()->SetLabelFont(42);
   cut_flow_Diboson__87->GetZaxis()->SetLabelSize(0.035);
   cut_flow_Diboson__87->GetZaxis()->SetTitleSize(0.035);
   cut_flow_Diboson__87->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Diboson,"hist");
   
   TH1F *cut_flow_DY__88 = new TH1F("cut_flow_DY__88","DY",5,0,1);
   cut_flow_DY__88->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__88->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   cut_flow_DY__88->SetMarkerColor(ci);
   cut_flow_DY__88->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_DY__88->GetXaxis()->SetLabelFont(42);
   cut_flow_DY__88->GetXaxis()->SetLabelSize(0.035);
   cut_flow_DY__88->GetXaxis()->SetTitleSize(0.035);
   cut_flow_DY__88->GetXaxis()->SetTitleFont(42);
   cut_flow_DY__88->GetYaxis()->SetTitle(" Events");
   cut_flow_DY__88->GetYaxis()->SetLabelFont(42);
   cut_flow_DY__88->GetYaxis()->SetLabelSize(0.035);
   cut_flow_DY__88->GetYaxis()->SetTitleSize(0.035);
   cut_flow_DY__88->GetYaxis()->SetTitleFont(42);
   cut_flow_DY__88->GetZaxis()->SetLabelFont(42);
   cut_flow_DY__88->GetZaxis()->SetLabelSize(0.035);
   cut_flow_DY__88->GetZaxis()->SetTitleSize(0.035);
   cut_flow_DY__88->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_DY,"hist");
   
   TH1F *cut_flow_W__89 = new TH1F("cut_flow_W__89","W",5,0,1);
   cut_flow_W__89->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__89->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   cut_flow_W__89->SetMarkerColor(ci);
   cut_flow_W__89->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_W__89->GetXaxis()->SetLabelFont(42);
   cut_flow_W__89->GetXaxis()->SetLabelSize(0.035);
   cut_flow_W__89->GetXaxis()->SetTitleSize(0.035);
   cut_flow_W__89->GetXaxis()->SetTitleFont(42);
   cut_flow_W__89->GetYaxis()->SetTitle(" Events");
   cut_flow_W__89->GetYaxis()->SetLabelFont(42);
   cut_flow_W__89->GetYaxis()->SetLabelSize(0.035);
   cut_flow_W__89->GetYaxis()->SetTitleSize(0.035);
   cut_flow_W__89->GetYaxis()->SetTitleFont(42);
   cut_flow_W__89->GetZaxis()->SetLabelFont(42);
   cut_flow_W__89->GetZaxis()->SetLabelSize(0.035);
   cut_flow_W__89->GetZaxis()->SetTitleSize(0.035);
   cut_flow_W__89->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_W,"hist");
   
   TH1F *cut_flow_SinglesPtop__90 = new TH1F("cut_flow_SinglesPtop__90","Single top",5,0,1);
   cut_flow_SinglesPtop__90->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__90->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   cut_flow_SinglesPtop__90->SetMarkerColor(ci);
   cut_flow_SinglesPtop__90->GetXaxis()->SetTitle("mass [GeV]");
   cut_flow_SinglesPtop__90->GetXaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__90->GetXaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__90->GetXaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__90->GetXaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__90->GetYaxis()->SetTitle(" Events");
   cut_flow_SinglesPtop__90->GetYaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__90->GetYaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__90->GetYaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__90->GetYaxis()->SetTitleFont(42);
   cut_flow_SinglesPtop__90->GetZaxis()->SetLabelFont(42);
   cut_flow_SinglesPtop__90->GetZaxis()->SetLabelSize(0.035);
   cut_flow_SinglesPtop__90->GetZaxis()->SetTitleSize(0.035);
   cut_flow_SinglesPtop__90->GetZaxis()->SetTitleFont(42);
   mc->Add(cut_flow_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_cut_flow_fx3025[6] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   0};
   Double_t Graph_from_cut_flow_fy3025[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_cut_flow_felx3025[6] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_cut_flow_fely3025[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_cut_flow_fehx3025[6] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_cut_flow_fehy3025[6] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_cut_flow_fx3025,Graph_from_cut_flow_fy3025,Graph_from_cut_flow_felx3025,Graph_from_cut_flow_fehx3025,Graph_from_cut_flow_fely3025,Graph_from_cut_flow_fehy3025);
   grae->SetName("Graph_from_cut_flow");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_cut_flow3025 = new TH1F("Graph_Graph_from_cut_flow3025","Data",100,0,1.1);
   Graph_Graph_from_cut_flow3025->SetMinimum(0);
   Graph_Graph_from_cut_flow3025->SetMaximum(2.02516);
   Graph_Graph_from_cut_flow3025->SetDirectory(0);
   Graph_Graph_from_cut_flow3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_cut_flow3025->SetLineColor(ci);
   Graph_Graph_from_cut_flow3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_cut_flow3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_cut_flow3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_cut_flow3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_cut_flow3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_cut_flow3025);
   
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
   
   TH1F *ratioframe__91 = new TH1F("ratioframe__91","t#bar{t}",5,0,1);
   ratioframe__91->SetMinimum(0.46);
   ratioframe__91->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetMarkerColor(ci);
   ratioframe__91->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__91->GetXaxis()->SetLabelFont(42);
   ratioframe__91->GetXaxis()->SetLabelSize(0);
   ratioframe__91->GetXaxis()->SetTitleSize(0);
   ratioframe__91->GetXaxis()->SetTitleOffset(0);
   ratioframe__91->GetXaxis()->SetTitleFont(42);
   ratioframe__91->GetYaxis()->SetTitle("Data/MC");
   ratioframe__91->GetYaxis()->SetNoExponent();
   ratioframe__91->GetYaxis()->SetNdivisions(5);
   ratioframe__91->GetYaxis()->SetLabelFont(42);
   ratioframe__91->GetYaxis()->SetLabelSize(0.18);
   ratioframe__91->GetYaxis()->SetTitleSize(0.2);
   ratioframe__91->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__91->GetYaxis()->SetTitleFont(42);
   ratioframe__91->GetZaxis()->SetLabelFont(42);
   ratioframe__91->GetZaxis()->SetLabelSize(0.035);
   ratioframe__91->GetZaxis()->SetTitleSize(0.035);
   ratioframe__91->GetZaxis()->SetTitleFont(42);
   ratioframe__91->Draw("");
   
   Double_t Graph_from_ratio_fx3026[5] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9};
   Double_t Graph_from_ratio_fy3026[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3026[5] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3026[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3026[5] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3026[5] = {
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(5,Graph_from_ratio_fx3026,Graph_from_ratio_fy3026,Graph_from_ratio_felx3026,Graph_from_ratio_fehx3026,Graph_from_ratio_fely3026,Graph_from_ratio_fehy3026);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3026 = new TH1F("Graph_Graph_from_ratio3026","Data",100,0,1.1);
   Graph_Graph_from_ratio3026->SetMinimum(0);
   Graph_Graph_from_ratio3026->SetMaximum(1.1);
   Graph_Graph_from_ratio3026->SetDirectory(0);
   Graph_Graph_from_ratio3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3026->SetLineColor(ci);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3026);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
