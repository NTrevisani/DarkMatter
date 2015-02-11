{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Wed Feb 11 18:00:53 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",766,168,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","njet",100,-1,8.639999);
   hLatino->SetBinContent(32,0.7832394);
   hLatino->SetBinContent(42,0.1469384);
   hLatino->SetBinContent(52,0.04623739);
   hLatino->SetBinContent(63,0.01535843);
   hLatino->SetBinContent(73,0.005430158);
   hLatino->SetBinContent(83,0.002309843);
   hLatino->SetBinContent(94,0.0004862828);
   hLatino->SetBinContent(101,5);
   hLatino->SetMinimum(0);
   hLatino->SetMaximum(0.9790493);
   hLatino->SetEntries(24783);
   hLatino->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hLatino->SetLineColor(ci);
   hLatino->SetLineWidth(3);
   hLatino->GetXaxis()->SetTitle("njet");
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
   
   TH1F *hDark = new TH1F("hDark","njet",100,-1,8.639999);
   hDark->SetBinContent(11,0.01001831);
   hDark->SetBinContent(21,0.06366476);
   hDark->SetBinContent(32,0.2013358);
   hDark->SetBinContent(42,0.2930087);
   hDark->SetBinContent(52,0.2542281);
   hDark->SetBinContent(63,0.1437036);
   hDark->SetBinContent(73,0.03188624);
   hDark->SetBinContent(83,0.002154476);
   hDark->SetMinimum(0);
   hDark->SetMaximum(0.9790493);
   hDark->SetEntries(9384);
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
   
   TLegend *leg = new TLegend(2.121996e-314,2.121996e-314,4.940656e-324,0,NULL,"brNDC");
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
