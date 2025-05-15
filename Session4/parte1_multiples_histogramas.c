void parte1_multiples_histogramas() {
    TH1F *h1 = new TH1F("h1", "Comparacion de Gaussianas;Valor;Frecuencia", 50, -5, 10);
    TH1F *h2 = new TH1F("h2", "Gauss 2", 50, -5, 10);
    TH1F *h3 = new TH1F("h3", "Gauss 3", 50, -5, 10);

    for (int i = 0; i < 10000; i++) {
        h1->Fill(gRandom->Gaus(0, 1));
        h2->Fill(gRandom->Gaus(2, 0.5));
        h3->Fill(gRandom->Gaus(5, 1.5));
    }

    h1->SetLineColor(kRed); h1->SetLineWidth(2);
    h2->SetLineColor(kBlue); h2->SetLineStyle(2);
    h3->SetLineColor(kGreen+2); h3->SetLineStyle(3);

    TCanvas *c = new TCanvas("c", "Multihistogramas", 800, 600);
    h1->Draw();
    h2->Draw("SAME");
    h3->Draw("SAME");

    TLegend *leg = new TLegend(0.6, 0.7, 0.88, 0.88);
    leg->AddEntry(h1, "Gauss (0,1)", "l");
    leg->AddEntry(h2, "Gauss (2,0.5)", "l");
    leg->AddEntry(h3, "Gauss (5,1.5)", "l");
    leg->Draw();
}
