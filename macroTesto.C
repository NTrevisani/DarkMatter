//compares variables value from latinos H->WW->lvlv with pp->HXX->XXWW->XXlvlv
//run typing:  root -l -b 'macro.C(8)'

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
#include "TStyle.h"
#include <iostream.h>

#include "LatinoTree.h"

TString latinoVar = "";
TString darkVar = "";
Float_t range = 1000.;


//drawing instructions
void drawPlots(TString variable,
	       Float_t left, 
	       Float_t right, 
	       Int_t nbins,
	       TString units = "",
	       TTree *tDark_,
	       TTree *tLatino_,
	       Int_t Energy_,
	       TString format
	       ){

  TH1F* hDark = new TH1F("hDark",variable,nbins,left,right);
  TH1F* hLatino = new TH1F("hLatino",variable,nbins,left,right);
  
  tDark_ -> Draw(variable+">>hDark");
  tLatino_ -> Draw(variable+">>hLatino");
  
  //histograms normalization
  Double_t qqDark = hDark->Integral();
  Double_t qqLatino = hLatino->Integral();
  for (int i = 0; i<101; ++i) {
    hLatino->SetBinContent(i,hLatino->GetBinContent(i)/qqLatino);
    hDark->SetBinContent(i,hDark->GetBinContent(i)/qqDark);
  } 
  
  TCanvas *c1 = new TCanvas("variable","variable",600,600);
  c1->cd();
  
  TPad* pad1 = new TPad("pad1", "pad1", 0., 0., 1.0, 1.0);
  pad1->SetLeftMargin(0.14);
  pad1->SetBottomMargin(0.18);
  pad1->Draw();
  pad1->cd();

  Float_t rangeY = max(hDark->GetMaximum(),hLatino->GetMaximum());
  rangeY = 1.25*rangeY;

  hLatino->SetTitleSize(5.);
  hLatino->GetYaxis()->SetRangeUser(0.,rangeY);
  hDark->GetYaxis()->SetRangeUser(0.,rangeY);
  if(units != "[]")
    hLatino->GetXaxis()->SetTitle(variable+" "+units);
  else
    hLatino->GetXaxis()->SetTitle(variable);
  hLatino->GetXaxis()->SetTitleSize(0.07);
  hLatino->GetXaxis()->SetTitleOffset(0.9);
  hLatino->GetXaxis()->SetLabelSize(0.05);
  hLatino->GetYaxis()->SetTitleSize(0.05);
  hLatino->GetYaxis()->SetLabelSize(0.05);  
  hLatino->SetLineWidth(3);
  hDark->SetLineWidth(3);
  hLatino->SetStats(0);
  hDark->SetStats(0);
  hDark->SetLineColor(kBlue);
  hLatino->SetLineColor(kRed);
  hLatino->Draw();
  hDark->Draw("same");
  TLegend* leg = new TLegend(0.20,0.79,0.40,0.89);
  leg->AddEntry(hLatino,"H #rightarrow WW","l");
  leg->AddEntry(hDark,"HXX #rightarrow WWXX","l");
  leg->SetTextSize(0.05);
  leg->SetFillColor(kWhite);
  leg->SetLineColor(kWhite);
  leg->Draw();
  
  c1->Print(variable+"."+format,format);
  //c1->Print(variable+".pdf","pdf");
  //c1->Print(variable+".png","png");

  delete hDark;
  delete hLatino;
  delete c1;

  if(Energy_ == 8){
    //gSystem->Exec("mv " + variable + ".C distributions8TeV/");
    //gSystem->Exec("mv " + variable + ".pdf distributions8TeV/");
    gSystem->Exec("mv " + variable + "." + format + " " + format + "/distributions8TeV/");
  }

  if(Energy_ == 13){
    //gSystem->Exec("mv " + variable + ".C distributions13TeV/");
    //gSystem->Exec("mv " + variable + ".pdf distributions13TeV/");
    gSystem->Exec("mv " + variable + "." + format + " " + format + "/distributions13TeV/");
  }
}


//main function
void macroTesto(Float_t Energy = 8/*TeV*/, TString printMode = "png"){

  if (printMode == "C" || printMode == "png" || printMode == "pdf"){
    gSystem->Exec("mkdir "+printMode);
    cout<<"siiiiiiiiiiii"<<endl;
  }
  else{
    cout<<"please print a valid plot format"<<endl;
    return;
  }

  if(Energy == 8){
    gSystem->Exec("mkdir " + printMode + "/distributions8TeV/");
    TFile* fDark = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/DarkMatterLatino8TeV.root","read");
    TFile* latinoSel = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/latinoSelections8TeV.root","read");
  }

  else if(Energy == 13){
    gSystem->Exec("mkdir " + printMode + "/distributions13TeV/");
    TFile* fDark = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/DarkMatterLatino13TeV.root","read");
    TFile* latinoSel = new TFile("/afs/cern.ch/user/n/ntrevisa/DarkMatter/latinoSelections13TeV.root","read");
  }

  else{
    cout<<"please select a valid centre of mass energy: 8 or 13 TeV"<<endl;
    return;
  }

  TTree * tDark = (TTree*) fDark -> Get("latino");
  TTree * tLatino = (TTree*) latinoSel -> Get("latino");

  TObjArray *tl = tDark->GetListOfBranches();
  TString nBranch = tl->First()->GetName();

  TH1F *dump1 = new TH1F("dump1","dump1",10000,-1000.,1000.);
  TH1F *dump2 = new TH1F("dump2","dump2",10000,-1000.,1000.);

  Int_t cont = 0;

  TString var;
  Float_t leftBound = 0;
  Float_t rightBound = 0;
  TString units = "";
  Int_t nbin = 10;

  ifstream inFile("input.txt");
  std::string line;
  
  while (getline(inFile,line)){
    
    std::ofstream outFile("out.tmp",std::ios::out);
    outFile<<line<<endl;
    outFile.close();

    std::ifstream input;
    input.open("out.tmp",std::ios::in);
    input >> var >> leftBound >> rightBound >> nbin >> units;
    input.close();

    cout<<var<<" "<<leftBound<<" "<<rightBound<<" "<<nbin<<" "<<units<<" "<<printMode<<endl;

    drawPlots(var, leftBound, rightBound, nbin, units, tDark, tLatino, Energy, printMode);

    } 
    
    
    inFile.close();
}
