void bjet_pt_tight()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 18:25:06 2018) by ROOT version6.08/07
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
   p1->Range(-50.60241,-2097.361,371.0843,15381.48);
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
   
   TH1F *frame__85 = new TH1F("frame__85","t#bar{t}",50,0,350);
   frame__85->SetMinimum(0.1);
   frame__85->SetMaximum(15206.69);
   frame__85->SetEntries(37306);
   frame__85->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__85->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__85->SetMarkerColor(ci);
   frame__85->GetXaxis()->SetTitle("pt [GeV]");
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
   
   TH1F *mc_stack_13 = new TH1F("mc_stack_13","mc",50,0,350);
   mc_stack_13->SetMinimum(-2.004637e-08);
   mc_stack_13->SetMaximum(12282.33);
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
   
   
   TH1F *bjet_pt_tight_t#bar{t}__86 = new TH1F("bjet_pt_tight_t#bar{t}__86","t#bar{t}",50,0,350);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(5,6547.382);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(6,10195.78);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(7,11206.31);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(8,11117.72);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(9,9871.902);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(10,9534.102);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(11,8633.198);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(12,7591.04);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(13,6606.247);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(14,6037.719);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(15,5116.333);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(16,4352.175);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(17,3782.767);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(18,3057.597);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(19,2576.286);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(20,2042.478);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(21,1911.382);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(22,1559.516);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(23,1308.132);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(24,1051.958);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(25,823.4261);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(26,744.5881);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(27,554.8198);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(28,513.2167);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(29,358.406);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(30,404.1106);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(31,305.0116);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(32,253.2674);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(33,242.6637);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(34,195.2027);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(35,143.0897);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(36,148.6567);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(37,112.4613);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(38,94.02967);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(39,103.2799);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(40,79.41094);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(41,83.81013);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(42,57.55701);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(43,75.2114);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(44,22.2342);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(45,31.83138);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(46,28.8378);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(47,20.63328);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(48,19.38075);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(49,6.968474);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(50,8.336985);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(51,129.448);
   bjet_pt_tight_t#bar{t}__86->SetBinError(5,159.5856);
   bjet_pt_tight_t#bar{t}__86->SetBinError(6,198.5155);
   bjet_pt_tight_t#bar{t}__86->SetBinError(7,208.2307);
   bjet_pt_tight_t#bar{t}__86->SetBinError(8,207.4051);
   bjet_pt_tight_t#bar{t}__86->SetBinError(9,195.3517);
   bjet_pt_tight_t#bar{t}__86->SetBinError(10,191.7568);
   bjet_pt_tight_t#bar{t}__86->SetBinError(11,182.7085);
   bjet_pt_tight_t#bar{t}__86->SetBinError(12,171.1596);
   bjet_pt_tight_t#bar{t}__86->SetBinError(13,159.6743);
   bjet_pt_tight_t#bar{t}__86->SetBinError(14,152.6456);
   bjet_pt_tight_t#bar{t}__86->SetBinError(15,140.5567);
   bjet_pt_tight_t#bar{t}__86->SetBinError(16,129.5605);
   bjet_pt_tight_t#bar{t}__86->SetBinError(17,121.0693);
   bjet_pt_tight_t#bar{t}__86->SetBinError(18,108.6303);
   bjet_pt_tight_t#bar{t}__86->SetBinError(19,99.75942);
   bjet_pt_tight_t#bar{t}__86->SetBinError(20,89.08662);
   bjet_pt_tight_t#bar{t}__86->SetBinError(21,85.95663);
   bjet_pt_tight_t#bar{t}__86->SetBinError(22,77.70494);
   bjet_pt_tight_t#bar{t}__86->SetBinError(23,71.18031);
   bjet_pt_tight_t#bar{t}__86->SetBinError(24,63.87298);
   bjet_pt_tight_t#bar{t}__86->SetBinError(25,56.59195);
   bjet_pt_tight_t#bar{t}__86->SetBinError(26,53.82669);
   bjet_pt_tight_t#bar{t}__86->SetBinError(27,46.5957);
   bjet_pt_tight_t#bar{t}__86->SetBinError(28,44.50929);
   bjet_pt_tight_t#bar{t}__86->SetBinError(29,37.57426);
   bjet_pt_tight_t#bar{t}__86->SetBinError(30,39.64505);
   bjet_pt_tight_t#bar{t}__86->SetBinError(31,34.24863);
   bjet_pt_tight_t#bar{t}__86->SetBinError(32,31.3577);
   bjet_pt_tight_t#bar{t}__86->SetBinError(33,30.88443);
   bjet_pt_tight_t#bar{t}__86->SetBinError(34,27.60792);
   bjet_pt_tight_t#bar{t}__86->SetBinError(35,23.41221);
   bjet_pt_tight_t#bar{t}__86->SetBinError(36,24.03181);
   bjet_pt_tight_t#bar{t}__86->SetBinError(37,20.78234);
   bjet_pt_tight_t#bar{t}__86->SetBinError(38,19.08905);
   bjet_pt_tight_t#bar{t}__86->SetBinError(39,20.11511);
   bjet_pt_tight_t#bar{t}__86->SetBinError(40,17.43027);
   bjet_pt_tight_t#bar{t}__86->SetBinError(41,18.04762);
   bjet_pt_tight_t#bar{t}__86->SetBinError(42,15.0997);
   bjet_pt_tight_t#bar{t}__86->SetBinError(43,17.28005);
   bjet_pt_tight_t#bar{t}__86->SetBinError(44,9.122961);
   bjet_pt_tight_t#bar{t}__86->SetBinError(45,11.2951);
   bjet_pt_tight_t#bar{t}__86->SetBinError(46,10.3239);
   bjet_pt_tight_t#bar{t}__86->SetBinError(47,8.829021);
   bjet_pt_tight_t#bar{t}__86->SetBinError(48,8.669236);
   bjet_pt_tight_t#bar{t}__86->SetBinError(49,4.957674);
   bjet_pt_tight_t#bar{t}__86->SetBinError(50,5.895468);
   bjet_pt_tight_t#bar{t}__86->SetBinError(51,22.3979);
   bjet_pt_tight_t#bar{t}__86->SetEntries(33248);
   bjet_pt_tight_t#bar{t}__86->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_pt_tight_t#bar{t}__86->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_pt_tight_t#bar{t}__86->SetMarkerColor(ci);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_t#bar{t},"hist");
   
   TH1F *bjet_pt_tight_Diboson__87 = new TH1F("bjet_pt_tight_Diboson__87","Diboson",50,0,350);
   bjet_pt_tight_Diboson__87->SetBinContent(5,8.672327);
   bjet_pt_tight_Diboson__87->SetBinContent(6,8.129086);
   bjet_pt_tight_Diboson__87->SetBinContent(7,5.643178);
   bjet_pt_tight_Diboson__87->SetBinContent(8,2.7588);
   bjet_pt_tight_Diboson__87->SetBinContent(9,4.298239);
   bjet_pt_tight_Diboson__87->SetBinContent(10,5.901875);
   bjet_pt_tight_Diboson__87->SetBinContent(11,1.957187);
   bjet_pt_tight_Diboson__87->SetBinContent(12,0.9169664);
   bjet_pt_tight_Diboson__87->SetBinContent(13,3.315446);
   bjet_pt_tight_Diboson__87->SetBinContent(14,1.336578);
   bjet_pt_tight_Diboson__87->SetBinContent(15,1.607226);
   bjet_pt_tight_Diboson__87->SetBinContent(16,0.8103416);
   bjet_pt_tight_Diboson__87->SetBinContent(17,1.102377);
   bjet_pt_tight_Diboson__87->SetBinContent(18,0.007695047);
   bjet_pt_tight_Diboson__87->SetBinContent(19,0.9854149);
   bjet_pt_tight_Diboson__87->SetBinContent(20,1.150783);
   bjet_pt_tight_Diboson__87->SetBinContent(21,1.193081);
   bjet_pt_tight_Diboson__87->SetBinContent(22,1.188031);
   bjet_pt_tight_Diboson__87->SetBinContent(23,0.2853125);
   bjet_pt_tight_Diboson__87->SetBinContent(24,1.144748);
   bjet_pt_tight_Diboson__87->SetBinContent(25,0.4467701);
   bjet_pt_tight_Diboson__87->SetBinContent(26,0.4511124);
   bjet_pt_tight_Diboson__87->SetBinContent(27,0.3808447);
   bjet_pt_tight_Diboson__87->SetBinContent(28,0.8381888);
   bjet_pt_tight_Diboson__87->SetBinContent(29,0.4081971);
   bjet_pt_tight_Diboson__87->SetBinContent(31,0.3739505);
   bjet_pt_tight_Diboson__87->SetBinContent(33,0.3413283);
   bjet_pt_tight_Diboson__87->SetBinContent(37,0.688642);
   bjet_pt_tight_Diboson__87->SetBinContent(38,0.4303074);
   bjet_pt_tight_Diboson__87->SetBinContent(47,0.3785551);
   bjet_pt_tight_Diboson__87->SetBinContent(50,0.3986073);
   bjet_pt_tight_Diboson__87->SetBinContent(51,1.432576);
   bjet_pt_tight_Diboson__87->SetBinError(5,1.839008);
   bjet_pt_tight_Diboson__87->SetBinError(6,1.787052);
   bjet_pt_tight_Diboson__87->SetBinError(7,1.498123);
   bjet_pt_tight_Diboson__87->SetBinError(8,1.00861);
   bjet_pt_tight_Diboson__87->SetBinError(9,1.278127);
   bjet_pt_tight_Diboson__87->SetBinError(10,1.526856);
   bjet_pt_tight_Diboson__87->SetBinError(11,0.8848462);
   bjet_pt_tight_Diboson__87->SetBinError(12,0.6150457);
   bjet_pt_tight_Diboson__87->SetBinError(13,1.119074);
   bjet_pt_tight_Diboson__87->SetBinError(14,0.7113698);
   bjet_pt_tight_Diboson__87->SetBinError(15,0.808007);
   bjet_pt_tight_Diboson__87->SetBinError(16,0.5735815);
   bjet_pt_tight_Diboson__87->SetBinError(17,0.6420199);
   bjet_pt_tight_Diboson__87->SetBinError(18,0.007695047);
   bjet_pt_tight_Diboson__87->SetBinError(19,0.5822217);
   bjet_pt_tight_Diboson__87->SetBinError(20,0.6645085);
   bjet_pt_tight_Diboson__87->SetBinError(21,0.6900889);
   bjet_pt_tight_Diboson__87->SetBinError(22,0.6886624);
   bjet_pt_tight_Diboson__87->SetBinError(23,0.2853125);
   bjet_pt_tight_Diboson__87->SetBinError(24,0.6612639);
   bjet_pt_tight_Diboson__87->SetBinError(25,0.4467701);
   bjet_pt_tight_Diboson__87->SetBinError(26,0.4511124);
   bjet_pt_tight_Diboson__87->SetBinError(27,0.3808447);
   bjet_pt_tight_Diboson__87->SetBinError(28,0.5664845);
   bjet_pt_tight_Diboson__87->SetBinError(29,0.3893347);
   bjet_pt_tight_Diboson__87->SetBinError(31,0.3739505);
   bjet_pt_tight_Diboson__87->SetBinError(33,0.3413283);
   bjet_pt_tight_Diboson__87->SetBinError(37,0.4887396);
   bjet_pt_tight_Diboson__87->SetBinError(38,0.4303074);
   bjet_pt_tight_Diboson__87->SetBinError(47,0.3785551);
   bjet_pt_tight_Diboson__87->SetBinError(50,0.3986073);
   bjet_pt_tight_Diboson__87->SetBinError(51,0.7191099);
   bjet_pt_tight_Diboson__87->SetEntries(164);
   bjet_pt_tight_Diboson__87->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_pt_tight_Diboson__87->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_pt_tight_Diboson__87->SetMarkerColor(ci);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_Diboson__87->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_Diboson__87->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_Diboson,"hist");
   
   TH1F *bjet_pt_tight_DY__88 = new TH1F("bjet_pt_tight_DY__88","DY",50,0,350);
   bjet_pt_tight_DY__88->SetBinContent(5,35.68578);
   bjet_pt_tight_DY__88->SetBinContent(6,32.58035);
   bjet_pt_tight_DY__88->SetBinContent(7,16.5393);
   bjet_pt_tight_DY__88->SetBinContent(11,19.68991);
   bjet_pt_tight_DY__88->SetBinContent(12,18.52124);
   bjet_pt_tight_DY__88->SetBinContent(21,19.95711);
   bjet_pt_tight_DY__88->SetBinContent(27,1.98969);
   bjet_pt_tight_DY__88->SetBinContent(39,19.12663);
   bjet_pt_tight_DY__88->SetBinError(5,25.32893);
   bjet_pt_tight_DY__88->SetBinError(6,23.05959);
   bjet_pt_tight_DY__88->SetBinError(7,16.5393);
   bjet_pt_tight_DY__88->SetBinError(11,19.68991);
   bjet_pt_tight_DY__88->SetBinError(12,18.52124);
   bjet_pt_tight_DY__88->SetBinError(21,19.95711);
   bjet_pt_tight_DY__88->SetBinError(27,1.98969);
   bjet_pt_tight_DY__88->SetBinError(39,19.12663);
   bjet_pt_tight_DY__88->SetEntries(10);
   bjet_pt_tight_DY__88->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_pt_tight_DY__88->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_pt_tight_DY__88->SetMarkerColor(ci);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_DY__88->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_DY__88->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_DY__88->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_DY,"hist");
   
   TH1F *bjet_pt_tight_W__89 = new TH1F("bjet_pt_tight_W__89","W",50,0,350);
   bjet_pt_tight_W__89->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_pt_tight_W__89->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_pt_tight_W__89->SetMarkerColor(ci);
   bjet_pt_tight_W__89->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_W__89->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_W__89->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_W__89->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_W__89->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_W,"hist");
   
   TH1F *bjet_pt_tight_SinglesPtop__90 = new TH1F("bjet_pt_tight_SinglesPtop__90","Single top",50,0,350);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(5,308.2877);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(6,426.9347);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(7,468.9651);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(8,432.1585);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(9,444.1281);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(10,387.9053);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(11,309.8657);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(12,296.0785);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(13,250.3369);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(14,203.2816);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(15,155.1885);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(16,155.1703);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(17,114.2162);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(18,115.652);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(19,101.1055);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(20,94.31952);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(21,72.60692);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(22,54.74783);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(23,51.20148);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(24,35.43673);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(25,37.74276);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(26,25.22848);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(27,31.74845);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(28,25.08139);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(29,17.95123);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(30,20.13617);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(31,19.27806);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(32,13.33384);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(33,9.81194);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(34,10.91638);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(35,9.978458);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(36,5.490203);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(37,18.12708);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(38,0.02170886);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(39,7.7411);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(40,4.23044);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(41,8.253747);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(42,5.385571);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(43,6.696502);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(44,3.600524);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(46,4.370384);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(47,4.135643);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(48,4.208641);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(49,2.716515);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(50,5.50398);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(51,37.38029);
   bjet_pt_tight_SinglesPtop__90->SetBinError(5,20.1607);
   bjet_pt_tight_SinglesPtop__90->SetBinError(6,23.85544);
   bjet_pt_tight_SinglesPtop__90->SetBinError(7,25.17023);
   bjet_pt_tight_SinglesPtop__90->SetBinError(8,23.86406);
   bjet_pt_tight_SinglesPtop__90->SetBinError(9,24.465);
   bjet_pt_tight_SinglesPtop__90->SetBinError(10,22.67974);
   bjet_pt_tight_SinglesPtop__90->SetBinError(11,20.46488);
   bjet_pt_tight_SinglesPtop__90->SetBinError(12,19.99044);
   bjet_pt_tight_SinglesPtop__90->SetBinError(13,18.36896);
   bjet_pt_tight_SinglesPtop__90->SetBinError(14,16.50004);
   bjet_pt_tight_SinglesPtop__90->SetBinError(15,14.47137);
   bjet_pt_tight_SinglesPtop__90->SetBinError(16,14.35654);
   bjet_pt_tight_SinglesPtop__90->SetBinError(17,12.29359);
   bjet_pt_tight_SinglesPtop__90->SetBinError(18,12.4675);
   bjet_pt_tight_SinglesPtop__90->SetBinError(19,11.64103);
   bjet_pt_tight_SinglesPtop__90->SetBinError(20,11.24471);
   bjet_pt_tight_SinglesPtop__90->SetBinError(21,9.819443);
   bjet_pt_tight_SinglesPtop__90->SetBinError(22,8.620303);
   bjet_pt_tight_SinglesPtop__90->SetBinError(23,8.234132);
   bjet_pt_tight_SinglesPtop__90->SetBinError(24,6.808375);
   bjet_pt_tight_SinglesPtop__90->SetBinError(25,7.157502);
   bjet_pt_tight_SinglesPtop__90->SetBinError(26,5.809591);
   bjet_pt_tight_SinglesPtop__90->SetBinError(27,6.500959);
   bjet_pt_tight_SinglesPtop__90->SetBinError(28,5.672566);
   bjet_pt_tight_SinglesPtop__90->SetBinError(29,4.862992);
   bjet_pt_tight_SinglesPtop__90->SetBinError(30,5.119949);
   bjet_pt_tight_SinglesPtop__90->SetBinError(31,4.904011);
   bjet_pt_tight_SinglesPtop__90->SetBinError(32,4.228094);
   bjet_pt_tight_SinglesPtop__90->SetBinError(33,3.682061);
   bjet_pt_tight_SinglesPtop__90->SetBinError(34,3.885019);
   bjet_pt_tight_SinglesPtop__90->SetBinError(35,3.78064);
   bjet_pt_tight_SinglesPtop__90->SetBinError(36,2.779841);
   bjet_pt_tight_SinglesPtop__90->SetBinError(37,4.912427);
   bjet_pt_tight_SinglesPtop__90->SetBinError(38,0.02170886);
   bjet_pt_tight_SinglesPtop__90->SetBinError(39,3.21705);
   bjet_pt_tight_SinglesPtop__90->SetBinError(40,2.450269);
   bjet_pt_tight_SinglesPtop__90->SetBinError(41,3.240657);
   bjet_pt_tight_SinglesPtop__90->SetBinError(42,2.692938);
   bjet_pt_tight_SinglesPtop__90->SetBinError(43,2.998414);
   bjet_pt_tight_SinglesPtop__90->SetBinError(44,2.216391);
   bjet_pt_tight_SinglesPtop__90->SetBinError(46,2.529923);
   bjet_pt_tight_SinglesPtop__90->SetBinError(47,2.391186);
   bjet_pt_tight_SinglesPtop__90->SetBinError(48,2.432593);
   bjet_pt_tight_SinglesPtop__90->SetBinError(49,1.713952);
   bjet_pt_tight_SinglesPtop__90->SetBinError(50,2.758281);
   bjet_pt_tight_SinglesPtop__90->SetBinError(51,7.010134);
   bjet_pt_tight_SinglesPtop__90->SetEntries(3884);
   bjet_pt_tight_SinglesPtop__90->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_pt_tight_SinglesPtop__90->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_pt_tight_SinglesPtop__90->SetMarkerColor(ci);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_pt_tight_fx3025[51] = {
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
   Double_t Graph_from_bjet_pt_tight_fy3025[51] = {
   0,
   0,
   0,
   0,
   6266,
   9790,
   10372,
   10314,
   9919,
   8929,
   7985,
   6765,
   6058,
   5336,
   4556,
   3842,
   3232,
   2635,
   2221,
   1905,
   1545,
   1368,
   1117,
   877,
   707,
   597,
   541,
   422,
   337,
   320,
   219,
   193,
   177,
   119,
   131,
   121,
   91,
   67,
   52,
   54,
   57,
   38,
   45,
   19,
   24,
   23,
   15,
   23,
   24,
   17,
   0};
   Double_t Graph_from_bjet_pt_tight_felx3025[51] = {
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
   Double_t Graph_from_bjet_pt_tight_fely3025[51] = {
   0,
   0,
   0,
   0,
   79.15807,
   98.94443,
   101.843,
   101.5579,
   99.59418,
   94.49339,
   89.35883,
   82.24962,
   77.83315,
   73.04793,
   67.49815,
   61.98387,
   56.85068,
   51.33225,
   47.12749,
   43.64631,
   39.30649,
   36.98648,
   33.42155,
   29.61419,
   26.58947,
   24.43358,
   23.25941,
   20.54264,
   18.35756,
   17.88854,
   14.79865,
   13.88069,
   13.29184,
   10.89359,
   11.43114,
   10.98501,
   9.522026,
   8.165035,
   7.187977,
   7.325785,
   7.527768,
   6.137282,
   6.68331,
   4.320299,
   4.864704,
   4.760806,
   3.829449,
   4.760806,
   4.864704,
   4.082258,
   0};
   Double_t Graph_from_bjet_pt_tight_fehx3025[51] = {
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
   Double_t Graph_from_bjet_pt_tight_fehy3025[51] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   79.15807,
   98.94443,
   101.843,
   101.5579,
   99.59418,
   94.49339,
   89.35883,
   82.24962,
   77.83315,
   73.04793,
   67.49815,
   61.98387,
   56.85068,
   51.33225,
   47.12749,
   43.64631,
   39.30649,
   36.98648,
   33.42155,
   29.61419,
   26.58947,
   24.43358,
   23.25941,
   20.54264,
   18.35756,
   17.88854,
   14.79865,
   14.91678,
   14.32952,
   11.93955,
   12.47494,
   12.03058,
   10.57459,
   9.226295,
   8.257518,
   8.394025,
   8.594187,
   7.218633,
   7.758066,
   5.435307,
   5.967055,
   5.865355,
   4.958839,
   5.865355,
   5.967055,
   5.203825,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_bjet_pt_tight_fx3025,Graph_from_bjet_pt_tight_fy3025,Graph_from_bjet_pt_tight_felx3025,Graph_from_bjet_pt_tight_fehx3025,Graph_from_bjet_pt_tight_fely3025,Graph_from_bjet_pt_tight_fehy3025);
   grae->SetName("Graph_from_bjet_pt_tight");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_pt_tight3025 = new TH1F("Graph_Graph_from_bjet_pt_tight3025","Data",100,0,385);
   Graph_Graph_from_bjet_pt_tight3025->SetMinimum(0);
   Graph_Graph_from_bjet_pt_tight3025->SetMaximum(11521.23);
   Graph_Graph_from_bjet_pt_tight3025->SetDirectory(0);
   Graph_Graph_from_bjet_pt_tight3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_pt_tight3025->SetLineColor(ci);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_pt_tight3025);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_pt_tight","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_pt_tight_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_pt_tight_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_pt_tight_DY","DY","f");

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
   entry=leg->AddEntry("bjet_pt_tight_W","W","f");

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
   entry=leg->AddEntry("bjet_pt_tight_Single top","Single top","f");

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
   
   TH1F *ratioframe__91 = new TH1F("ratioframe__91","t#bar{t}",50,0,350);
   ratioframe__91->SetMinimum(0.46);
   ratioframe__91->SetMaximum(1.54);
   ratioframe__91->SetEntries(37306);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetMarkerColor(ci);
   ratioframe__91->GetXaxis()->SetTitle("pt [GeV]");
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
   
   Double_t Graph_from_ratio_fx3026[50] = {
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
   Double_t Graph_from_ratio_fy3026[50] = {
   0,
   0,
   0,
   0,
   0.9081123,
   0.9180919,
   0.8866885,
   0.8927828,
   0.9611129,
   0.8993837,
   0.8907148,
   0.855619,
   0.8831034,
   0.854808,
   0.8640032,
   0.8522332,
   0.829125,
   0.8303771,
   0.8292337,
   0.8910414,
   0.7705202,
   0.8468221,
   0.8215536,
   0.8056666,
   0.8205515,
   0.7750552,
   0.9186013,
   0.7827334,
   0.8944556,
   0.7542781,
   0.6745443,
   0.7239277,
   0.7001113,
   0.577336,
   0.8558279,
   0.7849653,
   0.6931907,
   0.7091322,
   0.3995462,
   0.6456134,
   0.6191354,
   0.6037249,
   0.5493976,
   0.7354442,
   0.7539728,
   0.6926002,
   0.5964812,
   0.9750146,
   2.478062,
   1.193856};
   Double_t Graph_from_ratio_felx3026[50] = {
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
   Double_t Graph_from_ratio_fely3026[50] = {
   0,
   0,
   0,
   0,
   0.02430946,
   0.0196572,
   0.01817058,
   0.01837359,
   0.02071978,
   0.01991487,
   0.02090163,
   0.02144744,
   0.02359824,
   0.02406203,
   0.02645529,
   0.02821879,
   0.02971021,
   0.03286916,
   0.03572897,
   0.04263071,
   0.03935006,
   0.04694606,
   0.04978931,
   0.05477827,
   0.06247908,
   0.06303994,
   0.0833945,
   0.07547222,
   0.1023001,
   0.08263801,
   0.08512028,
   0.1004862,
   0.10094,
   0.09433566,
   0.1522272,
   0.1423692,
   0.134173,
   0.1674606,
   0.1021205,
   0.1617958,
   0.1480913,
   0.1767343,
   0.1433394,
   0.3160622,
   0.3086496,
   0.2645799,
   0.2662196,
   0.424073,
   1.434323,
   0.618668};
   Double_t Graph_from_ratio_fehx3026[50] = {
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
   Double_t Graph_from_ratio_fehy3026[50] = {
   0,
   0,
   0,
   0,
   0.02430946,
   0.0196572,
   0.01817058,
   0.01837359,
   0.02071978,
   0.01991487,
   0.02090163,
   0.02144744,
   0.02359824,
   0.02406203,
   0.02645529,
   0.02821879,
   0.02971021,
   0.03286916,
   0.03572897,
   0.04263071,
   0.03935006,
   0.04694606,
   0.04978931,
   0.05477827,
   0.06247908,
   0.06303994,
   0.0833945,
   0.07547222,
   0.1023001,
   0.08263801,
   0.08512028,
   0.1004862,
   0.10094,
   0.09433566,
   0.1522272,
   0.1423692,
   0.134173,
   0.1674606,
   0.1021205,
   0.1617958,
   0.1480913,
   0.1767343,
   0.1433394,
   0.3160622,
   0.3086496,
   0.2645799,
   0.2662196,
   0.424073,
   1.434323,
   0.618668};
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3026,Graph_from_ratio_fy3026,Graph_from_ratio_felx3026,Graph_from_ratio_fehx3026,Graph_from_ratio_fely3026,Graph_from_ratio_fehy3026);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3026 = new TH1F("Graph_Graph_from_ratio3026","Data",100,0,385);
   Graph_Graph_from_ratio3026->SetMinimum(0);
   Graph_Graph_from_ratio3026->SetMaximum(4.303623);
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
