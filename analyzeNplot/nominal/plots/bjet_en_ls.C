void bjet_en_ls()
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
   p1->Range(2.421687,-56.11739,7.240964,412.3609);
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
   
   TH1F *frame__29 = new TH1F("frame__29","t#bar{t}",20,3,7);
   frame__29->SetMinimum(0.1);
   frame__29->SetMaximum(407.6761);
   frame__29->SetEntries(504712);
   frame__29->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__29->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__29->SetMarkerColor(ci);
   frame__29->GetXaxis()->SetTitle("log(E)");
   frame__29->GetXaxis()->SetLabelFont(42);
   frame__29->GetXaxis()->SetLabelSize(0.035);
   frame__29->GetXaxis()->SetTitleSize(0.035);
   frame__29->GetXaxis()->SetTitleFont(42);
   frame__29->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
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
   
   TH1F *mc_stack_5 = new TH1F("mc_stack_5","mc",20,3,7);
   mc_stack_5->SetMinimum(-6.350547e-09);
   mc_stack_5->SetMaximum(329.2768);
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
   
   
   TH1F *bjet_en_ls_t#bar{t}__30 = new TH1F("bjet_en_ls_t#bar{t}__30","t#bar{t}",20,3,7);
   bjet_en_ls_t#bar{t}__30->SetBinContent(3,101.726);
   bjet_en_ls_t#bar{t}__30->SetBinContent(4,217.6446);
   bjet_en_ls_t#bar{t}__30->SetBinContent(5,278.5866);
   bjet_en_ls_t#bar{t}__30->SetBinContent(6,300.4712);
   bjet_en_ls_t#bar{t}__30->SetBinContent(7,296.39);
   bjet_en_ls_t#bar{t}__30->SetBinContent(8,263.5332);
   bjet_en_ls_t#bar{t}__30->SetBinContent(9,213.4774);
   bjet_en_ls_t#bar{t}__30->SetBinContent(10,158.9293);
   bjet_en_ls_t#bar{t}__30->SetBinContent(11,109.1686);
   bjet_en_ls_t#bar{t}__30->SetBinContent(12,68.41964);
   bjet_en_ls_t#bar{t}__30->SetBinContent(13,40.00941);
   bjet_en_ls_t#bar{t}__30->SetBinContent(14,22.10751);
   bjet_en_ls_t#bar{t}__30->SetBinContent(15,11.39237);
   bjet_en_ls_t#bar{t}__30->SetBinContent(16,5.292575);
   bjet_en_ls_t#bar{t}__30->SetBinContent(17,2.303037);
   bjet_en_ls_t#bar{t}__30->SetBinContent(18,0.8802777);
   bjet_en_ls_t#bar{t}__30->SetBinContent(19,0.3131496);
   bjet_en_ls_t#bar{t}__30->SetBinContent(20,0.1040102);
   bjet_en_ls_t#bar{t}__30->SetBinContent(21,0.03777568);
   bjet_en_ls_t#bar{t}__30->SetBinError(3,1.107091);
   bjet_en_ls_t#bar{t}__30->SetBinError(4,1.484742);
   bjet_en_ls_t#bar{t}__30->SetBinError(5,1.520739);
   bjet_en_ls_t#bar{t}__30->SetBinError(6,1.430766);
   bjet_en_ls_t#bar{t}__30->SetBinError(7,1.286347);
   bjet_en_ls_t#bar{t}__30->SetBinError(8,1.098405);
   bjet_en_ls_t#bar{t}__30->SetBinError(9,0.8955613);
   bjet_en_ls_t#bar{t}__30->SetBinError(10,0.7000145);
   bjet_en_ls_t#bar{t}__30->SetBinError(11,0.5251799);
   bjet_en_ls_t#bar{t}__30->SetBinError(12,0.3767702);
   bjet_en_ls_t#bar{t}__30->SetBinError(13,0.2605594);
   bjet_en_ls_t#bar{t}__30->SetBinError(14,0.1753695);
   bjet_en_ls_t#bar{t}__30->SetBinError(15,0.1140017);
   bjet_en_ls_t#bar{t}__30->SetBinError(16,0.07040047);
   bjet_en_ls_t#bar{t}__30->SetBinError(17,0.04210786);
   bjet_en_ls_t#bar{t}__30->SetBinError(18,0.02350819);
   bjet_en_ls_t#bar{t}__30->SetBinError(19,0.01273738);
   bjet_en_ls_t#bar{t}__30->SetBinError(20,0.006652219);
   bjet_en_ls_t#bar{t}__30->SetBinError(21,0.003500967);
   bjet_en_ls_t#bar{t}__30->SetEntries(497795);
   bjet_en_ls_t#bar{t}__30->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_t#bar{t}__30->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_en_ls_t#bar{t}__30->SetMarkerColor(ci);
   bjet_en_ls_t#bar{t}__30->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_t#bar{t}__30->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_t#bar{t}__30->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_t#bar{t}__30->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_t#bar{t}__30->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_t#bar{t}__30->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_t#bar{t}__30->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_t#bar{t}__30->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_t#bar{t}__30->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_t#bar{t},"hist");
   
   TH1F *bjet_en_ls_Diboson__31 = new TH1F("bjet_en_ls_Diboson__31","Diboson",20,3,7);
   bjet_en_ls_Diboson__31->SetBinContent(3,0.1618578);
   bjet_en_ls_Diboson__31->SetBinContent(4,0.2645217);
   bjet_en_ls_Diboson__31->SetBinContent(5,0.2465337);
   bjet_en_ls_Diboson__31->SetBinContent(6,0.2570269);
   bjet_en_ls_Diboson__31->SetBinContent(7,0.2198612);
   bjet_en_ls_Diboson__31->SetBinContent(8,0.2162986);
   bjet_en_ls_Diboson__31->SetBinContent(9,0.1362677);
   bjet_en_ls_Diboson__31->SetBinContent(10,0.1178704);
   bjet_en_ls_Diboson__31->SetBinContent(11,0.1087008);
   bjet_en_ls_Diboson__31->SetBinContent(12,0.08175425);
   bjet_en_ls_Diboson__31->SetBinContent(13,0.04705652);
   bjet_en_ls_Diboson__31->SetBinContent(14,0.02061631);
   bjet_en_ls_Diboson__31->SetBinContent(15,0.02593931);
   bjet_en_ls_Diboson__31->SetBinContent(16,0.01259065);
   bjet_en_ls_Diboson__31->SetBinContent(17,0.01085466);
   bjet_en_ls_Diboson__31->SetBinContent(18,0.006534787);
   bjet_en_ls_Diboson__31->SetBinContent(19,0.001953153);
   bjet_en_ls_Diboson__31->SetBinContent(20,0.003084835);
   bjet_en_ls_Diboson__31->SetBinContent(21,0.001012414);
   bjet_en_ls_Diboson__31->SetBinError(3,0.04193897);
   bjet_en_ls_Diboson__31->SetBinError(4,0.05110378);
   bjet_en_ls_Diboson__31->SetBinError(5,0.0441194);
   bjet_en_ls_Diboson__31->SetBinError(6,0.04082603);
   bjet_en_ls_Diboson__31->SetBinError(7,0.03371898);
   bjet_en_ls_Diboson__31->SetBinError(8,0.03104429);
   bjet_en_ls_Diboson__31->SetBinError(9,0.02184494);
   bjet_en_ls_Diboson__31->SetBinError(10,0.01812099);
   bjet_en_ls_Diboson__31->SetBinError(11,0.01596992);
   bjet_en_ls_Diboson__31->SetBinError(12,0.0128227);
   bjet_en_ls_Diboson__31->SetBinError(13,0.008805096);
   bjet_en_ls_Diboson__31->SetBinError(14,0.005235157);
   bjet_en_ls_Diboson__31->SetBinError(15,0.005324845);
   bjet_en_ls_Diboson__31->SetBinError(16,0.003310366);
   bjet_en_ls_Diboson__31->SetBinError(17,0.002921473);
   bjet_en_ls_Diboson__31->SetBinError(18,0.001943766);
   bjet_en_ls_Diboson__31->SetBinError(19,0.0009798904);
   bjet_en_ls_Diboson__31->SetBinError(20,0.001100304);
   bjet_en_ls_Diboson__31->SetBinError(21,0.0005755965);
   bjet_en_ls_Diboson__31->SetEntries(540);
   bjet_en_ls_Diboson__31->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_Diboson__31->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_en_ls_Diboson__31->SetMarkerColor(ci);
   bjet_en_ls_Diboson__31->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_Diboson__31->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_Diboson__31->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_Diboson__31->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_Diboson__31->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_Diboson__31->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_Diboson__31->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_Diboson__31->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_Diboson__31->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_Diboson__31->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_Diboson__31->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_Diboson__31->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_Diboson__31->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_Diboson__31->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_Diboson,"hist");
   
   TH1F *bjet_en_ls_DY__32 = new TH1F("bjet_en_ls_DY__32","DY",20,3,7);
   bjet_en_ls_DY__32->SetBinContent(3,0.6452885);
   bjet_en_ls_DY__32->SetBinContent(4,0.3716342);
   bjet_en_ls_DY__32->SetBinContent(5,0.6779599);
   bjet_en_ls_DY__32->SetBinContent(6,0.8790441);
   bjet_en_ls_DY__32->SetBinContent(7,0.8698856);
   bjet_en_ls_DY__32->SetBinContent(8,0.4001417);
   bjet_en_ls_DY__32->SetBinContent(10,0.1302662);
   bjet_en_ls_DY__32->SetBinContent(11,0.1505879);
   bjet_en_ls_DY__32->SetBinContent(12,0.1734468);
   bjet_en_ls_DY__32->SetBinContent(13,0.06326108);
   bjet_en_ls_DY__32->SetBinContent(14,0.07642314);
   bjet_en_ls_DY__32->SetBinContent(15,0.04662532);
   bjet_en_ls_DY__32->SetBinContent(16,0.04334441);
   bjet_en_ls_DY__32->SetBinContent(17,0.0006869603);
   bjet_en_ls_DY__32->SetBinContent(18,0.03044141);
   bjet_en_ls_DY__32->SetBinError(3,0.6452885);
   bjet_en_ls_DY__32->SetBinError(4,0.3716342);
   bjet_en_ls_DY__32->SetBinError(5,0.4797046);
   bjet_en_ls_DY__32->SetBinError(6,0.5084554);
   bjet_en_ls_DY__32->SetBinError(7,0.4352183);
   bjet_en_ls_DY__32->SetBinError(8,0.2835991);
   bjet_en_ls_DY__32->SetBinError(10,0.1302662);
   bjet_en_ls_DY__32->SetBinError(11,0.1101712);
   bjet_en_ls_DY__32->SetBinError(12,0.122679);
   bjet_en_ls_DY__32->SetBinError(13,0.06326108);
   bjet_en_ls_DY__32->SetBinError(14,0.07642314);
   bjet_en_ls_DY__32->SetBinError(15,0.04662532);
   bjet_en_ls_DY__32->SetBinError(16,0.04334441);
   bjet_en_ls_DY__32->SetBinError(17,0.0006869603);
   bjet_en_ls_DY__32->SetBinError(18,0.03044141);
   bjet_en_ls_DY__32->SetEntries(24);
   bjet_en_ls_DY__32->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_DY__32->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_en_ls_DY__32->SetMarkerColor(ci);
   bjet_en_ls_DY__32->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_DY__32->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_DY__32->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_DY__32->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_DY__32->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_DY__32->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_DY__32->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_DY__32->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_DY__32->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_DY__32->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_DY__32->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_DY__32->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_DY__32->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_DY__32->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_DY,"hist");
   
   TH1F *bjet_en_ls_W__33 = new TH1F("bjet_en_ls_W__33","W",20,3,7);
   bjet_en_ls_W__33->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_W__33->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_en_ls_W__33->SetMarkerColor(ci);
   bjet_en_ls_W__33->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_W__33->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_W__33->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_W__33->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_W__33->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_W__33->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_W__33->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_W__33->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_W__33->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_W__33->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_W__33->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_W__33->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_W__33->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_W__33->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_W,"hist");
   
   TH1F *bjet_en_ls_SinglesPtop__34 = new TH1F("bjet_en_ls_SinglesPtop__34","Single top",20,3,7);
   bjet_en_ls_SinglesPtop__34->SetBinContent(3,4.501932);
   bjet_en_ls_SinglesPtop__34->SetBinContent(4,8.907283);
   bjet_en_ls_SinglesPtop__34->SetBinContent(5,12.13217);
   bjet_en_ls_SinglesPtop__34->SetBinContent(6,11.98973);
   bjet_en_ls_SinglesPtop__34->SetBinContent(7,12.02839);
   bjet_en_ls_SinglesPtop__34->SetBinContent(8,10.90096);
   bjet_en_ls_SinglesPtop__34->SetBinContent(9,7.778194);
   bjet_en_ls_SinglesPtop__34->SetBinContent(10,6.298899);
   bjet_en_ls_SinglesPtop__34->SetBinContent(11,4.371594);
   bjet_en_ls_SinglesPtop__34->SetBinContent(12,2.924732);
   bjet_en_ls_SinglesPtop__34->SetBinContent(13,1.708796);
   bjet_en_ls_SinglesPtop__34->SetBinContent(14,0.9852901);
   bjet_en_ls_SinglesPtop__34->SetBinContent(15,0.5935756);
   bjet_en_ls_SinglesPtop__34->SetBinContent(16,0.3001427);
   bjet_en_ls_SinglesPtop__34->SetBinContent(17,0.1482982);
   bjet_en_ls_SinglesPtop__34->SetBinContent(18,0.06343637);
   bjet_en_ls_SinglesPtop__34->SetBinContent(19,0.03435365);
   bjet_en_ls_SinglesPtop__34->SetBinContent(20,0.01041042);
   bjet_en_ls_SinglesPtop__34->SetBinContent(21,0.01080044);
   bjet_en_ls_SinglesPtop__34->SetBinError(3,0.4195865);
   bjet_en_ls_SinglesPtop__34->SetBinError(4,0.5385947);
   bjet_en_ls_SinglesPtop__34->SetBinError(5,0.5744133);
   bjet_en_ls_SinglesPtop__34->SetBinError(6,0.5150717);
   bjet_en_ls_SinglesPtop__34->SetBinError(7,0.4677782);
   bjet_en_ls_SinglesPtop__34->SetBinError(8,0.4039621);
   bjet_en_ls_SinglesPtop__34->SetBinError(9,0.3076721);
   bjet_en_ls_SinglesPtop__34->SetBinError(10,0.2517367);
   bjet_en_ls_SinglesPtop__34->SetBinError(11,0.1896687);
   bjet_en_ls_SinglesPtop__34->SetBinError(12,0.1411629);
   bjet_en_ls_SinglesPtop__34->SetBinError(13,0.09746688);
   bjet_en_ls_SinglesPtop__34->SetBinError(14,0.0660626);
   bjet_en_ls_SinglesPtop__34->SetBinError(15,0.04703315);
   bjet_en_ls_SinglesPtop__34->SetBinError(16,0.03003655);
   bjet_en_ls_SinglesPtop__34->SetBinError(17,0.01928935);
   bjet_en_ls_SinglesPtop__34->SetBinError(18,0.01114063);
   bjet_en_ls_SinglesPtop__34->SetBinError(19,0.007625936);
   bjet_en_ls_SinglesPtop__34->SetBinError(20,0.003630513);
   bjet_en_ls_SinglesPtop__34->SetBinError(21,0.003447098);
   bjet_en_ls_SinglesPtop__34->SetEntries(6353);
   bjet_en_ls_SinglesPtop__34->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_SinglesPtop__34->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_en_ls_SinglesPtop__34->SetMarkerColor(ci);
   bjet_en_ls_SinglesPtop__34->GetXaxis()->SetTitle("log(E)");
   bjet_en_ls_SinglesPtop__34->GetXaxis()->SetLabelFont(42);
   bjet_en_ls_SinglesPtop__34->GetXaxis()->SetLabelSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetXaxis()->SetTitleSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetXaxis()->SetTitleFont(42);
   bjet_en_ls_SinglesPtop__34->GetYaxis()->SetTitle("  1/E dN_{b jets}/dlog(E)");
   bjet_en_ls_SinglesPtop__34->GetYaxis()->SetLabelFont(42);
   bjet_en_ls_SinglesPtop__34->GetYaxis()->SetLabelSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetYaxis()->SetTitleSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetYaxis()->SetTitleFont(42);
   bjet_en_ls_SinglesPtop__34->GetZaxis()->SetLabelFont(42);
   bjet_en_ls_SinglesPtop__34->GetZaxis()->SetLabelSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetZaxis()->SetTitleSize(0.035);
   bjet_en_ls_SinglesPtop__34->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_en_ls_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_en_ls_fx3009[21] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   0};
   Double_t Graph_from_bjet_en_ls_fy3009[21] = {
   0,
   0,
   92.7945,
   197.9431,
   255.2428,
   284.5028,
   281.9935,
   252.0936,
   202.7139,
   149.4754,
   101.0653,
   62.26832,
   36.53798,
   20.55606,
   10.39831,
   4.765559,
   2.074745,
   0.8329404,
   0.2820291,
   0.08633442,
   0};
   Double_t Graph_from_bjet_en_ls_felx3009[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjet_en_ls_fely3009[21] = {
   0,
   0,
   9.615798,
   14.05763,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   12.21258,
   10.03667,
   7.869935,
   6.016987,
   4.496794,
   3.172168,
   2.104764,
   1.320296,
   0.7249367,
   0.2810206,
   0.08633442,
   0};
   Double_t Graph_from_bjet_en_ls_fehx3009[21] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0};
   Double_t Graph_from_bjet_en_ls_fehy3009[21] = {
   1.841055,
   1.841055,
   10.66785,
   15.09326,
   15.97632,
   16.86721,
   16.79266,
   15.87745,
   14.23776,
   13.25358,
   11.08654,
   8.933481,
   7.099949,
   5.607373,
   4.327417,
   3.332876,
   2.66048,
   2.234301,
   1.990576,
   1.889246,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(21,Graph_from_bjet_en_ls_fx3009,Graph_from_bjet_en_ls_fy3009,Graph_from_bjet_en_ls_felx3009,Graph_from_bjet_en_ls_fehx3009,Graph_from_bjet_en_ls_fely3009,Graph_from_bjet_en_ls_fehy3009);
   grae->SetName("Graph_from_bjet_en_ls");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_en_ls3009 = new TH1F("Graph_Graph_from_bjet_en_ls3009","Data",100,0,7.7);
   Graph_Graph_from_bjet_en_ls3009->SetMinimum(0);
   Graph_Graph_from_bjet_en_ls3009->SetMaximum(331.507);
   Graph_Graph_from_bjet_en_ls3009->SetDirectory(0);
   Graph_Graph_from_bjet_en_ls3009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_en_ls3009->SetLineColor(ci);
   Graph_Graph_from_bjet_en_ls3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls3009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls3009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_en_ls3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_en_ls3009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_en_ls3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_en_ls3009);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_en_ls","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_en_ls_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_en_ls_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_en_ls_DY","DY","f");

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
   entry=leg->AddEntry("bjet_en_ls_W","W","f");

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
   entry=leg->AddEntry("bjet_en_ls_Single top","Single top","f");

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
   p2->Range(2.421687,0.4485106,7.240964,1.597447);
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
   
   TH1F *ratioframe__35 = new TH1F("ratioframe__35","t#bar{t}",20,3,7);
   ratioframe__35->SetMinimum(0.46);
   ratioframe__35->SetMaximum(1.54);
   ratioframe__35->SetEntries(504712);

   ci = TColor::GetColor("#cc0000");
   ratioframe__35->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__35->SetMarkerColor(ci);
   ratioframe__35->GetXaxis()->SetTitle("log(E)");
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
   
   Double_t Graph_from_ratio_fx3010[20] = {
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9};
   Double_t Graph_from_ratio_fy3010[20] = {
   0,
   0,
   0.8669539,
   0.8712741,
   0.8751883,
   0.9072242,
   0.9111022,
   0.916535,
   0.9156343,
   0.9033036,
   0.8880993,
   0.8696744,
   0.8735182,
   0.8864251,
   0.8623216,
   0.8436629,
   0.8424071,
   0.8493409,
   0.807051,
   0.734727};
   Double_t Graph_from_ratio_felx3010[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fely3010[20] = {
   0,
   0,
   0.018907,
   0.01153854,
   0.009306664,
   0.008337363,
   0.007611873,
   0.007301101,
   0.007292923,
   0.007614707,
   0.008230862,
   0.009342801,
   0.01103697,
   0.01375793,
   0.01696089,
   0.02265326,
   0.02985063,
   0.05032904,
   0.06390765,
   0.09346916};
   Double_t Graph_from_ratio_fehx3010[20] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_ratio_fehy3010[20] = {
   0,
   0,
   0.018907,
   0.01153854,
   0.009306664,
   0.008337363,
   0.007611873,
   0.007301101,
   0.007292923,
   0.007614707,
   0.008230862,
   0.009342801,
   0.01103697,
   0.01375793,
   0.01696089,
   0.02265326,
   0.02985063,
   0.05032904,
   0.06390765,
   0.09346916};
   grae = new TGraphAsymmErrors(20,Graph_from_ratio_fx3010,Graph_from_ratio_fy3010,Graph_from_ratio_felx3010,Graph_from_ratio_fehx3010,Graph_from_ratio_fely3010,Graph_from_ratio_fehy3010);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3010 = new TH1F("Graph_Graph_from_ratio3010","Data",100,2.6,7.4);
   Graph_Graph_from_ratio3010->SetMinimum(0);
   Graph_Graph_from_ratio3010->SetMaximum(1.01622);
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
