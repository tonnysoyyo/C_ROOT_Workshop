void parte5_guardar_datos() {
    TFile *f = new TFile("salida.root", "RECREATE");

    TH1F *h = new TH1F("h", "Datos", 50, -3, 3);
    for (int i = 0; i < 1000; i++) {
        h->Fill(gRandom->Gaus(0, 1));
    }

    h->Write();  // Guardamos el histograma
    f->Close();

    cout << "Archivo 'salida.root' creado." << endl;
}
