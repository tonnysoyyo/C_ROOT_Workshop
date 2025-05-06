/*
🎯 ¿Qué es ROOT?

ROOT es un framework desarrollado por CERN para el análisis de grandes volúmenes de datos, muy utilizado en física de altas energías, astrofísica y otras áreas científicas.

Permite trabajar con:

- Histogramas.
- Gráficas.
- Manejo de datos estructurados (TTrees, TFiles).
- Ajustes (fits), estadísticas, y más.

✅ ROOT se puede usar de forma interactiva (con .C o en consola) o escribiendo programas en C++ que se compilan.

Para ejecutar:

root

Esto abrirá la consola interactiva de ROOT.

Para correr un script:

root script_basico.C
*/

// Problema: Crear un histograma con 1000 números aleatorios distribuidos uniformemente.

// - TH1F: Histograma de tipo float, con 50 bins entre 0 y 1.
// - gRandom->Uniform(): Generador de números aleatorios uniforme.
// - TCanvas: Lienzo donde dibujamos.
// - El histograma se dibuja con Draw().

void parte1_histograma_uniforme() {
    TH1F *h1 = new TH1F("h1", "Distribucion Uniforme;Valor;Frecuencia", 50, 0, 1);

    for (int i = 0; i < 1000; i++) {
        float valor = gRandom->Uniform(0, 1);  // Número aleatorio entre 0 y 1
        h1->Fill(valor);
    }

    TCanvas *c1 = new TCanvas("c1", "Canvas", 800, 600);
    h1->Draw();
}

// Para correrlo:
// root
// .L histograma_uniforme.C 
// histograma_uniforme()
