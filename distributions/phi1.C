{
//=========Macro generated from canvas: latinoVar/latinoVar
//=========  (Mon Feb  9 13:16:34 2015) by ROOT version5.34/09
   TCanvas *latinoVar = new TCanvas("latinoVar", "latinoVar",765,52,600,600);
   latinoVar->Range(0,0,1,1);
   latinoVar->SetFillColor(0);
   latinoVar->SetBorderMode(0);
   latinoVar->SetBorderSize(2);
   latinoVar->SetFrameBorderMode(0);
   
   TH1F *hLatino = new TH1F("hLatino","phi1",100,-139.9028,139.9028);
   hLatino->SetBinContent(49,0.0549047);
   hLatino->SetBinContent(50,0.4445993);
   hLatino->SetBinContent(51,0.4453053);
   hLatino->SetBinContent(52,0.05519066);
   hLatino->SetEntries(112004);
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
   
   TH1F *hDark = new TH1F("hDark","phi1",100,-139.9028,139.9028);
   hDark->SetBinContent(49,0.05321556);
   hDark->SetBinContent(50,0.4533017);
   hDark->SetBinContent(51,0.4328342);
   hDark->SetBinContent(52,0.0606485);
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
