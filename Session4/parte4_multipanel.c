void parte4_multipanel() {
    TCanvas *c = new TCanvas("c", "Paneles", 1000, 600);
    c->Divide(2, 2);  // 2x2 = 4 paneles

    for (int i = 1; i <= 4; i++) {
        c->cd(i);
        TH1F *h = new TH1F(Form("h%d", i), Form("Histograma %d", i), 50, -3, 3);
        for (int j = 0; j < 1000; j++) {
            h->Fill(gRandom->Gaus(0, i * 0.5));
        }
        h->Draw();
    }
}
