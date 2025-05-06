// Problema: Comparar dos distribuciones en un mismo canvas con leyenda.

// - Uso de Draw("SAME") para superponer histogramas.
// - TLegend para añadir una leyenda descriptiva.
// - Diferenciación por colores.

void parte5_comparar_distribuciones() {
    TH1F *h1 = new TH1F("h1", "Comparacion de Distribuciones;Valor;Frecuencia", 50, -5, 5);
    TH1F *h2 = new TH1F("h2", "Gauss 2", 50, -5, 5);

    for (int i = 0; i < 5000; i++) {
        h1->Fill(gRandom->Gaus(0, 1));
        h2->Fill(gRandom->Gaus(1, 1.5));
    }

    TCanvas *c6 = new TCanvas("c6", "Comparacion", 800, 600);
    h1->SetLineColor(kRed);
    h2->SetLineColor(kBlue);

    h1->Draw();
    h2->Draw("SAME");  // Dibuja sobre el mismo canvas

    TLegend *legend = new TLegend(0.7, 0.7, 0.9, 0.9);
    legend->AddEntry(h1, "Gauss (0,1)", "l");
    legend->AddEntry(h2, "Gauss (1,1.5)", "l");
    legend->Draw();
}
