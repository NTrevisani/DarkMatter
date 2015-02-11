//compile typing: c++ -O2 -lm `root-config --cflags --glibs` -o latinoSelections latinoSelections.cpp
//run typing: ./latinoSelections

#include "TROOT.h"
#include "TFile.h"

#include<vector>
#include<iostream>
#include<cmath>

#include "TChain.h"
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TCanvas.h"
#include "TNtuple.h"
#include "TLorentzVector.h"
#include "TMath.h"
#include <math.h>

#include "LatinoTree.h"
#include "LatinoTree.C"

using namespace std;

int readDataset (TString datasetBaseName, TTree* nt)
{
  TChain * ch = new TChain ("latino") ;
  ch->Add (datasetBaseName) ;
  cout << "read " << ch->GetEntries () << " events from " << datasetBaseName.Data () << endl ;
  LatinoTree dt ;
  dt.Init (ch) ;
  
  //create ntuple
  
  //  Float_t baseW;        nt->Branch("baseW"       , &baseW,"baseW");
  //  Float_t channel;      nt->Branch("channel"     , &channel,"channel");
  //Float_t chmet;        nt->Branch("chmet"       , &chmet,"chmet");
  //Float_t dataset;      nt->Branch("dataset"     , &dataset,"dataset");
  Float_t dphill;       nt->Branch("dphill"      , &dphill,"dphill");
  Float_t detall;       //nt->Branch("detall"      , &detall,"detall");
  Float_t detajj;       nt->Branch("detajj"      , &detajj,"detajj");
  Float_t dphilljet;    nt->Branch("dphilljet"   , &dphilljet,"dphilljet");
  Float_t dphilljetjet; nt->Branch("dphilljetjet", &dphilljetjet,"dphilljetjet");
  Float_t drll;         nt->Branch("drll"        , &drll,"drll");
  //Float_t effW;         nt->Branch("effW"        , &effW,"effW");
  Float_t jeteta1;      nt->Branch("jeteta1"     , &jeteta1,"jeteta1");
  Float_t jeteta2;      nt->Branch("jeteta2"     , &jeteta2,"jeteta2");
  Float_t jeteta3;      nt->Branch("jeteta3"     , &jeteta3,"jeteta3");
  Float_t jeteta4;      nt->Branch("jeteta4"     , &jeteta4,"jeteta4");
  Float_t jetpt1;       nt->Branch("jetpt1"      , &jetpt1,"jetpt1");
  Float_t jetpt2;       nt->Branch("jetpt2"      , &jetpt2,"jetpt2");
  Float_t jetpt3;       nt->Branch("jetpt3"      , &jetpt3,"jetpt3");
  Float_t jetpt4;       nt->Branch("jetpt4"      , &jetpt4,"jetpt4");
  Float_t phi1;         nt->Branch("phi1"        , &phi1,"phi1");
  Float_t phi2;         nt->Branch("phi2"        , &phi2,"phi2");
  Float_t jetphi1;      nt->Branch("jetphi1"     , &jetphi1,"jetphi1");
  Float_t jetphi2;      nt->Branch("jetphi2"     , &jetphi2,"jetphi2");
  Float_t jetphi3;      nt->Branch("jetphi3"     , &jetphi3,"jetphi3");
  Float_t jetphi4;      nt->Branch("jetphi4"     , &jetphi4,"jetphi4");
  Float_t jetM1;     // nt->Branch("jetM1"     , &jetM1,"jetM1");
  Float_t jetM2;      //nt->Branch("jetM2"     , &jetM2,"jetM2");
  Float_t jetM3;      //nt->Branch("jetM3"     , &jetM3,"jetM3");
  Float_t jetM4;      //nt->Branch("jetM4"     , &jetM4,"jetM4");
  //Float_t jettche1;     nt->Branch("jettche1"    , &jettche1,"jettche1");
  //Float_t jettche2;     nt->Branch("jettche2"    , &jettche2,"jettche2");
  //Float_t mctruth;      nt->Branch("mctruth"     , &mctruth,"mctruth");
  Float_t mll;          nt->Branch("mll"         , &mll,"mll");
  Float_t mjj;          nt->Branch("mjj"         , &mjj,"mjj");
  //Float_t mpmet;        nt->Branch("mpmet"       , &mpmet,"mpmet");
  //Float_t mth;          nt->Branch("mth"         , &mth,"mth");
  //Float_t nbjet;        nt->Branch("nbjet"       , &nbjet,"nbjet");
  //Float_t nbjettche;    nt->Branch("nbjettche"   , &nbjettche,"nbjettche");
  //Float_t nextra;       nt->Branch("nextra"      , &nextra,"nextra");
  Float_t njet;         nt->Branch("njet"        , &njet,"njet");
  //Float_t nvtx;         nt->Branch("nvtx"        , &nvtx,"nvtx");
  //Float_t pchmet;       nt->Branch("pchmet"      , &pchmet,"pchmet");
  Float_t pfmet;        nt->Branch("pfmet"       , &pfmet,"pfmet");
  Float_t pfmetphi;        nt->Branch("pfmetphi"       , &pfmetphi,"pfmetphi");
  //Float_t ppfmet;       nt->Branch("ppfmet"      , &ppfmet,"ppfmet");
  Float_t pt1;          nt->Branch("pt1"         , &pt1,"pt1");
  Float_t pt2;          nt->Branch("pt2"         , &pt2,"pt2");
  Float_t eta1;         nt->Branch("eta1"        , &eta1,"eta1");
  Float_t eta2;         nt->Branch("eta2"        , &eta2,"eta2");
  //Float_t ch1;          nt->Branch("ch1"         , &ch1,"ch1");
  //Float_t ch2;          nt->Branch("ch2"         , &ch2,"ch2");
  //Float_t ptll;         nt->Branch("ptll"        , &ptll,"ptll");
  //Float_t softtche;     nt->Branch("softtche"    , &softtche,"softtche");
  //Float_t trigger;      nt->Branch("trigger"     , &trigger,"trigger");
  //Float_t triggW;       nt->Branch("triggW"      , &triggW,"triggW");
  //Int_t   bveto;        nt->Branch("bveto"       , &bveto,"bveto");
  //Int_t   bveto_ip;     nt->Branch("bveto_ip"    , &bveto_ip,"bveto_ip");
  //Int_t   bveto_mu;     nt->Branch("bveto_mu"    , &bveto_mu,"bveto_mu");
  //Int_t   bveto_nj30;   nt->Branch("bveto_nj30"  , &bveto_nj30,"bveto_nj30");
  //Int_t   dphiveto;     nt->Branch("dphiveto"    , &dphiveto,"dphiveto");
  //Int_t   sameflav;     nt->Branch("sameflav"    , &sameflav,"sameflav");
  //Int_t   zveto;        nt->Branch("zveto"       , &zveto,"zveto");
  //UInt_t  event;        nt->Branch("event"       , &event,"event");
  //UInt_t  lumi;         nt->Branch("lumi"        , &lumi,"lumi");
  //UInt_t  run;          nt->Branch("run"         , &run,"run");

  //Int_t pass2012ICHEP1;  nt->Branch("pass2012ICHEP1", &pass2012ICHEP1,"pass2012ICHEP1");
  //Int_t pass2012ICHEP2;  nt->Branch("pass2012ICHEP2", &pass2012ICHEP2,"pass2012ICHEP2");

  //Float_t dymva1;          nt->Branch("dymva1"         , &dymva1,"dymva1");

  //main loop
  for (int iEvent = 0 ; iEvent < ch->GetEntries () ; ++iEvent)
    {
      ch->GetEntry (iEvent) ;
      if (iEvent % 10000 == 0) cout << "reading event number " << iEvent << "\n" ;

      if (dt.jetpt1 < 30) continue;
      if (dt.jetpt2 < 30) continue;
      if (dt.pt1 < 20) continue;
      if (dt.pt2 < 20) continue;

      if (fabs(dt.jeteta1) > 4.7) continue;
      if (fabs(dt.jeteta2) > 4.7) continue;
      if (fabs(dt.eta1) > 2.5) continue;
      if (fabs(dt.eta2) > 2.5) continue;


      dphill = dt.dphill;
      //detall = dt.detall;
   detajj = dt.detajj;
   dphilljet = dt.dphilljet;
   dphilljetjet = dt.dphilljetjet;
   drll = dt.drll;        
  // effW = dt.;
   jeteta1 = dt.jeteta1;
   jeteta2 = dt.jeteta2;
   jeteta3 = dt.jeteta3;
   jeteta4 = dt.jeteta4;
   jetpt1 = dt.jetpt1; 
   jetpt2 = dt.jetpt2; 
   jetpt3 = dt.jetpt3; 
   jetpt4 = dt.jetpt4; 
   phi1 = dt.phi1;   
   phi2 = dt.phi2;   
   jetphi1 = dt.jetphi1;
   jetphi2 = dt.jetphi2;
   jetphi3 = dt.jetphi3;
   jetphi4 = dt.jetphi4;
   //jetM1 = dt.jetM1;  
   //jetM2 = dt.jetM2;  
   //jetM3 = dt.jetM3;  
   //jetM4 = dt.jetM4;  
  // jettche1 = dt.; 
  // jettche2 = dt.; 
  // mctruth = dt.;  
   mll = dt.mll;        
   mjj = dt.mjj;        
  // mpmet = dt.;    
  // mth = dt.;      
  // nbjet = dt.;    
  // nbjettche = dt.;
  // nextra = dt.;   
   njet = dt.njet;       
  // nvtx = dt.;     
  // pchmet = dt.;   
   pfmet = dt.pfmet;      
   pfmetphi = dt.pfmetphi;   
  // ppfmet = dt.;   
   pt1 = dt.pt1;        
   pt2 = dt.pt2;        
   eta1 = dt.eta1;       
   eta2 = dt.eta2;       
  // ch1 = dt.;      
  // ch2 = dt.;      
  // ptll = dt.; 
  // softtche = dt.;
  // trigger = dt.; 
  // triggW = dt.;  
  //   bveto = dt.;   
  //   bveto_ip = dt.;
  //   bveto_mu = dt.;
  //   bveto_nj30 = dt.;
  //   dphiveto = dt.;  
  //   sameflav = dt.;  
  //   zveto = dt.;     
  //  event = dt.;     
  //  lumi = dt.;      
  //  run = dt.;       
  // pass2012ICHEP1 = dt.;
  // pass2012ICHEP2 = dt.;
  // dymva1 = dt.;      
 
	
      nt->Fill();
    }
}

int main(){

  TString Name = "/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino*";

 TTree *lat = new TTree ("latino","latino");
 lat->SetDirectory(0);

  TFile *outfile = new TFile("latinoSelections.root", "recreate");
  readDataset(Name,lat);
  outfile->cd();
  lat->Write();
  outfile->Close();
}
/*
  TChain * ch = new TChain ("latino") ;
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_1125_ggToH125toWWTo2LAndTau2Nu.root");
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_3125_wzttH125ToWW.root");
  ch->Add("/afs/cern.ch/user/n/ntrevisa/public/latinoHWW/latino_2125_vbfToH125toWWTo2LAndTau2Nu.root");


   TTree *t = new TTree("latino","latino");
   t->SetDirectory(0);


  for (int iEvent = 0 ; iEvent < ch->GetEntries () ; ++iEvent)
    {
      ch->GetEntry (iEvent) ;
 
      //  cout << "read " << ch->GetEntries () << " events from " << datasetBaseName.Data () << endl ;
  //  DelphesTree dt ;
  //dt.Init (ch) ;

      if (jetpt1 < 30) continue;
      if (jetpt2 < 30) continue;
      if (pt1 < 20) continue;
      if (pt2 < 20) continue;

      if (fabs(jeteta1) > 4.7) continue;
      if (fabs(jeteta2) > 4.7) continue;
      if (fabs(eta1) > 2.5) continue;
      if (fabs(eta2) > 2.5) continue;
	
      cout<<"ciao"<<endl;
}
}
*/
