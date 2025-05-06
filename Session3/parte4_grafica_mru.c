// Problema: Graficar la relación entre tiempo y distancia para un objeto en movimiento rectilíneo uniforme (MRU).

// - TGraph permite graficar pares de datos (x, y).
// - Personalizamos los puntos y líneas.
// - "ALP" indica qué elementos dibujar.

void parte4_grafica_mru() {
    const int N = 5;
    double tiempo[N]   = {0, 1, 2, 3, 4};   // segundos
    double distancia[N] = {0, 2, 4, 6, 8};  // metros (velocidad constante 2 m/s)

    TGraph *gr = new TGraph(N, tiempo, distancia);

    gr->SetTitle("Movimiento Rectilineo Uniforme;Tiempo (s);Distancia (m)");
    gr->SetMarkerStyle(21);
    gr->SetLineColor(kBlue);

    TCanvas *c5 = new TCanvas("c5", "MRU", 800, 600);
    gr->Draw("ALP");  // A = Axis, L = Line, P = Points
}
