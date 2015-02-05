//compile typing: c++ -O2 -lm `root-config --cflags --glibs` -o latinoDM latinoDM.cpp
//run typing: ./latinoDM

#include "TROOT.h"
#include "TFile.h"

#include DelphesTree.h

using namespace std;

int readDataset (TString datasetBaseName, TTree* nt, float crosssection)//(TString datasetBaseName, map<TString, TH1F *> histos) 
{
  TChain * ch = new TChain ("Delphes") ;
  ch->Add (datasetBaseName) ;
  cout << "read " << ch->GetEntries () << " events from " << datasetBaseName.Data () << endl ;
  DelphesTree dt ;
  dt.Init (ch) ;
  
  //create ntuple
  
  Float_t baseW;        nt->Branch("baseW"       , &baseW,"baseW");
  Float_t channel;      nt->Branch("channel"     , &channel,"channel");
  Float_t chmet;        nt->Branch("chmet"       , &chmet,"chmet");
  Float_t dataset;      nt->Branch("dataset"     , &dataset,"dataset");
  Float_t dphill;       nt->Branch("dphill"      , &dphill,"dphill");
  Float_t dphilljet;    nt->Branch("dphilljet"   , &dphilljet,"dphilljet");
  Float_t dphilljetjet; nt->Branch("dphilljetjet", &dphilljetjet,"dphilljetjet");
  Float_t drll;         nt->Branch("drll"        , &drll,"drll");
  Float_t effW;         nt->Branch("effW"        , &effW,""effW);
  Float_t jeteta1;      nt->Branch("jeteta1"     , &jeteta1,"jeteta1");
  Float_t jeteta2;      nt->Branch("jeteta2"     , &jeteta2,"jeteta2");
  Float_t jeteta3;      nt->Branch("jeteta3"     , &jeteta3,"jeteta3");
  Float_t jetpt1;       nt->Branch("jetpt1"      , &jetpt1,"jetpt1");
  Float_t jetpt2;       nt->Branch("jetpt2"      , &jetpt2,"jetpt2");
  Float_t jetpt3;       nt->Branch("jetpt3"      , &jetpt3,"jetpt3");
  Float_t jettche1;     nt->Branch("jettche1"    , &jettche1,"jettche1");
  Float_t jettche2;     nt->Branch("jettche2"    , &jettche2,"jettche2");
  Float_t mctruth;      nt->Branch("mctruth"     , &mctruth,"mctruth");
  Float_t mll;          nt->Branch("mll"         , &mll,"mll");
  Float_t mpmet;        nt->Branch("mpmet"       , &mpmet,"mpmet");
  Float_t mth;          nt->Branch("mth"         , &mth,"mth");
  Float_t nbjet;        nt->Branch("nbjet"       , &nbjet,"nbjet");
  Float_t nbjettche;    nt->Branch("nbjettche"   , &nbjettche,"nbjettche");
  Float_t nextra;       nt->Branch("nextra"      , &nextra,"nextra");
  Float_t njet;         nt->Branch("njet"        , &njet,"njet");
  Float_t nvtx;         nt->Branch("nvtx"        , &nvtx,"nvtx");
  Float_t pchmet;       nt->Branch("pchmet"      , &pchmet,"pchmet");
  Float_t pfmet;        nt->Branch("pfmet"       , &pfmet,"pfmet");
  Float_t ppfmet;       nt->Branch("ppfmet"      , &ppfmet,"ppfmet");
  Float_t pt1;          nt->Branch("pt1"         , &pt1,"pt1");
  Float_t pt2;          nt->Branch("pt2"         , &pt2,"pt2");
  Float_t eta1;         nt->Branch("eta1"        , &eta1,"eta1");
  Float_t eta2;         nt->Branch("eta2"        , &eta2,"eta2");
  Float_t ch1;          nt->Branch("ch1"         , &ch1,"ch1");
  Float_t ch2;          nt->Branch("ch2"         , &ch2,"ch2");
  Float_t ptll;         nt->Branch("ptll"        , &ptll,"ptll");
  Float_t softtche;     nt->Branch("softtche"    , &softtche,"softtche");
  Float_t trigger;      nt->Branch("trigger"     , &trigger,"trigger");
  Float_t triggW;       nt->Branch("triggW"      , &triggW,"triggW");
  Int_t   bveto;        nt->Branch("bveto"       , &bveto,"bveto");
  Int_t   bveto_ip;     nt->Branch("bveto_ip"    , &bveto_ip,"bveto_ip");
  Int_t   bveto_mu;     nt->Branch("bveto_mu"    , &bveto_mu,"bveto_mu");
  Int_t   bveto_nj30;   nt->Branch("bveto_nj30"  , &bveto_nj30,"bveto_nj30");
  Int_t   dphiveto;     nt->Branch("dphiveto"    , &dphiveto,"dphiveto");
  Int_t   sameflav;     nt->Branch("sameflav"    , &sameflav,"sameflav");
  Int_t   zveto;        nt->Branch("zveto"       , &zveto,"zveto");
  UInt_t  event;        nt->Branch("event"       , &event,"event");
  UInt_t  lumi;         nt->Branch("lumi"        , &lumi,"lumi");
  UInt_t  run;          nt->Branch("run"         , &run,"run");

  Int_t pass2012ICHEP1;  nt->Branch("pass2012ICHEP1", &pass2012ICHEP1,"pass2012ICHEP1");
  Int_t pass2012ICHEP2;  nt->Branch("pass2012ICHEP2", &pass2012ICHEP2,"pass2012ICHEP2");

  Float_t dymva1;          nt->Branch("dymva1"         , &dymva1,"dymva1");

  //main loop
  for (int iEvent = 0 ; iEvent < ch->GetEntries () ; ++iEvent)
    {
      ch->GetEntry (10);//(iEvent) ;
      if (iEvent % 10000 == 0) cout << "reading event number " << iEvent << "\n" ;

      //computing di-lepton invariant mass
      cout<<Electron_PT[0]<<endl;
      cout<<Electron_PT[1]<<endl;

      cout<<Muon_PT[0]<<endl;
      cout<<Muon_PT[1]<<endl;



      nt->Fill();
    }
}

int main(){

TString datasetaBaseName = "/afs/cern.ch/user/d/dburns/public/HWWSignalMC/ppTOhxx_hTO2wTO2l2v_100GeV_8TeV.root";

  TFile *outfile_QCD = new TFile("ntuQCD_mu_mu_new.root", "recreate");
  readDataset(InputName_QCD,QCD,bkgWeight);  
  outfile_QCD->cd();
  QCD->Write();
  outfile_QCD->Close();

//  TFile *f = new TFile("/afs/cern.ch/user/d/dburns/public/HWWSignalMC/ppTOhxx_hTO2wTO2l2v_100GeV_8TeV.root","read");
//  TTree *t = (TTree*)f -> Get("Delphes");

  //variables definition, set branch address

}
