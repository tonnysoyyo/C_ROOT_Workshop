// Problema: Dibujar la función de decaimiento exponencial 𝑓(𝑡)=𝑒^(−𝜆𝑡)

// - TF1: Clase para definir funciones matemáticas.
// - "exp(-x)": Definimos la expresión.
// - Definimos el rango entre 0 y 5.
// - Cambiamos el color de la curva.
// - Para guardar cualquier canvas en formato .png o .pdf usamos SaveAs

void parte3_grafica_exponencial() {
    TF1 *expo = new TF1("expo", "exp(-x)", 0, 5);

    TCanvas *c3 = new TCanvas("c3", "Decaimiento Exponencial", 800, 600);
    expo->SetLineColor(kRed);
    expo->Draw();

    c3->SaveAs("decaimiento.png");
}
