// Problema: Simular una distribución Gaussiana

void parte2_histograma_gaussiana() {
    TH1F *h2 = new TH1F("h2", "Distribucion Gaussiana;Valor;Frecuencia", 50, -5, 5);

    for (int i = 0; i < 10000; i++) {
        float valor = gRandom->Gaus(0, 1);  // Media 0, sigma 1
        h2->Fill(valor);
    }

    TCanvas *c2 = new TCanvas("c2", "Canvas", 800, 600);
    h2->SetLineColor(kBlue);
    h2->Draw();
}
