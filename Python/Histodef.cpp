#ifndef Histodef_cpp
#define Histodef_cpp
#include "TH1.h"

    // Define the histogram objects
    TH1D* h_Muon_pt = new TH1D("h_Muon_pt","h_Muon_pt",100,0,200);
    TH1D* h_Muon_eta = new TH1D("h_Muon_eta","h_Muon_eta",100,-5,5);
    TH1D* h_Electron_pt = new TH1D("h_Electron_pt", "Electron_pt", 100, 0, 200);
    TH1D* h_Electron_eta = new TH1D("h_Electron_eta", "Electron_eta", 100, -5, 5);
    // define the weighted histograms
    TH1D* h_Muon_pt_weighted = new TH1D("h_Muon_pt_weighted","h_Muon_pt_weighted",100,0,200);
    TH1D* h_Muon_eta_weighted = new TH1D("h_Muon_eta_weighted","h_Muon_eta_weighted",100,-5,5);
    TH1D* h_Electron_pt_weighted = new TH1D("h_Electron_pt_weighted", "Electron_pt_weighted", 100, 0, 200);
    TH1D* h_Electron_eta_weighted = new TH1D("h_Electron_eta_weighted", "Electron_eta_weighted", 100, -5, 5);

    TH1D* h_Muon_pt_from_W = new TH1D("Muon_pt", "Muon_pt_from_W", 100, 0, 200);
    TH1D* h_Muon_eta_from_W = new TH1D("Muon_eta", "Muon_eta_from_W", 100, -5, 5);
    TH1D* h_Electron_pt_from_W = new TH1D("Electron_pt", "Electron_pt_from_W", 100, 0, 200);
    TH1D* h_Electron_eta_from_W = new TH1D("Electron_eta", "Electron_eta_from_W", 100, -5, 5);
    // add weighted histograms
    TH1D* h_Muon_pt_weighted_from_W = new TH1D("Muon_pt_weighted", "Muon_pt_weighted_from_W", 100, 0, 200);
    TH1D* h_Muon_eta_weighted_from_W = new TH1D("Muon_eta_weighted", "Muon_eta_weighted_from_W", 100, -5, 5);
    TH1D* h_Electron_pt_weighted_from_W = new TH1D("Electron_pt_weighted", "Electron_pt_weighted_from_W", 100, 0, 200);
    TH1D* h_Electron_eta_weighted_from_W = new TH1D("Electron_eta_weighted", "Electron_eta_weighted_from_W", 100, -5, 5);

    TH1D* h_Muon_pt_trigger = new TH1D("Muon_pt_trigger", "Muon_pt_trigger", 100, 0, 200);
    TH1D* h_Muon_eta_trigger = new TH1D("Muon_eta_trigger", "Muon_eta_trigger", 100, -5, 5);
    TH1D* h_Electron_pt_trigger = new TH1D("Electron_pt_trigger", "Electron_pt_trigger", 100, 0, 200);
    TH1D* h_Electron_eta_trigger = new TH1D("Electron_eta_trigger", "Electron_eta_trigger", 100, -5, 5);

    TH1D* h_Muon_Electron_invariant_mass = new TH1D("Muon_Electron_invariant_mass", "Muon_Electron_invariant_mass", 100, 12, 412);
    TH1D* h_Muon_Muon_invariant_mass = new TH1D("Muon_Muon_invariant_mass", "Muon_Muon_invariant_mass", 100, 12, 412);
    TH1D* h_Electron_Electron_invariant_mass = new TH1D("Electron_Electron_invariant_mass", "Electron_Electron_invariant_mass", 100, 12, 412);
    // add weighted histograms
    TH1D* h_Muon_Electron_invariant_mass_weighted = new TH1D("Muon_Electron_invariant_mass_weighted", "Muon_Electron_invariant_mass_weighted", 100, 12, 412);
    TH1D* h_Muon_Muon_invariant_mass_weighted = new TH1D("Muon_Muon_invariant_mass_weighted", "Muon_Muon_invariant_mass_weighted", 100, 12, 412);
    TH1D* h_Electron_Electron_invariant_mass_weighted = new TH1D("Electron_Electron_invariant_mass_weighted", "Electron_Electron_invariant_mass_weighted", 100, 12, 412);

    TH1D* h_leading_lepton_pt = new TH1D("leading_lepton_pt", "leading_lepton_pt", 45, 20, 200);
    TH1D* h_leading_lepton_pt_weighted = new TH1D("leading_lepton_pt_weighted", "leading_lepton_pt_weighted", 45, 20, 200);
#endif // Histodef_cpp
