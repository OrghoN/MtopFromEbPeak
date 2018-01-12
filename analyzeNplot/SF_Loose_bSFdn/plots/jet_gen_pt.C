void jet_gen_pt()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 20:35:34 2018) by ROOT version6.08/07
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
   TPad *p1 = new TPad("p1", "p1",0,0.15,1,0.99);
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
   
   TH1F *frame__22 = new TH1F("frame__22","t#bar{t}",50,0,350);
   frame__22->SetMinimum(0.1);
   frame__22->SetMaximum(0);
   frame__22->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__22->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__22->SetMarkerColor(ci);
   frame__22->GetXaxis()->SetTitle("pt [GeV]");
   frame__22->GetXaxis()->SetLabelFont(42);
   frame__22->GetXaxis()->SetLabelSize(0.035);
   frame__22->GetXaxis()->SetTitleSize(0.035);
   frame__22->GetXaxis()->SetTitleFont(42);
   frame__22->GetYaxis()->SetTitle(" Events");
   frame__22->GetYaxis()->SetNoExponent();
   frame__22->GetYaxis()->SetLabelFont(42);
   frame__22->GetYaxis()->SetTitleSize(0.045);
   frame__22->GetYaxis()->SetTitleOffset(1.3);
   frame__22->GetYaxis()->SetTitleFont(42);
   frame__22->GetZaxis()->SetLabelFont(42);
   frame__22->GetZaxis()->SetLabelSize(0.035);
   frame__22->GetZaxis()->SetTitleSize(0.035);
   frame__22->GetZaxis()->SetTitleFont(42);
   frame__22->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_4 = new TH1F("mc_stack_4","mc",50,0,350);
   mc_stack_4->SetMinimum(0);
   mc_stack_4->SetMaximum(0);
   mc_stack_4->SetDirectory(0);
   mc_stack_4->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_4->SetLineColor(ci);
   mc_stack_4->GetXaxis()->SetLabelFont(42);
   mc_stack_4->GetXaxis()->SetLabelSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleSize(0.035);
   mc_stack_4->GetXaxis()->SetTitleFont(42);
   mc_stack_4->GetYaxis()->SetLabelFont(42);
   mc_stack_4->GetYaxis()->SetLabelSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleSize(0.035);
   mc_stack_4->GetYaxis()->SetTitleFont(42);
   mc_stack_4->GetZaxis()->SetLabelFont(42);
   mc_stack_4->GetZaxis()->SetLabelSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleSize(0.035);
   mc_stack_4->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_4);
   
   
   TH1F *jet_gen_pt_t#bar{t}__23 = new TH1F("jet_gen_pt_t#bar{t}__23","t#bar{t}",50,0,350);
   jet_gen_pt_t#bar{t}__23->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   jet_gen_pt_t#bar{t}__23->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   jet_gen_pt_t#bar{t}__23->SetMarkerColor(ci);
   jet_gen_pt_t#bar{t}__23->GetXaxis()->SetTitle("pt [GeV]");
   jet_gen_pt_t#bar{t}__23->GetXaxis()->SetLabelFont(42);
   jet_gen_pt_t#bar{t}__23->GetXaxis()->SetLabelSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetXaxis()->SetTitleSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetXaxis()->SetTitleFont(42);
   jet_gen_pt_t#bar{t}__23->GetYaxis()->SetTitle(" Events");
   jet_gen_pt_t#bar{t}__23->GetYaxis()->SetLabelFont(42);
   jet_gen_pt_t#bar{t}__23->GetYaxis()->SetLabelSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetYaxis()->SetTitleSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetYaxis()->SetTitleFont(42);
   jet_gen_pt_t#bar{t}__23->GetZaxis()->SetLabelFont(42);
   jet_gen_pt_t#bar{t}__23->GetZaxis()->SetLabelSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetZaxis()->SetTitleSize(0.035);
   jet_gen_pt_t#bar{t}__23->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_gen_pt_t#bar{t},"hist");
   
   TH1F *jet_gen_pt_Diboson__24 = new TH1F("jet_gen_pt_Diboson__24","Diboson",50,0,350);
   jet_gen_pt_Diboson__24->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   jet_gen_pt_Diboson__24->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   jet_gen_pt_Diboson__24->SetMarkerColor(ci);
   jet_gen_pt_Diboson__24->GetXaxis()->SetTitle("pt [GeV]");
   jet_gen_pt_Diboson__24->GetXaxis()->SetLabelFont(42);
   jet_gen_pt_Diboson__24->GetXaxis()->SetLabelSize(0.035);
   jet_gen_pt_Diboson__24->GetXaxis()->SetTitleSize(0.035);
   jet_gen_pt_Diboson__24->GetXaxis()->SetTitleFont(42);
   jet_gen_pt_Diboson__24->GetYaxis()->SetTitle(" Events");
   jet_gen_pt_Diboson__24->GetYaxis()->SetLabelFont(42);
   jet_gen_pt_Diboson__24->GetYaxis()->SetLabelSize(0.035);
   jet_gen_pt_Diboson__24->GetYaxis()->SetTitleSize(0.035);
   jet_gen_pt_Diboson__24->GetYaxis()->SetTitleFont(42);
   jet_gen_pt_Diboson__24->GetZaxis()->SetLabelFont(42);
   jet_gen_pt_Diboson__24->GetZaxis()->SetLabelSize(0.035);
   jet_gen_pt_Diboson__24->GetZaxis()->SetTitleSize(0.035);
   jet_gen_pt_Diboson__24->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_gen_pt_Diboson,"hist");
   
   TH1F *jet_gen_pt_DY__25 = new TH1F("jet_gen_pt_DY__25","DY",50,0,350);
   jet_gen_pt_DY__25->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   jet_gen_pt_DY__25->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   jet_gen_pt_DY__25->SetMarkerColor(ci);
   jet_gen_pt_DY__25->GetXaxis()->SetTitle("pt [GeV]");
   jet_gen_pt_DY__25->GetXaxis()->SetLabelFont(42);
   jet_gen_pt_DY__25->GetXaxis()->SetLabelSize(0.035);
   jet_gen_pt_DY__25->GetXaxis()->SetTitleSize(0.035);
   jet_gen_pt_DY__25->GetXaxis()->SetTitleFont(42);
   jet_gen_pt_DY__25->GetYaxis()->SetTitle(" Events");
   jet_gen_pt_DY__25->GetYaxis()->SetLabelFont(42);
   jet_gen_pt_DY__25->GetYaxis()->SetLabelSize(0.035);
   jet_gen_pt_DY__25->GetYaxis()->SetTitleSize(0.035);
   jet_gen_pt_DY__25->GetYaxis()->SetTitleFont(42);
   jet_gen_pt_DY__25->GetZaxis()->SetLabelFont(42);
   jet_gen_pt_DY__25->GetZaxis()->SetLabelSize(0.035);
   jet_gen_pt_DY__25->GetZaxis()->SetTitleSize(0.035);
   jet_gen_pt_DY__25->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_gen_pt_DY,"hist");
   
   TH1F *jet_gen_pt_W__26 = new TH1F("jet_gen_pt_W__26","W",50,0,350);
   jet_gen_pt_W__26->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   jet_gen_pt_W__26->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   jet_gen_pt_W__26->SetMarkerColor(ci);
   jet_gen_pt_W__26->GetXaxis()->SetTitle("pt [GeV]");
   jet_gen_pt_W__26->GetXaxis()->SetLabelFont(42);
   jet_gen_pt_W__26->GetXaxis()->SetLabelSize(0.035);
   jet_gen_pt_W__26->GetXaxis()->SetTitleSize(0.035);
   jet_gen_pt_W__26->GetXaxis()->SetTitleFont(42);
   jet_gen_pt_W__26->GetYaxis()->SetTitle(" Events");
   jet_gen_pt_W__26->GetYaxis()->SetLabelFont(42);
   jet_gen_pt_W__26->GetYaxis()->SetLabelSize(0.035);
   jet_gen_pt_W__26->GetYaxis()->SetTitleSize(0.035);
   jet_gen_pt_W__26->GetYaxis()->SetTitleFont(42);
   jet_gen_pt_W__26->GetZaxis()->SetLabelFont(42);
   jet_gen_pt_W__26->GetZaxis()->SetLabelSize(0.035);
   jet_gen_pt_W__26->GetZaxis()->SetTitleSize(0.035);
   jet_gen_pt_W__26->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_gen_pt_W,"hist");
   
   TH1F *jet_gen_pt_SinglesPtop__27 = new TH1F("jet_gen_pt_SinglesPtop__27","Single top",50,0,350);
   jet_gen_pt_SinglesPtop__27->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   jet_gen_pt_SinglesPtop__27->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   jet_gen_pt_SinglesPtop__27->SetMarkerColor(ci);
   jet_gen_pt_SinglesPtop__27->GetXaxis()->SetTitle("pt [GeV]");
   jet_gen_pt_SinglesPtop__27->GetXaxis()->SetLabelFont(42);
   jet_gen_pt_SinglesPtop__27->GetXaxis()->SetLabelSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetXaxis()->SetTitleSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetXaxis()->SetTitleFont(42);
   jet_gen_pt_SinglesPtop__27->GetYaxis()->SetTitle(" Events");
   jet_gen_pt_SinglesPtop__27->GetYaxis()->SetLabelFont(42);
   jet_gen_pt_SinglesPtop__27->GetYaxis()->SetLabelSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetYaxis()->SetTitleSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetYaxis()->SetTitleFont(42);
   jet_gen_pt_SinglesPtop__27->GetZaxis()->SetLabelFont(42);
   jet_gen_pt_SinglesPtop__27->GetZaxis()->SetLabelSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetZaxis()->SetTitleSize(0.035);
   jet_gen_pt_SinglesPtop__27->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_gen_pt_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_jet_gen_pt_fx3007[51] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5,
   136.5,
   143.5,
   150.5,
   157.5,
   164.5,
   171.5,
   178.5,
   185.5,
   192.5,
   199.5,
   206.5,
   213.5,
   220.5,
   227.5,
   234.5,
   241.5,
   248.5,
   255.5,
   262.5,
   269.5,
   276.5,
   283.5,
   290.5,
   297.5,
   304.5,
   311.5,
   318.5,
   325.5,
   332.5,
   339.5,
   346.5,
   0};
   Double_t Graph_from_jet_gen_pt_fy3007[51] = {
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
   Double_t Graph_from_jet_gen_pt_felx3007[51] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   0};
   Double_t Graph_from_jet_gen_pt_fely3007[51] = {
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
   Double_t Graph_from_jet_gen_pt_fehx3007[51] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   0};
   Double_t Graph_from_jet_gen_pt_fehy3007[51] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_jet_gen_pt_fx3007,Graph_from_jet_gen_pt_fy3007,Graph_from_jet_gen_pt_felx3007,Graph_from_jet_gen_pt_fehx3007,Graph_from_jet_gen_pt_fely3007,Graph_from_jet_gen_pt_fehy3007);
   grae->SetName("Graph_from_jet_gen_pt");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_jet_gen_pt3007 = new TH1F("Graph_Graph_from_jet_gen_pt3007","Data",100,0,385);
   Graph_Graph_from_jet_gen_pt3007->SetMinimum(0);
   Graph_Graph_from_jet_gen_pt3007->SetMaximum(2.02516);
   Graph_Graph_from_jet_gen_pt3007->SetDirectory(0);
   Graph_Graph_from_jet_gen_pt3007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_jet_gen_pt3007->SetLineColor(ci);
   Graph_Graph_from_jet_gen_pt3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_gen_pt3007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_jet_gen_pt3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_gen_pt3007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_jet_gen_pt3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_gen_pt3007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_gen_pt3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_jet_gen_pt3007);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_jet_gen_pt","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("jet_gen_pt_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("jet_gen_pt_Diboson","Diboson","f");

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
   entry=leg->AddEntry("jet_gen_pt_DY","DY","f");

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
   entry=leg->AddEntry("jet_gen_pt_W","W","f");

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
   entry=leg->AddEntry("jet_gen_pt_Single top","Single top","f");

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
   TPad *p2 = new TPad("p2", "p2",0,0.03,1,0.17);
   p2->Draw();
   p2->cd();
   p2->Range(-50.60241,0.4485106,371.0843,1.597447);
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
   
   TH1F *ratioframe__28 = new TH1F("ratioframe__28","t#bar{t}",50,0,350);
   ratioframe__28->SetMinimum(0.46);
   ratioframe__28->SetMaximum(1.54);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__28->SetMarkerColor(ci);
   ratioframe__28->GetXaxis()->SetTitle("pt [GeV]");
   ratioframe__28->GetXaxis()->SetLabelFont(42);
   ratioframe__28->GetXaxis()->SetLabelSize(0);
   ratioframe__28->GetXaxis()->SetTitleSize(0);
   ratioframe__28->GetXaxis()->SetTitleOffset(0);
   ratioframe__28->GetXaxis()->SetTitleFont(42);
   ratioframe__28->GetYaxis()->SetTitle("Data/MC");
   ratioframe__28->GetYaxis()->SetNoExponent();
   ratioframe__28->GetYaxis()->SetNdivisions(5);
   ratioframe__28->GetYaxis()->SetLabelFont(42);
   ratioframe__28->GetYaxis()->SetLabelSize(0.18);
   ratioframe__28->GetYaxis()->SetTitleSize(0.2);
   ratioframe__28->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__28->GetYaxis()->SetTitleFont(42);
   ratioframe__28->GetZaxis()->SetLabelFont(42);
   ratioframe__28->GetZaxis()->SetLabelSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleSize(0.035);
   ratioframe__28->GetZaxis()->SetTitleFont(42);
   ratioframe__28->Draw("");
   
   Double_t Graph_from_ratio_fx3008[50] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5,
   136.5,
   143.5,
   150.5,
   157.5,
   164.5,
   171.5,
   178.5,
   185.5,
   192.5,
   199.5,
   206.5,
   213.5,
   220.5,
   227.5,
   234.5,
   241.5,
   248.5,
   255.5,
   262.5,
   269.5,
   276.5,
   283.5,
   290.5,
   297.5,
   304.5,
   311.5,
   318.5,
   325.5,
   332.5,
   339.5,
   346.5};
   Double_t Graph_from_ratio_fy3008[50] = {
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
   Double_t Graph_from_ratio_felx3008[50] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph_from_ratio_fely3008[50] = {
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
   Double_t Graph_from_ratio_fehx3008[50] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph_from_ratio_fehy3008[50] = {
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
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3008,Graph_from_ratio_fy3008,Graph_from_ratio_felx3008,Graph_from_ratio_fehx3008,Graph_from_ratio_fely3008,Graph_from_ratio_fehy3008);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3008 = new TH1F("Graph_Graph_from_ratio3008","Data",100,0,385);
   Graph_Graph_from_ratio3008->SetMinimum(0);
   Graph_Graph_from_ratio3008->SetMaximum(1.1);
   Graph_Graph_from_ratio3008->SetDirectory(0);
   Graph_Graph_from_ratio3008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3008->SetLineColor(ci);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3008);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
