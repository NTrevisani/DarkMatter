//compares variables value from latinos H->WW->lvlv with pp->HXX->XXWW->XXlvlv
//run typing:  root -l macro.C

#include "TFile.h"
#include "TH1.h"
#include "TCanvas.h"
#include "TROOT.h"
#include "TTree.h"
#include "TChain.h
#include "TString.h"
#include "TLegend.h"
#include "TObjArray.h"
#include <algorithm>
#include "TCut.h"

#include "LatinoTree.h"

TString latinoVar = "";
TString darkVar = "";
Float_t range = 1000.;

void macro(/*TString latinoVar = "pfmet", TString darkVar = "MissingET.MET", float range = 1000.*/){

  //TFile* fDark = new TFile("/afs/cern.ch/user/d/dburns/public/HWWSignalMC/ppTOhxx_hTO2wTO2l2v_100GeV_8TeV.root","read");
  TFile* fDark = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/DarkMatterLatino.root","read");
  //  TFile* fLatino = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_1125_ggToH125toWWTo2LAndTau2Nu.root","read");
  //TFile* fLatino2 = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_3125_wzttH125ToWW.root","read");
  //TFile* fLatino3 = new TFile("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_2125_vbfToH125toWWTo2LAndTau2Nu.root","read");

  TFile* latinoSel = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/latinoSelections.root","read");

  TTree * tDark = (TTree*) fDark -> Get("latino");
  
/*  TChain *ch = new TChain("latino","latino");
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_1125_ggToH125toWWTo2LAndTau2Nu.root");
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_3125_wzttH125ToWW.root");
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_2125_vbfToH125toWWTo2LAndTau2Nu.root");
  

  TTree * tLatino = (TTree*) fLatino -> Get("latino");
  TTree * tLatino2 = (TTree*) fLatino2 -> Get("latino");
  TTree * tLatino3 = (TTree*) fLatino3 -> Get("latino");
  */

  TTree * tLatino = (TTree*) latinoSel -> Get("latino");

  TObjArray *tl = tDark->GetListOfBranches();
  TString nBranch = tl->First()->GetName();

  TH1F *dump1 = new TH1F("dump1","dump1",10000,-1000.,1000.);
  TH1F *dump2 = new TH1F("dump2","dump2",10000,-1000.,1000.);

  Int_t cont = 0;

  while (tl -> After(tl->FindObject(nBranch)) != 0){
    nBranch = tl -> At(cont) -> GetName();//After(tl->FindObject(nBranch))->GetName(); 
    
    ++cont;

    latinoVar = nBranch;
    darkVar = nBranch;

    cout<<latinoVar<<endl;

    //filling histograms
  tDark -> Draw(darkVar+">>dump1");
  tLatino -> Draw(latinoVar+">>dump2");  
  
  /*
  tLatino -> Draw(latinoVar+">>+dump2");
  tLatino2 -> Draw(latinoVar+">>+dump2");
  tLatino3 -> Draw(latinoVar+">>+dump2");
  */

    //implementing dynamic range for the histograms
  //find left bound for hDark
  for(Int_t q = 0; q < 10000; ++q)
    if(dump1 -> GetBinContent(q) > 1){
      Float_t leftBoundDark = q*0.2 - 1000.;
      break;
    }

  //find right bound for hDark
  for(Int_t q = 0; q < 10000; ++q)
    if(dump1 -> GetBinContent(10000 - q) > 1){
      Float_t rightBoundDark = 1000. - q*0.2;
      break;
    }

  //find left bound for hLatino
  for(Int_t q = 0; q < 10000; ++q)
    if(dump2 -> GetBinContent(q) > 1){
      Float_t leftBoundLatino = q*0.2 - 1000.;
      break;
    }

  //find right bound for hLatino
  for(Int_t q = 0; q < 10000; ++q)
    if(dump2 -> GetBinContent(10000 - q) > 1){
      Float_t rightBoundLatino = 1000. - q*0.2;
      break;
    }

  cout<<"left Dark: "<<leftBoundDark<<endl;
  cout<<"right Dark: "<<rightBoundDark<<endl;
  cout<<"left Latino: "<<leftBoundLatino<<endl;
  cout<<"right Latino: "<<rightBoundLatino<<endl;
  cout<<""<<endl;

  Float_t leftBound = max (leftBoundDark,leftBoundLatino);
  Float_t rightBound = min (rightBoundDark,rightBoundLatino);

  leftBound = leftBound - 0.2*fabs(leftBound);
  rightBound = 1.2*rightBound;
  if(leftBound > 0) leftBound = 0.;
  if(leftBound == 0) leftBound = -1.;


  /*
  Float_t r1 = dump1 -> GetRMS();
  Float_t r2 = dump2 -> GetRMS();
  range = std::max(5*r1,5*r2);
  */

  //actual histograms fill
  TH1F* hDark = new TH1F("hDark",darkVar,100,leftBound,rightBound);//-1.*range,range);
  TH1F* hLatino = new TH1F("hLatino",latinoVar,100,leftBound,rightBound);//-1.*range,range);

  TCanvas *c1 = new TCanvas("latinoVar","latinoVar",600,600);

  cout<<nBranch<<endl;

  tDark -> Draw(darkVar+">>hDark");
  tLatino -> Draw(latinoVar+">>hLatino");
  
  /*
  tLatino -> Draw(latinoVar+">>+hLatino");//,latinoVar+">-100");
  tLatino2 -> Draw(latinoVar+">>+hLatino");//,latinoVar+">-100");
  tLatino3 -> Draw(latinoVar+">>+hLatino");//,latinoVar+">-100");
  */

  //histograms normalization
  double qqDark = hDark->Integral();
  double qqLatino = hLatino->Integral();
  for (int i = 0; i<101; ++i) {
    hLatino->SetBinContent(i,hLatino->GetBinContent(i)/qqLatino);
    hDark->SetBinContent(i,hDark->GetBinContent(i)/qqDark);
  } 

  Float_t rangeY = max(hDark->GetMaximum(),hLatino->GetMaximum());
  rangeY = 1.25*rangeY;
  hLatino->GetYaxis()->SetRangeUser(0.,rangeY);
  hDark->GetYaxis()->SetRangeUser(0.,rangeY);
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
  TLegend* leg = new TLegend(0.15,0.79,0.35,0.89);
  leg->AddEntry(hLatino,"Latino Var","f");
  leg->AddEntry(hDark,"Dark Var","f");
  leg->SetFillColor(kWhite);
  leg->SetLineColor(kWhite);
  leg->Draw();
  c1->Print(latinoVar+".C");
  c1->Print(latinoVar+".pdf","pdf");
  c1->Print(latinoVar+".png","png");
  gSystem->Exec("mv " + latinoVar + ".C distributions/");
  gSystem->Exec("mv " + latinoVar + ".pdf distributions/");
  gSystem->Exec("mv " + latinoVar + ".png distributions/");
}
}
