//This code opens the Dark Matter files and creates a new TTree where the informations are translated in the latino's default
//compile typing: c++ -O2 -lm `root-config --cflags --glibs` -o latinoDM latinoDM.cpp
//run typing: ./latinoDM

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
#include "TSystem.h"

#include "DelphesTree.h"
#include "DelphesTree.C"

using namespace std;

float pTtoE(float eta, float pT){
  float theta =  2*atan(exp(-1.*eta));
  if (theta != 0)
    return pT/cos(theta);
  else{
    cout<<"theta = 0, cannot carry out the calculation. Fill E with 0"<<endl;
    return 0;
    }
}

float etatotheta(float eta){
  return 2*atan(exp(-1.*eta));
}


int readDataset (TString datasetBaseName, TTree* nt)
{
  TChain * ch = new TChain ("Delphes") ;
  ch->Add (datasetBaseName) ;
  cout << "read " << ch->GetEntries () << " events from " << datasetBaseName.Data () << endl ;
  DelphesTree dt ;
  dt.Init (ch) ;
  
  //create ntuple
  
  //  Float_t baseW;        nt->Branch("baseW"       , &baseW,"baseW");
  //  Float_t channel;      nt->Branch("channel"     , &channel,"channel");
  //Float_t chmet;        nt->Branch("chmet"       , &chmet,"chmet");
  //Float_t dataset;      nt->Branch("dataset"     , &dataset,"dataset");
  Float_t dphill;       nt->Branch("dphill"      , &dphill,"dphill");
  //  Float_t detall;       //nt->Branch("detall"      , &detall,"detall");
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

      int cont = 0;

  //main loop
  for (int iEvent = 0 ; iEvent < ch->GetEntries () ; ++iEvent)
    {
      ch->GetEntry (iEvent) ;
      if (iEvent % 10000 == 0) cout << "reading event number " << iEvent << "\n" ;

      std::vector<float> lepPt;
      std::vector<float> lepPhi;
      std::vector<float> lepEta;

      int nLep = 0;
      /*
      if (dt.Jet_PT[0] < 30) continue;
      if (dt.Jet_PT[1] < 30) continue;
      if (dt.Electron_PT[0] < 20) continue;
      if (dt.Electron_PT[1]  < 20) continue;

      if (fabs(dt.Jet_Eta[0]) > 4.7) continue;
      if (fabs(dt.Jet_Eta[1]) > 4.7) continue;
      if (fabs(dt.Electron_Eta[0]) > 2.5) continue;
      if (fabs(dt.Electron_Eta[1]) > 2.5) continue;
      */
      //counting leptons, independently on the flavour, using latino's selections
      if(dt.Electron_PT[0] > 10 && fabs(dt.Electron_Eta[0]) < 2.5){
	++nLep;
	lepPt.push_back(dt.Electron_PT[0]);
	lepEta.push_back(dt.Electron_Eta[0]);
	lepPhi.push_back(dt.Electron_Phi[0]);
      }
      
      if(dt.Electron_PT[1] > 10 && fabs(dt.Electron_Eta[1]) < 2.5){
	++nLep;
	lepPt.push_back(dt.Electron_PT[1]);
	lepEta.push_back(dt.Electron_Eta[1]);
	lepPhi.push_back(dt.Electron_Phi[1]);
      }

      if(dt.Muon_PT[0] > 10  && fabs(dt.Muon_Eta[0]) < 2.4){
	++nLep;
	lepPt.push_back(dt.Muon_PT[0]);
	lepEta.push_back(dt.Muon_Eta[0]);
	lepPhi.push_back(dt.Muon_Phi[0]);
      }
      
      if(dt.Muon_PT[1] > 10  && fabs(dt.Muon_Eta[1]) < 2.4){
	++nLep;
	lepPt.push_back(dt.Muon_PT[1]);
	lepEta.push_back(dt.Muon_Eta[1]);
	lepPhi.push_back(dt.Muon_Phi[1]);
      }

      // we want at least two hard leptons
      if (nLep < 2) continue;
      
      //ordering leptons in pT
      float app = 0.;
      for (int i = 0 ; i < lepPt.size() ; ++i)
	for (int j = i + 1 ; j < lepPt.size() ; ++j)
	  if ( lepPt.at(i) < lepPt.at(j) ){
	    app = lepPt.at(i);
	    lepPt.at(i) = lepPt.at(j);
	    lepPt.at(j) = app;
	    app = lepPhi.at(i);
	    lepPhi.at(i) = lepPhi.at(j);
	    lepPhi.at(j) = app;
	    app = lepEta.at(i);
	    lepEta.at(i) = lepEta.at(j);
	    lepEta.at(j) = app;
      }

      //building fundamental jets variables
      std::vector<float> jetPt;
      std::vector<float> jetPhi;
      std::vector<float> jetEta;
      std::vector<float> jetM;

      
      //use the latino's jets selections: pT > 30GeV, |eta| < 4.7
      for (int i = 0; i < 10; ++i)
	if(dt.Jet_PT[i] > 20 && fabs(dt.Jet_Eta[i]) < 4.7){
	  jetPt.push_back(dt.Jet_PT[i]);
	  jetEta.push_back(dt.Jet_Eta[i]);
	  jetPhi.push_back(dt.Jet_Phi[i]);
	  jetM.push_back(dt.Jet_Mass[i]);
	}

      //ordering jets in pt
      app = 0.;
      for (int i = 0 ; i < jetPt.size() ; ++i)
	for (int j = i + 1 ; j < jetPt.size() ; ++j)
	  if ( jetPt.at(i) < jetPt.at(j) ){
	    app = jetPt.at(i);
	    jetPt.at(i) = jetPt.at(j);
	    jetPt.at(j) = app;
	    app = jetPhi.at(i);
	    jetPhi.at(i) = jetPhi.at(j);
	    jetPhi.at(j) = app;
	    app = jetEta.at(i);
	    jetEta.at(i) = jetEta.at(j);
	    jetEta.at(j) = app;
	    app = jetM.at(i);
	    jetM.at(i) = jetM.at(j);
	    jetM.at(j) = app;
     }

    //basic leptons variables
    pt1 = lepPt.at(0);
    pt2 = lepPt.at(1);
    phi1 = lepPhi.at(0);
    phi2 = lepPhi.at(1);
    eta1 = lepEta.at(0);
    eta2 = lepEta.at(1);

    njet = jetPt.size();

    //basic jets variables
    if( jetPt.size() > 0 ){
      jeteta1 = jetEta.at(0);
      jetphi1 = jetPhi.at(0);
      jetpt1 = jetPt.at(0);
      jetM1 = jetM.at(0);
    }
    if( jetPt.size() > 1 ){
      jeteta2 = jetEta.at(1);
      jetphi2 = jetPhi.at(1);
      jetpt2 = jetPt.at(1);
      jetM2 = jetM.at(1);
    }
    if( jetPt.size() > 2 ){
      jeteta3 = jetEta.at(2);
      jetphi3 = jetPhi.at(2);
      jetpt3 = jetPt.at(2);
      jetM3 = jetM.at(2);
    }
    if( jetPt.size() > 3 ){
      jeteta4 = jetEta.at(3);
      jetphi4 = jetPhi.at(3);
      jetpt4 = jetPt.at(3);
      jetM4 = jetM.at(3);
    }

    //basic MET variables
    pfmet = dt.MissingET_MET[0];
    pfmetphi = dt.MissingET_Phi[0];

      //building di-lepton invariant mass (leptons are massless):
      TLorentzVector lep1tlv (0., 0., 0., 0.) ;
      lep1tlv.SetPtEtaPhiM (pt1, eta1, phi1, 0.);	

      TLorentzVector lep2tlv (0., 0., 0., 0.) ;
      lep2tlv.SetPtEtaPhiM (pt2, eta2, phi2, 0.);	

    TLorentzVector dileptlv (0., 0., 0., 0.) ;
    dileptlv = lep1tlv + lep2tlv;

    mll = dileptlv.M();

    //building deltaPhi_ll
    dphill = fabs (phi1 - phi2);
    if( dphill > TMath::Pi() )
      dphill = 2*TMath::Pi() - dphill;

    //building deltaR_ll
    Float_t detall = fabs (eta1 - eta2);
    drll = sqrt(detall*detall + dphill*dphill);
    
    //building dphilljet
    float meanllphi = dileptlv.Phi();//min(phi1+dphill/2,phi2+dphill/2);
    dphilljet = fabs (meanllphi - jetphi1);
    if( dphilljet > TMath::Pi() )
      dphilljet = 2*TMath::Pi() - dphilljet;

    //building di-jet invariant mass
    float jet1E = pTtoE(jeteta1,jetpt1);
    TLorentzVector jet1tlv = (0.,0.,0.,0.);
    jet1tlv.SetPtEtaPhiM(jetpt1,jeteta1,jetphi1,jetM1);//pTtoE(jeteta1,jetpt1));

    float jet2E = pTtoE(jeteta2,jetpt2);
    TLorentzVector jet2tlv = (0.,0.,0.,0.);
    jet2tlv.SetPtEtaPhiM(jetpt2,jeteta2,jetphi2,jetM2);//pTtoE(jeteta2,jetpt2));

    TLorentzVector dijettlv = jet1tlv + jet2tlv;
    mjj = dijettlv.M();
    
    //building deltaEta_jj
    detajj = fabs (jeteta1 - jeteta2);

    //building dphilljetjet
    float meanjetjetphi = dijettlv.Phi();
    dphilljetjet = fabs (meanllphi - meanjetjetphi);
    if( dphilljetjet > TMath::Pi() )
      dphilljetjet = 2*TMath::Pi() - dphilljetjet;

      ++cont;

      nt->Fill();
    }

      cout<<cont<<endl;

}

int main(){

TString Name = "/afs/cern.ch/user/d/dburns/public/HWWSignalMC/ppTOhxx_hTO2wTO2l2v_100GeV_8TeV.root";

 TTree *lat = new TTree ("latino","latino");
 lat->SetDirectory(0);

  TFile *outfile = new TFile("DarkMatterLatino.root", "recreate");
  readDataset(Name,lat);
  outfile->cd();
  lat->Write();
  outfile->Close();

  /*  TSystem gSystem;
  gSystem.Exec("eosmount ../eosdir");

  TString Name13 = "/afs/cern.ch/user/n/ntrevisa/eosdir/cms/store/group/phys_higgs/cmshww/amassiro/RunII/test/GluGluToHToWWTo2LAndTau2Nu_M-125_13TeV-powheg-pythia6/crab_MCtest/150116_163732/0000/stepB_MC_ggHww_1.root";

 TTree *lat13 = new TTree ("latino","latino");
 lat13->SetDirectory(0);

  TFile *outfile13 = new TFile("DarkMatterLatino13TeV.root", "recreate");
  readDataset(Name13,lat13);
  outfile13->cd();
  lat13->Write();
  outfile13->Close();*/


}
