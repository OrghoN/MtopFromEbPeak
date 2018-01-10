void invariant_top_mass()
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
   
   TH1F *frame__78 = new TH1F("frame__78","t#bar{t}",50,0,200);
   frame__78->SetMinimum(0.1);
   frame__78->SetMaximum(0);
   frame__78->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__78->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__78->SetMarkerColor(ci);
   frame__78->GetXaxis()->SetTitle("mass [GeV]");
   frame__78->GetXaxis()->SetLabelFont(42);
   frame__78->GetXaxis()->SetLabelSize(0.035);
   frame__78->GetXaxis()->SetTitleSize(0.035);
   frame__78->GetXaxis()->SetTitleFont(42);
   frame__78->GetYaxis()->SetTitle(" Events");
   frame__78->GetYaxis()->SetNoExponent();
   frame__78->GetYaxis()->SetLabelFont(42);
   frame__78->GetYaxis()->SetTitleSize(0.045);
   frame__78->GetYaxis()->SetTitleOffset(1.3);
   frame__78->GetYaxis()->SetTitleFont(42);
   frame__78->GetZaxis()->SetLabelFont(42);
   frame__78->GetZaxis()->SetLabelSize(0.035);
   frame__78->GetZaxis()->SetTitleSize(0.035);
   frame__78->GetZaxis()->SetTitleFont(42);
   frame__78->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_12 = new TH1F("mc_stack_12","mc",50,0,200);
   mc_stack_12->SetMinimum(0);
   mc_stack_12->SetMaximum(0);
   mc_stack_12->SetDirectory(0);
   mc_stack_12->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_12->SetLineColor(ci);
   mc_stack_12->GetXaxis()->SetLabelFont(42);
   mc_stack_12->GetXaxis()->SetLabelSize(0.035);
   mc_stack_12->GetXaxis()->SetTitleSize(0.035);
   mc_stack_12->GetXaxis()->SetTitleFont(42);
   mc_stack_12->GetYaxis()->SetLabelFont(42);
   mc_stack_12->GetYaxis()->SetLabelSize(0.035);
   mc_stack_12->GetYaxis()->SetTitleSize(0.035);
   mc_stack_12->GetYaxis()->SetTitleFont(42);
   mc_stack_12->GetZaxis()->SetLabelFont(42);
   mc_stack_12->GetZaxis()->SetLabelSize(0.035);
   mc_stack_12->GetZaxis()->SetTitleSize(0.035);
   mc_stack_12->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_12);
   
   
   TH1F *invariant_top_mass_t#bar{t}__79 = new TH1F("invariant_top_mass_t#bar{t}__79","t#bar{t}",50,0,200);
   invariant_top_mass_t#bar{t}__79->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   invariant_top_mass_t#bar{t}__79->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   invariant_top_mass_t#bar{t}__79->SetMarkerColor(ci);
   invariant_top_mass_t#bar{t}__79->GetXaxis()->SetTitle("mass [GeV]");
   invariant_top_mass_t#bar{t}__79->GetXaxis()->SetLabelFont(42);
   invariant_top_mass_t#bar{t}__79->GetXaxis()->SetLabelSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetXaxis()->SetTitleSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetXaxis()->SetTitleFont(42);
   invariant_top_mass_t#bar{t}__79->GetYaxis()->SetTitle(" Events");
   invariant_top_mass_t#bar{t}__79->GetYaxis()->SetLabelFont(42);
   invariant_top_mass_t#bar{t}__79->GetYaxis()->SetLabelSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetYaxis()->SetTitleSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetYaxis()->SetTitleFont(42);
   invariant_top_mass_t#bar{t}__79->GetZaxis()->SetLabelFont(42);
   invariant_top_mass_t#bar{t}__79->GetZaxis()->SetLabelSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetZaxis()->SetTitleSize(0.035);
   invariant_top_mass_t#bar{t}__79->GetZaxis()->SetTitleFont(42);
   mc->Add(invariant_top_mass_t#bar{t},"hist");
   
   TH1F *invariant_top_mass_Diboson__80 = new TH1F("invariant_top_mass_Diboson__80","Diboson",50,0,200);
   invariant_top_mass_Diboson__80->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   invariant_top_mass_Diboson__80->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   invariant_top_mass_Diboson__80->SetMarkerColor(ci);
   invariant_top_mass_Diboson__80->GetXaxis()->SetTitle("mass [GeV]");
   invariant_top_mass_Diboson__80->GetXaxis()->SetLabelFont(42);
   invariant_top_mass_Diboson__80->GetXaxis()->SetLabelSize(0.035);
   invariant_top_mass_Diboson__80->GetXaxis()->SetTitleSize(0.035);
   invariant_top_mass_Diboson__80->GetXaxis()->SetTitleFont(42);
   invariant_top_mass_Diboson__80->GetYaxis()->SetTitle(" Events");
   invariant_top_mass_Diboson__80->GetYaxis()->SetLabelFont(42);
   invariant_top_mass_Diboson__80->GetYaxis()->SetLabelSize(0.035);
   invariant_top_mass_Diboson__80->GetYaxis()->SetTitleSize(0.035);
   invariant_top_mass_Diboson__80->GetYaxis()->SetTitleFont(42);
   invariant_top_mass_Diboson__80->GetZaxis()->SetLabelFont(42);
   invariant_top_mass_Diboson__80->GetZaxis()->SetLabelSize(0.035);
   invariant_top_mass_Diboson__80->GetZaxis()->SetTitleSize(0.035);
   invariant_top_mass_Diboson__80->GetZaxis()->SetTitleFont(42);
   mc->Add(invariant_top_mass_Diboson,"hist");
   
   TH1F *invariant_top_mass_DY__81 = new TH1F("invariant_top_mass_DY__81","DY",50,0,200);
   invariant_top_mass_DY__81->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   invariant_top_mass_DY__81->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   invariant_top_mass_DY__81->SetMarkerColor(ci);
   invariant_top_mass_DY__81->GetXaxis()->SetTitle("mass [GeV]");
   invariant_top_mass_DY__81->GetXaxis()->SetLabelFont(42);
   invariant_top_mass_DY__81->GetXaxis()->SetLabelSize(0.035);
   invariant_top_mass_DY__81->GetXaxis()->SetTitleSize(0.035);
   invariant_top_mass_DY__81->GetXaxis()->SetTitleFont(42);
   invariant_top_mass_DY__81->GetYaxis()->SetTitle(" Events");
   invariant_top_mass_DY__81->GetYaxis()->SetLabelFont(42);
   invariant_top_mass_DY__81->GetYaxis()->SetLabelSize(0.035);
   invariant_top_mass_DY__81->GetYaxis()->SetTitleSize(0.035);
   invariant_top_mass_DY__81->GetYaxis()->SetTitleFont(42);
   invariant_top_mass_DY__81->GetZaxis()->SetLabelFont(42);
   invariant_top_mass_DY__81->GetZaxis()->SetLabelSize(0.035);
   invariant_top_mass_DY__81->GetZaxis()->SetTitleSize(0.035);
   invariant_top_mass_DY__81->GetZaxis()->SetTitleFont(42);
   mc->Add(invariant_top_mass_DY,"hist");
   
   TH1F *invariant_top_mass_W__82 = new TH1F("invariant_top_mass_W__82","W",50,0,200);
   invariant_top_mass_W__82->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   invariant_top_mass_W__82->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   invariant_top_mass_W__82->SetMarkerColor(ci);
   invariant_top_mass_W__82->GetXaxis()->SetTitle("mass [GeV]");
   invariant_top_mass_W__82->GetXaxis()->SetLabelFont(42);
   invariant_top_mass_W__82->GetXaxis()->SetLabelSize(0.035);
   invariant_top_mass_W__82->GetXaxis()->SetTitleSize(0.035);
   invariant_top_mass_W__82->GetXaxis()->SetTitleFont(42);
   invariant_top_mass_W__82->GetYaxis()->SetTitle(" Events");
   invariant_top_mass_W__82->GetYaxis()->SetLabelFont(42);
   invariant_top_mass_W__82->GetYaxis()->SetLabelSize(0.035);
   invariant_top_mass_W__82->GetYaxis()->SetTitleSize(0.035);
   invariant_top_mass_W__82->GetYaxis()->SetTitleFont(42);
   invariant_top_mass_W__82->GetZaxis()->SetLabelFont(42);
   invariant_top_mass_W__82->GetZaxis()->SetLabelSize(0.035);
   invariant_top_mass_W__82->GetZaxis()->SetTitleSize(0.035);
   invariant_top_mass_W__82->GetZaxis()->SetTitleFont(42);
   mc->Add(invariant_top_mass_W,"hist");
   
   TH1F *invariant_top_mass_SinglesPtop__83 = new TH1F("invariant_top_mass_SinglesPtop__83","Single top",50,0,200);
   invariant_top_mass_SinglesPtop__83->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   invariant_top_mass_SinglesPtop__83->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   invariant_top_mass_SinglesPtop__83->SetMarkerColor(ci);
   invariant_top_mass_SinglesPtop__83->GetXaxis()->SetTitle("mass [GeV]");
   invariant_top_mass_SinglesPtop__83->GetXaxis()->SetLabelFont(42);
   invariant_top_mass_SinglesPtop__83->GetXaxis()->SetLabelSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetXaxis()->SetTitleSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetXaxis()->SetTitleFont(42);
   invariant_top_mass_SinglesPtop__83->GetYaxis()->SetTitle(" Events");
   invariant_top_mass_SinglesPtop__83->GetYaxis()->SetLabelFont(42);
   invariant_top_mass_SinglesPtop__83->GetYaxis()->SetLabelSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetYaxis()->SetTitleSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetYaxis()->SetTitleFont(42);
   invariant_top_mass_SinglesPtop__83->GetZaxis()->SetLabelFont(42);
   invariant_top_mass_SinglesPtop__83->GetZaxis()->SetLabelSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetZaxis()->SetTitleSize(0.035);
   invariant_top_mass_SinglesPtop__83->GetZaxis()->SetTitleFont(42);
   mc->Add(invariant_top_mass_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_invariant_top_mass_fx3023[51] = {
   2,
   6,
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198,
   0};
   Double_t Graph_from_invariant_top_mass_fy3023[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_invariant_top_mass_felx3023[51] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   0};
   Double_t Graph_from_invariant_top_mass_fely3023[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_invariant_top_mass_fehx3023[51] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   0};
   Double_t Graph_from_invariant_top_mass_fehy3023[51] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_invariant_top_mass_fx3023,Graph_from_invariant_top_mass_fy3023,Graph_from_invariant_top_mass_felx3023,Graph_from_invariant_top_mass_fehx3023,Graph_from_invariant_top_mass_fely3023,Graph_from_invariant_top_mass_fehy3023);
   grae->SetName("Graph_from_invariant_top_mass");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_invariant_top_mass3023 = new TH1F("Graph_Graph_from_invariant_top_mass3023","Data",100,0,220);
   Graph_Graph_from_invariant_top_mass3023->SetMinimum(0);
   Graph_Graph_from_invariant_top_mass3023->SetMaximum(2.02516);
   Graph_Graph_from_invariant_top_mass3023->SetDirectory(0);
   Graph_Graph_from_invariant_top_mass3023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_invariant_top_mass3023->SetLineColor(ci);
   Graph_Graph_from_invariant_top_mass3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_invariant_top_mass3023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_invariant_top_mass3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_invariant_top_mass3023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_invariant_top_mass3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_invariant_top_mass3023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_invariant_top_mass3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_invariant_top_mass3023);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_invariant_top_mass","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("invariant_top_mass_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("invariant_top_mass_Diboson","Diboson","f");

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
   entry=leg->AddEntry("invariant_top_mass_DY","DY","f");

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
   entry=leg->AddEntry("invariant_top_mass_W","W","f");

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
   entry=leg->AddEntry("invariant_top_mass_Single top","Single top","f");

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
   p2->Range(-28.91566,0.4485106,212.0482,1.597447);
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
   
   TH1F *ratioframe__84 = new TH1F("ratioframe__84","t#bar{t}",50,0,200);
   ratioframe__84->SetMinimum(0.46);
   ratioframe__84->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__84->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__84->SetMarkerColor(ci);
   ratioframe__84->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__84->GetXaxis()->SetLabelFont(42);
   ratioframe__84->GetXaxis()->SetLabelSize(0);
   ratioframe__84->GetXaxis()->SetTitleSize(0);
   ratioframe__84->GetXaxis()->SetTitleOffset(0);
   ratioframe__84->GetXaxis()->SetTitleFont(42);
   ratioframe__84->GetYaxis()->SetTitle("Data/MC");
   ratioframe__84->GetYaxis()->SetNoExponent();
   ratioframe__84->GetYaxis()->SetNdivisions(5);
   ratioframe__84->GetYaxis()->SetLabelFont(42);
   ratioframe__84->GetYaxis()->SetLabelSize(0.18);
   ratioframe__84->GetYaxis()->SetTitleSize(0.2);
   ratioframe__84->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__84->GetYaxis()->SetTitleFont(42);
   ratioframe__84->GetZaxis()->SetLabelFont(42);
   ratioframe__84->GetZaxis()->SetLabelSize(0.035);
   ratioframe__84->GetZaxis()->SetTitleSize(0.035);
   ratioframe__84->GetZaxis()->SetTitleFont(42);
   ratioframe__84->Draw("");
   
   Double_t Graph_from_ratio_fx3024[50] = {
   2,
   6,
   10,
   14,
   18,
   22,
   26,
   30,
   34,
   38,
   42,
   46,
   50,
   54,
   58,
   62,
   66,
   70,
   74,
   78,
   82,
   86,
   90,
   94,
   98,
   102,
   106,
   110,
   114,
   118,
   122,
   126,
   130,
   134,
   138,
   142,
   146,
   150,
   154,
   158,
   162,
   166,
   170,
   174,
   178,
   182,
   186,
   190,
   194,
   198};
   Double_t Graph_from_ratio_fy3024[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_felx3024[50] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph_from_ratio_fely3024[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_ratio_fehx3024[50] = {
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2,
   2};
   Double_t Graph_from_ratio_fehy3024[50] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3024,Graph_from_ratio_fy3024,Graph_from_ratio_felx3024,Graph_from_ratio_fehx3024,Graph_from_ratio_fely3024,Graph_from_ratio_fehy3024);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3024 = new TH1F("Graph_Graph_from_ratio3024","Data",100,0,220);
   Graph_Graph_from_ratio3024->SetMinimum(0);
   Graph_Graph_from_ratio3024->SetMaximum(1.1);
   Graph_Graph_from_ratio3024->SetDirectory(0);
   Graph_Graph_from_ratio3024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3024->SetLineColor(ci);
   Graph_Graph_from_ratio3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3024);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
