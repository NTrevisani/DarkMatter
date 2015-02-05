//compares variables value from latinos H->WW->lvlv with pp->HXX->XXWW->XXlvlv
//run typing:  root -l 'macro.C("pfmet","MissingET.MET",1000.)'

#include "TFile.h"
#include "TH1.h"
#include "TCanvas.h"
#include "TROOT.h"
#include "TTree.h"
#include "TChain.h
#include "TString.h"
#include "TLegend.h"


void macro(TString latinoVar = "pfmet", TString darkVar = "MissingET.MET", float range = 1000.){
  TFile* fDark = new TFile("/afs/cern.ch/user/d/dburns/public/HWWSignalMC/ppTOhxx_hTO2wTO2l2v_100GeV_8TeV.root","read");
  TFile* fLatino = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_1125_ggToH125toWWTo2LAndTau2Nu.root","read");
  TFile* fLatino2 = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_3125_wzttH125ToWW.root","read");
  TFile* fLatino3 = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_2125_vbfToH125toWWTo2LAndTau2Nu.root","read");

  TH1F* hDark = new TH1F("hDark",darkVar,100,0.,range);
  TH1F* hLatino = new TH1F("hLatino",latinoVar,100,0.,range);

  TCanvas *c1 = new TCanvas("latinoVar","latinoVar",600,600);

  TTree * tDark = (TTree*) fDark -> Get("Delphes");
  TTree * tLatino = (TTree*) fLatino -> Get("latino");
  TTree * tLatino2 = (TTree*) fLatino2 -> Get("latino");
  TTree * tLatino3 = (TTree*) fLatino3 -> Get("latino");


  tDark -> Draw(darkVar+">>hDark");
  if (darkVar.Contains("Muon.")){
  darkVar.Replace(0,4,"Electron");
  tDark -> Draw(darkVar+">>hDark");
  }

  if(latinoVar.Contains("jet") || latinoVar.Contains("pt")){
  tLatino -> Draw(latinoVar+"1>>+hLatino",latinoVar+"1>0");
  tLatino2 -> Draw(latinoVar+"1>>+hLatino",latinoVar+"1>0");
  tLatino3 -> Draw(latinoVar+"1>>+hLatino",latinoVar+"1>0");

  tLatino -> Draw(latinoVar+"2>>+hLatino",latinoVar+"2>0");
  tLatino2 -> Draw(latinoVar+"2>>+hLatino",latinoVar+"2>0");
  tLatino3 -> Draw(latinoVar+"2>>+hLatino",latinoVar+"2>0");

  tLatino -> Draw(latinoVar+"3>>+hLatino",latinoVar+"3>0");
  tLatino2 -> Draw(latinoVar+"3>>+hLatino",latinoVar+"3>0");
  tLatino3 -> Draw(latinoVar+"3>>+hLatino",latinoVar+"3>0");

  tLatino -> Draw(latinoVar+"4>>+hLatino",latinoVar+"4>0");
  tLatino2 -> Draw(latinoVar+"4>>+hLatino",latinoVar+"4>0");
  tLatino3 -> Draw(latinoVar+"4>>+hLatino",latinoVar+"4>0");
  }
  else{
  tLatino -> Draw(latinoVar+">>+hLatino");
  cout<<hLatino->GetEntries()<<endl;
  tLatino2 -> Draw(latinoVar+">>+hLatino");
  cout<<hLatino->GetEntries()<<endl;
  tLatino3 -> Draw(latinoVar+">>+hLatino");
  cout<<hLatino->GetEntries()<<endl;
  }

  double qqDark = hDark->Integral();
  double qqLatino = hLatino->Integral();
  for (int i = 0; i<101; ++i) {
    hLatino->SetBinContent(i,hLatino->GetBinContent(i)/qqLatino);
    hDark->SetBinContent(i,hDark->GetBinContent(i)/qqDark);
  } 
  hLatino->GetXaxis()->SetTitle(latinoVar);
  hLatino->SetLineWidth(3);
  hDark->SetLineWidth(3);
  hLatino->SetStats(0);
  hDark->SetStats(0);
  hDark->SetLineColor(kBlue);
  hLatino->SetLineColor(kRed);
  c1->cd();
  hLatino->Draw();
  hDark->Draw("same");
  TLegend* leg = new TLegend(0.45,0.5,0.77,0.8);
  leg->AddEntry(hLatino,"Latino Var","f");
  leg->AddEntry(hDark,"Dark Var","f");
  leg->SetFillColor(kWhite);
  leg->SetLineColor(kWhite);
  leg->Draw();
  c1->Print(latinoVar+".C");
  c1->Print(latinoVar+".pdf","pdf");
}