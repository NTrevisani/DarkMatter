{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Mon Feb  9 13:16:48 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",765,52,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","jetphi1",100,-130.0643,130.0643);
   hLatino->SetBinContent(0,0.03430013);
   hLatino->SetBinContent(49,0.08607845);
   hLatino->SetBinContent(50,0.4143097);
   hLatino->SetBinContent(51,0.4138106);
   hLatino->SetBinContent(52,0.08580117);
   hLatino->SetEntries(112004);
   hLatino->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   hLatino->SetLineColor(ci);
   hLatino->SetLineWidth(3);
   hLatino->GetXaxis()->SetTitle("jetphi1");
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
   
   TH1F *hDark = new TH1F("hDark","jetphi1",100,-130.0643,130.0643);
   hDark->SetBinContent(49,0.07906926);
   hDark->SetBinContent(50,0.4125821);
   hDark->SetBinContent(51,0.4214155);
   hDark->SetBinContent(52,0.08693311);
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
   
   TLegend *leg = new TLegend(2.121996e-314,2.121996e-314,6.946141e-310,0,NULL,"brNDC");
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
