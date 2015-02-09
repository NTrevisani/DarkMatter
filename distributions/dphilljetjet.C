{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Mon Feb  9 13:15:24 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",65,52,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","dphilljetjet",100,-7.11795,7.11795);
   hLatino->SetBinContent(43,0.1334638);
   hLatino->SetBinContent(51,0.01169763);
   hLatino->SetBinContent(52,0.01201934);
   hLatino->SetBinContent(53,0.01206402);
   hLatino->SetBinContent(54,0.01225168);
   hLatino->SetBinContent(55,0.01312744);
   hLatino->SetBinContent(56,0.0141998);
   hLatino->SetBinContent(57,0.01470023);
   hLatino->SetBinContent(58,0.01607642);
   hLatino->SetBinContent(59,0.01772964);
   hLatino->SetBinContent(60,0.0190969);
   hLatino->SetBinContent(61,0.02256419);
   hLatino->SetBinContent(62,0.02560253);
   hLatino->SetBinContent(63,0.02822087);
   hLatino->SetBinContent(64,0.03259966);
   hLatino->SetBinContent(65,0.03751463);
   hLatino->SetBinContent(66,0.04587008);
   hLatino->SetBinContent(67,0.05394851);
   hLatino->SetBinContent(68,0.06489549);
   hLatino->SetBinContent(69,0.07808548);
   hLatino->SetBinContent(70,0.09426914);
   hLatino->SetBinContent(71,0.1098094);
   hLatino->SetBinContent(72,0.1218109);
   hLatino->SetBinContent(73,0.00838226);
   hLatino->SetEntries(112004);
   hLatino->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hLatino->SetLineColor(ci);
   hLatino->SetLineWidth(3);
   hLatino->GetXaxis()->SetTitle("dphilljetjet");
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
   
   TH1F *hDark = new TH1F("hDark","dphilljetjet",100,-7.11795,7.11795);
   hDark->SetBinContent(51,1);
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
