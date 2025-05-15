void parte2_graficar_errores() {
    const int N = 6;
    double x[N]  = {1, 2, 3, 4, 5, 6};
    double y[N]  = {2.1, 3.9, 6.2, 7.8, 10.1, 12.2};
    double ex[N] = {0, 0, 0, 0, 0, 0};
    double ey[N] = {0.2, 0.3, 0.25, 0.3, 0.35, 0.4};

    TGraphErrors *gr = new TGraphErrors(N, x, y, ex, ey);
    gr->SetTitle("Mediciones experimentales;Tiempo (s);Distancia (m)");
    gr->SetMarkerStyle(20);
    gr->SetLineColor(kMagenta+2);

    TCanvas *c = new TCanvas("c", "Errores", 800, 600);
    gr->Draw("AP");  // A = axis, P = points
}
