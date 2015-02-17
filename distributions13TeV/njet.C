{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Tue Feb 17 15:19:48 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",0,0,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","njet",100,-1,7.44);
   hLatino->SetBinContent(12,0.5743929);
   hLatino->SetBinContent(24,0.3087564);
   hLatino->SetBinContent(36,0.08359087);
   hLatino->SetBinContent(48,0.02413539);
   hLatino->SetBinContent(60,0.007211185);
   hLatino->SetBinContent(72,0.001324503);
   hLatino->SetBinContent(83,0.0004415011);
   hLatino->SetBinContent(95,0.000147167);
   hLatino->SetBinContent(101,1);
   hLatino->SetMinimum(0);
   hLatino->SetMaximum(0.7179911);
   hLatino->SetEntries(6897);
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
   
   TH1F *hDark = new TH1F("hDark","njet",100,-1,7.44);
   hDark->SetBinContent(12,0.1289611);
   hDark->SetBinContent(24,0.2662455);
   hDark->SetBinContent(36,0.2783795);
   hDark->SetBinContent(48,0.1758925);
   hDark->SetBinContent(60,0.08985159);
   hDark->SetBinContent(72,0.03971119);
   hDark->SetBinContent(83,0.01604493);
   hDark->SetBinContent(95,0.004913758);
   hDark->SetBinContent(101,28);
   hDark->SetMinimum(0);
   hDark->SetMaximum(0.7179911);
   hDark->SetEntries(10101);
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
