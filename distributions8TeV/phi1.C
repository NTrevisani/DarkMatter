{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Tue Feb 17 15:29:59 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",0,0,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","phi1",100,-3.6,3.84);
   hLatino->SetBinContent(7,0.009893577);
   hLatino->SetBinContent(8,0.01191023);
   hLatino->SetBinContent(9,0.01172054);
   hLatino->SetBinContent(10,0.01180041);
   hLatino->SetBinContent(11,0.01253918);
   hLatino->SetBinContent(12,0.01179043);
   hLatino->SetBinContent(13,0.01224967);
   hLatino->SetBinContent(14,0.01149093);
   hLatino->SetBinContent(15,0.01180041);
   hLatino->SetBinContent(16,0.01159076);
   hLatino->SetBinContent(17,0.01150091);
   hLatino->SetBinContent(18,0.01200008);
   hLatino->SetBinContent(19,0.01145099);
   hLatino->SetBinContent(20,0.01283869);
   hLatino->SetBinContent(21,0.01178044);
   hLatino->SetBinContent(22,0.01213985);
   hLatino->SetBinContent(23,0.01135116);
   hLatino->SetBinContent(24,0.01182038);
   hLatino->SetBinContent(25,0.01198011);
   hLatino->SetBinContent(26,0.01200008);
   hLatino->SetBinContent(27,0.01186031);
   hLatino->SetBinContent(28,0.0119302);
   hLatino->SetBinContent(29,0.01194018);
   hLatino->SetBinContent(30,0.01173053);
   hLatino->SetBinContent(31,0.01229958);
   hLatino->SetBinContent(32,0.01139109);
   hLatino->SetBinContent(33,0.01189026);
   hLatino->SetBinContent(34,0.01195016);
   hLatino->SetBinContent(35,0.01127129);
   hLatino->SetBinContent(36,0.01177046);
   hLatino->SetBinContent(37,0.01159076);
   hLatino->SetBinContent(38,0.01243935);
   hLatino->SetBinContent(39,0.01195016);
   hLatino->SetBinContent(40,0.01171056);
   hLatino->SetBinContent(41,0.01164068);
   hLatino->SetBinContent(42,0.01183036);
   hLatino->SetBinContent(43,0.01215982);
   hLatino->SetBinContent(44,0.01236947);
   hLatino->SetBinContent(45,0.01147096);
   hLatino->SetBinContent(46,0.01147096);
   hLatino->SetBinContent(47,0.01125132);
   hLatino->SetBinContent(48,0.01127129);
   hLatino->SetBinContent(49,0.01178044);
   hLatino->SetBinContent(50,0.01179043);
   hLatino->SetBinContent(51,0.01152088);
   hLatino->SetBinContent(52,0.01168061);
   hLatino->SetBinContent(53,0.01175049);
   hLatino->SetBinContent(54,0.01181039);
   hLatino->SetBinContent(55,0.01175049);
   hLatino->SetBinContent(56,0.01145099);
   hLatino->SetBinContent(57,0.01157079);
   hLatino->SetBinContent(58,0.01158078);
   hLatino->SetBinContent(59,0.01188028);
   hLatino->SetBinContent(60,0.01195016);
   hLatino->SetBinContent(61,0.01159076);
   hLatino->SetBinContent(62,0.0121698);
   hLatino->SetBinContent(63,0.01185033);
   hLatino->SetBinContent(64,0.01236947);
   hLatino->SetBinContent(65,0.01244933);
   hLatino->SetBinContent(66,0.01135116);
   hLatino->SetBinContent(67,0.01227962);
   hLatino->SetBinContent(68,0.01203003);
   hLatino->SetBinContent(69,0.01181039);
   hLatino->SetBinContent(70,0.01146097);
   hLatino->SetBinContent(71,0.01249925);
   hLatino->SetBinContent(72,0.01153086);
   hLatino->SetBinContent(73,0.01189026);
   hLatino->SetBinContent(74,0.01194018);
   hLatino->SetBinContent(75,0.01068227);
   hLatino->SetBinContent(76,0.01198011);
   hLatino->SetBinContent(77,0.01185033);
   hLatino->SetBinContent(78,0.01185033);
   hLatino->SetBinContent(79,0.01218976);
   hLatino->SetBinContent(80,0.0122896);
   hLatino->SetBinContent(81,0.01176048);
   hLatino->SetBinContent(82,0.01154084);
   hLatino->SetBinContent(83,0.01184035);
   hLatino->SetBinContent(84,0.01237945);
   hLatino->SetBinContent(85,0.01196015);
   hLatino->SetBinContent(86,0.01172054);
   hLatino->SetBinContent(87,0.01129126);
   hLatino->SetBinContent(88,0.01254917);
   hLatino->SetBinContent(89,0.01179043);
   hLatino->SetBinContent(90,0.01197013);
   hLatino->SetBinContent(91,0.00777709);
   hLatino->SetMinimum(0);
   hLatino->SetMaximum(0.01925578);
   hLatino->SetEntries(100267);
   hLatino->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hLatino->SetLineColor(ci);
   hLatino->SetLineWidth(3);
   hLatino->GetXaxis()->SetTitle("phi1");
   hLatino->GetXaxis()->SetLabelFont(42);
   hLatino->GetXaxis()->SetLabelSize(0.035);
   hLatino->GetXaxis()->SetTitleSize(0.035);
   hLatino->GetXaxis()->SetTitleFont(42);
   hLatino->GetYaxis()->SetLabelFont(42);
   hLatino->GetYaxis()->SetLabelSize(0.035);
   hLatino->GetYaxis()->SetTitleSize(0.035);
   hLatino->GetYaxis()->SetTitleFont(42);
   hLatino->GetZaxis()->SetLabelFont(42);
   hLatino->GetZaxis()->SetLabelSize(0.035);
   hLatino->GetZaxis()->SetTitleSize(0.035);
   hLatino->GetZaxis()->SetTitleFont(42);
   hLatino->Draw("");
   
   TH1F *hDark = new TH1F("hDark","phi1",100,-3.6,3.84);
   hDark->SetBinContent(7,0.008702611);
   hDark->SetBinContent(8,0.01220366);
   hDark->SetBinContent(9,0.01210363);
   hDark->SetBinContent(10,0.01220366);
   hDark->SetBinContent(11,0.01540462);
   hDark->SetBinContent(12,0.01330399);
   hDark->SetBinContent(13,0.01150345);
   hDark->SetBinContent(14,0.01410423);
   hDark->SetBinContent(15,0.01430429);
   hDark->SetBinContent(16,0.01020306);
   hDark->SetBinContent(17,0.01290387);
   hDark->SetBinContent(18,0.01440432);
   hDark->SetBinContent(19,0.01160348);
   hDark->SetBinContent(20,0.009402821);
   hDark->SetBinContent(21,0.009902971);
   hDark->SetBinContent(22,0.01150345);
   hDark->SetBinContent(23,0.01230369);
   hDark->SetBinContent(24,0.01270381);
   hDark->SetBinContent(25,0.009402821);
   hDark->SetBinContent(26,0.01310393);
   hDark->SetBinContent(27,0.01080324);
   hDark->SetBinContent(28,0.0140042);
   hDark->SetBinContent(29,0.0110033);
   hDark->SetBinContent(30,0.01170351);
   hDark->SetBinContent(31,0.01090327);
   hDark->SetBinContent(32,0.01110333);
   hDark->SetBinContent(33,0.01350405);
   hDark->SetBinContent(34,0.01070321);
   hDark->SetBinContent(35,0.01460438);
   hDark->SetBinContent(36,0.01180354);
   hDark->SetBinContent(37,0.01080324);
   hDark->SetBinContent(38,0.01240372);
   hDark->SetBinContent(39,0.01020306);
   hDark->SetBinContent(40,0.01220366);
   hDark->SetBinContent(41,0.01190357);
   hDark->SetBinContent(42,0.01140342);
   hDark->SetBinContent(43,0.009702911);
   hDark->SetBinContent(44,0.01370411);
   hDark->SetBinContent(45,0.01160348);
   hDark->SetBinContent(46,0.0110033);
   hDark->SetBinContent(47,0.0110033);
   hDark->SetBinContent(48,0.01190357);
   hDark->SetBinContent(49,0.009802941);
   hDark->SetBinContent(50,0.009802941);
   hDark->SetBinContent(51,0.009702911);
   hDark->SetBinContent(52,0.01080324);
   hDark->SetBinContent(53,0.01360408);
   hDark->SetBinContent(54,0.01210363);
   hDark->SetBinContent(55,0.01250375);
   hDark->SetBinContent(56,0.01480444);
   hDark->SetBinContent(57,0.01080324);
   hDark->SetBinContent(58,0.0110033);
   hDark->SetBinContent(59,0.00950285);
   hDark->SetBinContent(60,0.01390417);
   hDark->SetBinContent(61,0.01070321);
   hDark->SetBinContent(62,0.01270381);
   hDark->SetBinContent(63,0.01230369);
   hDark->SetBinContent(64,0.008702611);
   hDark->SetBinContent(65,0.01150345);
   hDark->SetBinContent(66,0.01050315);
   hDark->SetBinContent(67,0.01340402);
   hDark->SetBinContent(68,0.01060318);
   hDark->SetBinContent(69,0.01110333);
   hDark->SetBinContent(70,0.01270381);
   hDark->SetBinContent(71,0.01090327);
   hDark->SetBinContent(72,0.01530459);
   hDark->SetBinContent(73,0.01250375);
   hDark->SetBinContent(74,0.01160348);
   hDark->SetBinContent(75,0.01090327);
   hDark->SetBinContent(76,0.01010303);
   hDark->SetBinContent(77,0.009802941);
   hDark->SetBinContent(78,0.01210363);
   hDark->SetBinContent(79,0.01390417);
   hDark->SetBinContent(80,0.009902971);
   hDark->SetBinContent(81,0.01140342);
   hDark->SetBinContent(82,0.01030309);
   hDark->SetBinContent(83,0.008702611);
   hDark->SetBinContent(84,0.01540462);
   hDark->SetBinContent(85,0.0150045);
   hDark->SetBinContent(86,0.01070321);
   hDark->SetBinContent(87,0.01350405);
   hDark->SetBinContent(88,0.01460438);
   hDark->SetBinContent(89,0.01220366);
   hDark->SetBinContent(90,0.0110033);
   hDark->SetBinContent(91,0.008302491);
   hDark->SetMinimum(0);
   hDark->SetMaximum(0.01925578);
   hDark->SetEntries(10098);
   hDark->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hDark->SetLineColor(ci);
   hDark->SetLineWidth(3);
   hDark->GetXaxis()->SetLabelFont(42);
   hDark->GetXaxis()->SetLabelSize(0.035);
   hDark->GetXaxis()->SetTitleSize(0.035);
   hDark->GetXaxis()->SetTitleFont(42);
   hDark->GetYaxis()->SetLabelFont(42);
   hDark->GetYaxis()->SetLabelSize(0.035);
   hDark->GetYaxis()->SetTitleSize(0.035);
   hDark->GetYaxis()->SetTitleFont(42);
   hDark->GetZaxis()->SetLabelFont(42);
   hDark->GetZaxis()->SetLabelSize(0.035);
   hDark->GetZaxis()->SetTitleSize(0.035);
   hDark->GetZaxis()->SetTitleFont(42);
   hDark->Draw("same");
   
   TLegend *leg = new TLegend(2.121996e-314,2.121996e-314,0.5745969,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hLatino","Latino Var","f");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hDark","Dark Var","f");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   latinoVar->Modified();
   latinoVar->cd();
   latinoVar->SetSelected(latinoVar);
}
