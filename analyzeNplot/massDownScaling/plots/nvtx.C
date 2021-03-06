void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 18:00:29 2018) by ROOT version6.08/07
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
   p1->Range(-5.783133,-1803.748,42.40964,13228.32);
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
   
   TH1F *frame__71 = new TH1F("frame__71","t#bar{t}",40,0,40);
   frame__71->SetMinimum(0.1);
   frame__71->SetMaximum(13078);
   frame__71->SetEntries(37745);
   frame__71->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__71->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__71->SetMarkerColor(ci);
   frame__71->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__71->GetXaxis()->SetLabelFont(42);
   frame__71->GetXaxis()->SetLabelSize(0.035);
   frame__71->GetXaxis()->SetTitleSize(0.035);
   frame__71->GetXaxis()->SetTitleFont(42);
   frame__71->GetYaxis()->SetTitle(" Events");
   frame__71->GetYaxis()->SetNoExponent();
   frame__71->GetYaxis()->SetLabelFont(42);
   frame__71->GetYaxis()->SetTitleSize(0.045);
   frame__71->GetYaxis()->SetTitleOffset(1.3);
   frame__71->GetYaxis()->SetTitleFont(42);
   frame__71->GetZaxis()->SetLabelFont(42);
   frame__71->GetZaxis()->SetLabelSize(0.035);
   frame__71->GetZaxis()->SetTitleSize(0.035);
   frame__71->GetZaxis()->SetTitleFont(42);
   frame__71->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",40,0,40);
   mc_stack_11->SetMinimum(-4.966911e-06);
   mc_stack_11->SetMaximum(9816.769);
   mc_stack_11->SetDirectory(0);
   mc_stack_11->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_11->SetLineColor(ci);
   mc_stack_11->GetXaxis()->SetLabelFont(42);
   mc_stack_11->GetXaxis()->SetLabelSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleFont(42);
   mc_stack_11->GetYaxis()->SetLabelFont(42);
   mc_stack_11->GetYaxis()->SetLabelSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleFont(42);
   mc_stack_11->GetZaxis()->SetLabelFont(42);
   mc_stack_11->GetZaxis()->SetLabelSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_11);
   
   
   TH1F *nvtx_t#bar{t}__72 = new TH1F("nvtx_t#bar{t}__72","t#bar{t}",40,0,40);
   nvtx_t#bar{t}__72->SetBinContent(3,23.89087);
   nvtx_t#bar{t}__72->SetBinContent(4,34.13523);
   nvtx_t#bar{t}__72->SetBinContent(5,80.65942);
   nvtx_t#bar{t}__72->SetBinContent(6,274.6113);
   nvtx_t#bar{t}__72->SetBinContent(7,539.6783);
   nvtx_t#bar{t}__72->SetBinContent(8,925.8459);
   nvtx_t#bar{t}__72->SetBinContent(9,1451.26);
   nvtx_t#bar{t}__72->SetBinContent(10,2216.971);
   nvtx_t#bar{t}__72->SetBinContent(11,3457.926);
   nvtx_t#bar{t}__72->SetBinContent(12,4269.321);
   nvtx_t#bar{t}__72->SetBinContent(13,5207.083);
   nvtx_t#bar{t}__72->SetBinContent(14,6103.664);
   nvtx_t#bar{t}__72->SetBinContent(15,7068.729);
   nvtx_t#bar{t}__72->SetBinContent(16,8014.771);
   nvtx_t#bar{t}__72->SetBinContent(17,8248.42);
   nvtx_t#bar{t}__72->SetBinContent(18,8721.931);
   nvtx_t#bar{t}__72->SetBinContent(19,8737.475);
   nvtx_t#bar{t}__72->SetBinContent(20,8853.142);
   nvtx_t#bar{t}__72->SetBinContent(21,8395.39);
   nvtx_t#bar{t}__72->SetBinContent(22,7600.212);
   nvtx_t#bar{t}__72->SetBinContent(23,7056.609);
   nvtx_t#bar{t}__72->SetBinContent(24,6712.036);
   nvtx_t#bar{t}__72->SetBinContent(25,6134.713);
   nvtx_t#bar{t}__72->SetBinContent(26,5354.206);
   nvtx_t#bar{t}__72->SetBinContent(27,4433.825);
   nvtx_t#bar{t}__72->SetBinContent(28,3829.991);
   nvtx_t#bar{t}__72->SetBinContent(29,3374.046);
   nvtx_t#bar{t}__72->SetBinContent(30,3070.197);
   nvtx_t#bar{t}__72->SetBinContent(31,2773.627);
   nvtx_t#bar{t}__72->SetBinContent(32,2028.123);
   nvtx_t#bar{t}__72->SetBinContent(33,1831.225);
   nvtx_t#bar{t}__72->SetBinContent(34,1597.064);
   nvtx_t#bar{t}__72->SetBinContent(35,1408.37);
   nvtx_t#bar{t}__72->SetBinContent(36,1278.935);
   nvtx_t#bar{t}__72->SetBinContent(37,963.2408);
   nvtx_t#bar{t}__72->SetBinContent(38,679.5133);
   nvtx_t#bar{t}__72->SetBinContent(39,684.1141);
   nvtx_t#bar{t}__72->SetBinContent(40,616.6508);
   nvtx_t#bar{t}__72->SetBinContent(41,3080.712);
   nvtx_t#bar{t}__72->SetBinError(3,11.47168);
   nvtx_t#bar{t}__72->SetBinError(4,12.9902);
   nvtx_t#bar{t}__72->SetBinError(5,20.8348);
   nvtx_t#bar{t}__72->SetBinError(6,37.86973);
   nvtx_t#bar{t}__72->SetBinError(7,53.79586);
   nvtx_t#bar{t}__72->SetBinError(8,69.80231);
   nvtx_t#bar{t}__72->SetBinError(9,88.15879);
   nvtx_t#bar{t}__72->SetBinError(10,108.8501);
   nvtx_t#bar{t}__72->SetBinError(11,135.3457);
   nvtx_t#bar{t}__72->SetBinError(12,151.72);
   nvtx_t#bar{t}__72->SetBinError(13,166.5803);
   nvtx_t#bar{t}__72->SetBinError(14,180.574);
   nvtx_t#bar{t}__72->SetBinError(15,194.4626);
   nvtx_t#bar{t}__72->SetBinError(16,206.9654);
   nvtx_t#bar{t}__72->SetBinError(17,209.8611);
   nvtx_t#bar{t}__72->SetBinError(18,215.9669);
   nvtx_t#bar{t}__72->SetBinError(19,216.1058);
   nvtx_t#bar{t}__72->SetBinError(20,217.4035);
   nvtx_t#bar{t}__72->SetBinError(21,211.6896);
   nvtx_t#bar{t}__72->SetBinError(22,201.5024);
   nvtx_t#bar{t}__72->SetBinError(23,193.6433);
   nvtx_t#bar{t}__72->SetBinError(24,189.0866);
   nvtx_t#bar{t}__72->SetBinError(25,180.9708);
   nvtx_t#bar{t}__72->SetBinError(26,169.5936);
   nvtx_t#bar{t}__72->SetBinError(27,153.981);
   nvtx_t#bar{t}__72->SetBinError(28,143.376);
   nvtx_t#bar{t}__72->SetBinError(29,134.1933);
   nvtx_t#bar{t}__72->SetBinError(30,128.1275);
   nvtx_t#bar{t}__72->SetBinError(31,121.6919);
   nvtx_t#bar{t}__72->SetBinError(32,103.6696);
   nvtx_t#bar{t}__72->SetBinError(33,98.69635);
   nvtx_t#bar{t}__72->SetBinError(34,92.77322);
   nvtx_t#bar{t}__72->SetBinError(35,86.59675);
   nvtx_t#bar{t}__72->SetBinError(36,82.64379);
   nvtx_t#bar{t}__72->SetBinError(37,71.45499);
   nvtx_t#bar{t}__72->SetBinError(38,59.9142);
   nvtx_t#bar{t}__72->SetBinError(39,59.77764);
   nvtx_t#bar{t}__72->SetBinError(40,57.30525);
   nvtx_t#bar{t}__72->SetBinError(41,127.788);
   nvtx_t#bar{t}__72->SetEntries(29530);
   nvtx_t#bar{t}__72->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetMarkerColor(ci);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t},"hist");
   
   TH1F *nvtx_Diboson__73 = new TH1F("nvtx_Diboson__73","Diboson",40,0,40);
   nvtx_Diboson__73->SetBinContent(5,0.3458666);
   nvtx_Diboson__73->SetBinContent(6,1.070833);
   nvtx_Diboson__73->SetBinContent(7,1.25563);
   nvtx_Diboson__73->SetBinContent(8,3.929268);
   nvtx_Diboson__73->SetBinContent(9,7.460946);
   nvtx_Diboson__73->SetBinContent(10,11.22602);
   nvtx_Diboson__73->SetBinContent(11,17.76708);
   nvtx_Diboson__73->SetBinContent(12,18.39883);
   nvtx_Diboson__73->SetBinContent(13,24.72947);
   nvtx_Diboson__73->SetBinContent(14,20.53632);
   nvtx_Diboson__73->SetBinContent(15,27.0309);
   nvtx_Diboson__73->SetBinContent(16,33.77374);
   nvtx_Diboson__73->SetBinContent(17,37.44614);
   nvtx_Diboson__73->SetBinContent(18,34.99107);
   nvtx_Diboson__73->SetBinContent(19,38.84356);
   nvtx_Diboson__73->SetBinContent(20,40.6216);
   nvtx_Diboson__73->SetBinContent(21,39.22288);
   nvtx_Diboson__73->SetBinContent(22,34.12729);
   nvtx_Diboson__73->SetBinContent(23,37.52847);
   nvtx_Diboson__73->SetBinContent(24,35.20229);
   nvtx_Diboson__73->SetBinContent(25,28.71541);
   nvtx_Diboson__73->SetBinContent(26,30.87716);
   nvtx_Diboson__73->SetBinContent(27,21.90034);
   nvtx_Diboson__73->SetBinContent(28,23.53425);
   nvtx_Diboson__73->SetBinContent(29,20.33954);
   nvtx_Diboson__73->SetBinContent(30,21.11939);
   nvtx_Diboson__73->SetBinContent(31,16.05353);
   nvtx_Diboson__73->SetBinContent(32,15.84488);
   nvtx_Diboson__73->SetBinContent(33,14.41199);
   nvtx_Diboson__73->SetBinContent(34,10.16436);
   nvtx_Diboson__73->SetBinContent(35,8.74406);
   nvtx_Diboson__73->SetBinContent(36,9.467414);
   nvtx_Diboson__73->SetBinContent(37,4.448436);
   nvtx_Diboson__73->SetBinContent(38,5.798054);
   nvtx_Diboson__73->SetBinContent(39,6.617197);
   nvtx_Diboson__73->SetBinContent(40,5.444748);
   nvtx_Diboson__73->SetBinContent(41,28.90443);
   nvtx_Diboson__73->SetBinError(5,0.3458666);
   nvtx_Diboson__73->SetBinError(6,0.6206393);
   nvtx_Diboson__73->SetBinError(7,0.7251895);
   nvtx_Diboson__73->SetBinError(8,1.247041);
   nvtx_Diboson__73->SetBinError(9,1.706192);
   nvtx_Diboson__73->SetBinError(10,2.096339);
   nvtx_Diboson__73->SetBinError(11,2.626537);
   nvtx_Diboson__73->SetBinError(12,2.688426);
   nvtx_Diboson__73->SetBinError(13,3.072111);
   nvtx_Diboson__73->SetBinError(14,2.82701);
   nvtx_Diboson__73->SetBinError(15,3.262514);
   nvtx_Diboson__73->SetBinError(16,3.641051);
   nvtx_Diboson__73->SetBinError(17,3.852414);
   nvtx_Diboson__73->SetBinError(18,3.721336);
   nvtx_Diboson__73->SetBinError(19,3.886959);
   nvtx_Diboson__73->SetBinError(20,3.973647);
   nvtx_Diboson__73->SetBinError(21,3.897302);
   nvtx_Diboson__73->SetBinError(22,3.66471);
   nvtx_Diboson__73->SetBinError(23,3.825897);
   nvtx_Diboson__73->SetBinError(24,3.756231);
   nvtx_Diboson__73->SetBinError(25,3.350143);
   nvtx_Diboson__73->SetBinError(26,3.468913);
   nvtx_Diboson__73->SetBinError(27,2.940617);
   nvtx_Diboson__73->SetBinError(28,3.008215);
   nvtx_Diboson__73->SetBinError(29,2.784882);
   nvtx_Diboson__73->SetBinError(30,2.846972);
   nvtx_Diboson__73->SetBinError(31,2.517506);
   nvtx_Diboson__73->SetBinError(32,2.473578);
   nvtx_Diboson__73->SetBinError(33,2.393795);
   nvtx_Diboson__73->SetBinError(34,1.95805);
   nvtx_Diboson__73->SetBinError(35,1.849988);
   nvtx_Diboson__73->SetBinError(36,1.9017);
   nvtx_Diboson__73->SetBinError(37,1.290849);
   nvtx_Diboson__73->SetBinError(38,1.502644);
   nvtx_Diboson__73->SetBinError(39,1.618418);
   nvtx_Diboson__73->SetBinError(40,1.464176);
   nvtx_Diboson__73->SetBinError(41,3.357181);
   nvtx_Diboson__73->SetEntries(2069);
   nvtx_Diboson__73->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetMarkerColor(ci);
   nvtx_Diboson__73->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson__73->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson__73->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson,"hist");
   
   TH1F *nvtx_DY__74 = new TH1F("nvtx_DY__74","DY",40,0,40);
   nvtx_DY__74->SetBinContent(11,35.91938);
   nvtx_DY__74->SetBinContent(12,1.557513);
   nvtx_DY__74->SetBinContent(13,56.73566);
   nvtx_DY__74->SetBinContent(14,36.17597);
   nvtx_DY__74->SetBinContent(15,50.57482);
   nvtx_DY__74->SetBinContent(16,17.6052);
   nvtx_DY__74->SetBinContent(17,50.6334);
   nvtx_DY__74->SetBinContent(18,32.86318);
   nvtx_DY__74->SetBinContent(19,24.99549);
   nvtx_DY__74->SetBinContent(20,5.381073);
   nvtx_DY__74->SetBinContent(21,67.22151);
   nvtx_DY__74->SetBinContent(22,30.08006);
   nvtx_DY__74->SetBinContent(23,51.57648);
   nvtx_DY__74->SetBinContent(24,87.01772);
   nvtx_DY__74->SetBinContent(26,34.81777);
   nvtx_DY__74->SetBinContent(27,18.13515);
   nvtx_DY__74->SetBinContent(28,19.7323);
   nvtx_DY__74->SetBinContent(30,37.54446);
   nvtx_DY__74->SetBinContent(31,34.86128);
   nvtx_DY__74->SetBinContent(32,19.86383);
   nvtx_DY__74->SetBinContent(33,0.3027959);
   nvtx_DY__74->SetBinContent(34,33.88914);
   nvtx_DY__74->SetBinContent(36,0.0164301);
   nvtx_DY__74->SetBinContent(37,29.8476);
   nvtx_DY__74->SetBinContent(41,51.97974);
   nvtx_DY__74->SetBinError(11,25.40532);
   nvtx_DY__74->SetBinError(12,1.557513);
   nvtx_DY__74->SetBinError(13,32.78444);
   nvtx_DY__74->SetBinError(14,25.49795);
   nvtx_DY__74->SetBinError(15,28.57373);
   nvtx_DY__74->SetBinError(16,15.7077);
   nvtx_DY__74->SetBinError(17,29.27885);
   nvtx_DY__74->SetBinError(18,23.23863);
   nvtx_DY__74->SetBinError(19,20.19056);
   nvtx_DY__74->SetBinError(20,5.381073);
   nvtx_DY__74->SetBinError(21,33.84481);
   nvtx_DY__74->SetBinError(22,21.28909);
   nvtx_DY__74->SetBinError(23,29.8223);
   nvtx_DY__74->SetBinError(24,38.97006);
   nvtx_DY__74->SetBinError(26,23.30816);
   nvtx_DY__74->SetBinError(27,18.13515);
   nvtx_DY__74->SetBinError(28,19.7323);
   nvtx_DY__74->SetBinError(30,26.55268);
   nvtx_DY__74->SetBinError(31,24.47221);
   nvtx_DY__74->SetBinError(32,19.86383);
   nvtx_DY__74->SetBinError(33,0.3027959);
   nvtx_DY__74->SetBinError(34,23.96337);
   nvtx_DY__74->SetBinError(36,0.0164301);
   nvtx_DY__74->SetBinError(37,21.49461);
   nvtx_DY__74->SetBinError(41,30.09814);
   nvtx_DY__74->SetEntries(59);
   nvtx_DY__74->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetMarkerColor(ci);
   nvtx_DY__74->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY__74->GetXaxis()->SetLabelFont(42);
   nvtx_DY__74->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleFont(42);
   nvtx_DY__74->GetYaxis()->SetTitle(" Events");
   nvtx_DY__74->GetYaxis()->SetLabelFont(42);
   nvtx_DY__74->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY,"hist");
   
   TH1F *nvtx_W__75 = new TH1F("nvtx_W__75","W",40,0,40);
   nvtx_W__75->SetBinContent(15,93.08335);
   nvtx_W__75->SetBinContent(16,85.75913);
   nvtx_W__75->SetBinContent(24,94.07022);
   nvtx_W__75->SetBinContent(26,26.4529);
   nvtx_W__75->SetBinError(15,93.08335);
   nvtx_W__75->SetBinError(16,85.75914);
   nvtx_W__75->SetBinError(24,94.07022);
   nvtx_W__75->SetBinError(26,26.4529);
   nvtx_W__75->SetEntries(4);
   nvtx_W__75->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetMarkerColor(ci);
   nvtx_W__75->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W__75->GetXaxis()->SetLabelFont(42);
   nvtx_W__75->GetXaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleFont(42);
   nvtx_W__75->GetYaxis()->SetTitle(" Events");
   nvtx_W__75->GetYaxis()->SetLabelFont(42);
   nvtx_W__75->GetYaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleFont(42);
   nvtx_W__75->GetZaxis()->SetLabelFont(42);
   nvtx_W__75->GetZaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W,"hist");
   
   TH1F *nvtx_SinglesPtop__76 = new TH1F("nvtx_SinglesPtop__76","Single top",40,0,40);
   nvtx_SinglesPtop__76->SetBinContent(2,1.462832);
   nvtx_SinglesPtop__76->SetBinContent(3,1.553983);
   nvtx_SinglesPtop__76->SetBinContent(5,8.027846);
   nvtx_SinglesPtop__76->SetBinContent(6,10.39446);
   nvtx_SinglesPtop__76->SetBinContent(7,30.73611);
   nvtx_SinglesPtop__76->SetBinContent(8,59.10338);
   nvtx_SinglesPtop__76->SetBinContent(9,75.88745);
   nvtx_SinglesPtop__76->SetBinContent(10,97.60208);
   nvtx_SinglesPtop__76->SetBinContent(11,137.3378);
   nvtx_SinglesPtop__76->SetBinContent(12,206.4207);
   nvtx_SinglesPtop__76->SetBinContent(13,286.9041);
   nvtx_SinglesPtop__76->SetBinContent(14,299.3238);
   nvtx_SinglesPtop__76->SetBinContent(15,360.6423);
   nvtx_SinglesPtop__76->SetBinContent(16,402.756);
   nvtx_SinglesPtop__76->SetBinContent(17,436.7375);
   nvtx_SinglesPtop__76->SetBinContent(18,454.3044);
   nvtx_SinglesPtop__76->SetBinContent(19,419.2292);
   nvtx_SinglesPtop__76->SetBinContent(20,450.1588);
   nvtx_SinglesPtop__76->SetBinContent(21,429.6541);
   nvtx_SinglesPtop__76->SetBinContent(22,394.2374);
   nvtx_SinglesPtop__76->SetBinContent(23,346.1013);
   nvtx_SinglesPtop__76->SetBinContent(24,318.1374);
   nvtx_SinglesPtop__76->SetBinContent(25,303.8838);
   nvtx_SinglesPtop__76->SetBinContent(26,274.0821);
   nvtx_SinglesPtop__76->SetBinContent(27,247.4209);
   nvtx_SinglesPtop__76->SetBinContent(28,192.2236);
   nvtx_SinglesPtop__76->SetBinContent(29,188.4773);
   nvtx_SinglesPtop__76->SetBinContent(30,188.3065);
   nvtx_SinglesPtop__76->SetBinContent(31,155.7251);
   nvtx_SinglesPtop__76->SetBinContent(32,118.74);
   nvtx_SinglesPtop__76->SetBinContent(33,98.21027);
   nvtx_SinglesPtop__76->SetBinContent(34,99.21484);
   nvtx_SinglesPtop__76->SetBinContent(35,66.18439);
   nvtx_SinglesPtop__76->SetBinContent(36,70.1757);
   nvtx_SinglesPtop__76->SetBinContent(37,58.1981);
   nvtx_SinglesPtop__76->SetBinContent(38,45.10076);
   nvtx_SinglesPtop__76->SetBinContent(39,31.01096);
   nvtx_SinglesPtop__76->SetBinContent(40,27.01551);
   nvtx_SinglesPtop__76->SetBinContent(41,151.595);
   nvtx_SinglesPtop__76->SetBinError(2,1.462832);
   nvtx_SinglesPtop__76->SetBinError(3,1.553983);
   nvtx_SinglesPtop__76->SetBinError(5,3.280911);
   nvtx_SinglesPtop__76->SetBinError(6,3.548421);
   nvtx_SinglesPtop__76->SetBinError(7,6.396205);
   nvtx_SinglesPtop__76->SetBinError(8,8.897169);
   nvtx_SinglesPtop__76->SetBinError(9,10.03443);
   nvtx_SinglesPtop__76->SetBinError(10,11.44914);
   nvtx_SinglesPtop__76->SetBinError(11,13.66156);
   nvtx_SinglesPtop__76->SetBinError(12,16.62848);
   nvtx_SinglesPtop__76->SetBinError(13,19.44558);
   nvtx_SinglesPtop__76->SetBinError(14,20.06256);
   nvtx_SinglesPtop__76->SetBinError(15,21.94576);
   nvtx_SinglesPtop__76->SetBinError(16,23.27192);
   nvtx_SinglesPtop__76->SetBinError(17,24.2532);
   nvtx_SinglesPtop__76->SetBinError(18,24.62573);
   nvtx_SinglesPtop__76->SetBinError(19,23.70084);
   nvtx_SinglesPtop__76->SetBinError(20,24.47369);
   nvtx_SinglesPtop__76->SetBinError(21,23.81795);
   nvtx_SinglesPtop__76->SetBinError(22,23.02505);
   nvtx_SinglesPtop__76->SetBinError(23,21.55093);
   nvtx_SinglesPtop__76->SetBinError(24,20.74581);
   nvtx_SinglesPtop__76->SetBinError(25,20.07526);
   nvtx_SinglesPtop__76->SetBinError(26,18.98107);
   nvtx_SinglesPtop__76->SetBinError(27,18.21923);
   nvtx_SinglesPtop__76->SetBinError(28,16.03627);
   nvtx_SinglesPtop__76->SetBinError(29,15.95047);
   nvtx_SinglesPtop__76->SetBinError(30,15.93542);
   nvtx_SinglesPtop__76->SetBinError(31,14.46196);
   nvtx_SinglesPtop__76->SetBinError(32,12.63897);
   nvtx_SinglesPtop__76->SetBinError(33,11.53746);
   nvtx_SinglesPtop__76->SetBinError(34,11.60841);
   nvtx_SinglesPtop__76->SetBinError(35,9.389787);
   nvtx_SinglesPtop__76->SetBinError(36,9.698932);
   nvtx_SinglesPtop__76->SetBinError(37,8.808768);
   nvtx_SinglesPtop__76->SetBinError(38,7.796452);
   nvtx_SinglesPtop__76->SetBinError(39,6.519274);
   nvtx_SinglesPtop__76->SetBinError(40,6.095012);
   nvtx_SinglesPtop__76->SetBinError(41,14.14116);
   nvtx_SinglesPtop__76->SetEntries(6083);
   nvtx_SinglesPtop__76->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetMarkerColor(ci);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3021[41] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5,
   0};
   Double_t Graph_from_nvtx_fy3021[41] = {
   0,
   9,
   19,
   44,
   127,
   322,
   687,
   1208,
   2083,
   3136,
   4298,
   5706,
   6898,
   8267,
   9180,
   9680,
   9981,
   10060,
   9561,
   9172,
   8528,
   7691,
   6802,
   6011,
   5100,
   4413,
   3636,
   3043,
   2539,
   1995,
   1583,
   1319,
   1030,
   837,
   640,
   515,
   381,
   330,
   246,
   177,
   0};
   Double_t Graph_from_nvtx_felx3021[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fely3021[41] = {
   0,
   2.943511,
   4.320299,
   6.608069,
   11.25481,
   17.94436,
   26.21068,
   34.75629,
   45.63989,
   56,
   65.55913,
   75.53807,
   83.0542,
   90.92304,
   95.81232,
   98.38699,
   99.90495,
   100.2996,
   97.78037,
   95.77056,
   92.34717,
   87.69835,
   82.47424,
   77.53064,
   71.41428,
   66.43041,
   60.29925,
   55.16339,
   50.38849,
   44.66542,
   39.78693,
   36.31804,
   32.09361,
   28.93095,
   25.29822,
   22.69361,
   19.51922,
   18.1659,
   15.68439,
   13.29184,
   0};
   Double_t Graph_from_nvtx_fehx3021[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fehy3021[41] = {
   1.841055,
   4.110286,
   5.435307,
   7.68367,
   12.29929,
   17.94436,
   26.21068,
   34.75629,
   45.63989,
   56,
   65.55913,
   75.53807,
   83.0542,
   90.92304,
   95.81232,
   98.38699,
   99.90495,
   100.2996,
   97.78037,
   95.77056,
   92.34717,
   87.69835,
   82.47424,
   77.53064,
   71.41428,
   66.43041,
   60.29925,
   55.16339,
   50.38849,
   44.66542,
   39.78693,
   36.31804,
   32.09361,
   28.93095,
   25.29822,
   22.69361,
   19.51922,
   18.1659,
   15.68439,
   14.32952,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_nvtx_fx3021,Graph_from_nvtx_fy3021,Graph_from_nvtx_felx3021,Graph_from_nvtx_fehx3021,Graph_from_nvtx_fely3021,Graph_from_nvtx_fehy3021);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3021 = new TH1F("Graph_Graph_from_nvtx3021","Data",100,0,44);
   Graph_Graph_from_nvtx3021->SetMinimum(0);
   Graph_Graph_from_nvtx3021->SetMaximum(11176.33);
   Graph_Graph_from_nvtx3021->SetDirectory(0);
   Graph_Graph_from_nvtx3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3021->SetLineColor(ci);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3021);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_nvtx","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("nvtx_Diboson","Diboson","f");

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
   entry=leg->AddEntry("nvtx_DY","DY","f");

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
   entry=leg->AddEntry("nvtx_W","W","f");

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
   entry=leg->AddEntry("nvtx_Single top","Single top","f");

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
   p2->Range(-5.783133,0.4485106,42.40964,1.597447);
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
   
   TH1F *ratioframe__77 = new TH1F("ratioframe__77","t#bar{t}",40,0,40);
   ratioframe__77->SetMinimum(0.46);
   ratioframe__77->SetMaximum(1.54);
   ratioframe__77->SetEntries(37745);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetMarkerColor(ci);
   ratioframe__77->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__77->GetXaxis()->SetLabelFont(42);
   ratioframe__77->GetXaxis()->SetLabelSize(0);
   ratioframe__77->GetXaxis()->SetTitleSize(0);
   ratioframe__77->GetXaxis()->SetTitleOffset(0);
   ratioframe__77->GetXaxis()->SetTitleFont(42);
   ratioframe__77->GetYaxis()->SetTitle("Data/MC");
   ratioframe__77->GetYaxis()->SetNoExponent();
   ratioframe__77->GetYaxis()->SetNdivisions(5);
   ratioframe__77->GetYaxis()->SetLabelFont(42);
   ratioframe__77->GetYaxis()->SetLabelSize(0.18);
   ratioframe__77->GetYaxis()->SetTitleSize(0.2);
   ratioframe__77->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__77->GetYaxis()->SetTitleFont(42);
   ratioframe__77->GetZaxis()->SetLabelFont(42);
   ratioframe__77->GetZaxis()->SetLabelSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleFont(42);
   ratioframe__77->Draw("");
   
   Double_t Graph_from_ratio_fx3022[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t Graph_from_ratio_fy3022[40] = {
   0,
   6.152451,
   0.7467128,
   1.288991,
   1.426435,
   1.125573,
   1.201742,
   1.221586,
   1.35735,
   1.348354,
   1.177873,
   1.269213,
   1.237209,
   1.279781,
   1.207885,
   1.131546,
   1.137664,
   1.088263,
   1.036924,
   0.9810356,
   0.9548241,
   0.9543774,
   0.9079242,
   0.8295081,
   0.788581,
   0.7714447,
   0.7701299,
   0.7484969,
   0.7086512,
   0.6014167,
   0.5311604,
   0.6043329,
   0.5297945,
   0.4809428,
   0.4314708,
   0.3790681,
   0.3608861,
   0.4517998,
   0.3408419,
   0.2726806};
   Double_t Graph_from_ratio_felx3022[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3022[40] = {
   0,
   6.485253,
   0.3804737,
   0.5276153,
   0.360887,
   0.162284,
   0.1227765,
   0.09377554,
   0.08393905,
   0.06787819,
   0.0481557,
   0.04625804,
   0.04074674,
   0.03898195,
   0.0369599,
   0.03200638,
   0.02991339,
   0.0279325,
   0.0267495,
   0.0251481,
   0.02527459,
   0.02649311,
   0.026306,
   0.02691937,
   0.02479954,
   0.02621675,
   0.02849221,
   0.03005219,
   0.03020797,
   0.02743592,
   0.02597095,
   0.03382071,
   0.03172048,
   0.031434,
   0.03054768,
   0.02860646,
   0.03164964,
   0.04490138,
   0.03576646,
   0.03172578};
   Double_t Graph_from_ratio_fehx3022[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3022[40] = {
   0,
   6.485253,
   0.3804737,
   0.5276153,
   0.360887,
   0.162284,
   0.1227765,
   0.09377554,
   0.08393905,
   0.06787819,
   0.0481557,
   0.04625804,
   0.04074674,
   0.03898195,
   0.0369599,
   0.03200638,
   0.02991339,
   0.0279325,
   0.0267495,
   0.0251481,
   0.02527459,
   0.02649311,
   0.026306,
   0.02691937,
   0.02479954,
   0.02621675,
   0.02849221,
   0.03005219,
   0.03020797,
   0.02743592,
   0.02597095,
   0.03382071,
   0.03172048,
   0.031434,
   0.03054768,
   0.02860646,
   0.03164964,
   0.04490138,
   0.03576646,
   0.03172578};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,44);
   Graph_Graph_from_ratio3022->SetMinimum(-1.629853);
   Graph_Graph_from_ratio3022->SetMaximum(13.93475);
   Graph_Graph_from_ratio3022->SetDirectory(0);
   Graph_Graph_from_ratio3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3022->SetLineColor(ci);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3022);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
