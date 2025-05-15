void espectro_simulado() {
    TCanvas *c = new TCanvas("c", "Espectro Simulado", 1000, 600);
    c->Divide(2, 1);

    // HISTOGRAMA DE FONDO
    TH1F *fondo = new TH1F("fondo", "Espectro de Fondo;Energia (MeV);Eventos", 100, 0, 10);
    for (int i = 0; i < 5000; i++) {
        fondo->Fill(gRandom->Exp(2.5));  // Distribución exponencial
    }
    fondo->SetLineColor(kGray+2);

    // HISTOGRAMA DE SEÑAL (Gaussiana encima del fondo)
    TH1F *senal = new TH1F("senal", "Senal + Fondo;Energia (MeV);Eventos", 100, 0, 10);
    for (int i = 0; i < 5000; i++) {
        senal->Fill(gRandom->Exp(2.5)); // fondo
    }
    for (int i = 0; i < 1000; i++) {
        senal->Fill(gRandom->Gaus(5, 0.3));  // señal
    }
    senal->SetLineColor(kRed);
    senal->SetLineWidth(2);

    // PANEL 1: Fondo solo
    c->cd(1);
    fondo->Draw();

    // PANEL 2: Señal + fondo
    c->cd(2);
    senal->Draw();

    // Ajuste de señal
    senal->Fit("gaus", "", "", 4, 6);

    // Guardar en root
    TFile *f = new TFile("espectro.root", "RECREATE");
    fondo->Write();
    senal->Write();
    f->Close();
}
