/*
🚀 Proyecto Integrador — Sesión 3: ROOT Básico

🎯 Descripción del Proyecto:

Simular un experimento de detección de partículas donde:
- Generamos una muestra de 10,000 eventos simulados con una distribución gaussiana (representando la energía detectada en MeV).
- Graficamos el histograma de esas energías.
- Ajustamos una función gaussiana para obtener la media y sigma experimental.
- Dibujamos en el mismo canvas la función teórica de referencia.
- Guardamos el resultado en un archivo .png.

🎨 Explicación del Proyecto:

- Simulamos cómo un detector podría registrar energías de partículas.
- Ajustamos la distribución para obtener parámetros experimentales.
- Superponemos la curva teórica.
- Aplicamos personalización visual y guardamos el resultado.

🚀 ¿Cómo ejecutar este proyecto?

root
.L detector_particulas.C
detector_particulas()

Esto generará el archivo detector_simulacion.png con la gráfica final.
*/

void proyecto_detector_particulas() {
    // 1. Crear histograma para las energías detectadas
    TH1F *hEnergias = new TH1F("hEnergias", "Deteccion de Particulas;Energia (MeV);Eventos", 50, 0, 10);

    // 2. Simulamos 10,000 eventos con energía distribuida alrededor de 5 MeV, sigma = 1 MeV
    for (int i = 0; i < 10000; i++) {
        hEnergias->Fill(gRandom->Gaus(5, 1));
    }

    // 3. Ajustamos una Gaussiana al histograma
    hEnergias->Fit("gaus");

    // 4. Definimos la función teórica esperada
    TF1 *teorica = new TF1("teorica", "5000*exp(-0.5*((x-5)/1)^2)", 0, 10);
    teorica->SetLineColor(kBlue);
    teorica->SetLineStyle(2);  // Línea punteada

    // 5. Dibujamos todo en el mismo canvas
    TCanvas *c7 = new TCanvas("c7", "Simulacion Detector", 800, 600);
    hEnergias->SetLineColor(kRed);
    hEnergias->Draw();
    teorica->Draw("SAME");

    // 6. Agregamos leyenda
    TLegend *legend = new TLegend(0.6, 0.7, 0.88, 0.88);
    legend->AddEntry(hEnergias, "Datos Simulados", "l");
    legend->AddEntry(teorica, "Funcion Teorica", "l");
    legend->Draw();

    // 7. Guardamos el resultado
    c7->SaveAs("detector_simulacion.png");
}
