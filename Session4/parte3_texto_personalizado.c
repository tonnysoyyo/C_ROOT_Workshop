void parte3_texto_personalizado() {
    TF1 *f = new TF1("f", "exp(-x)", 0, 5);

    TCanvas *c = new TCanvas("c", "Con texto", 800, 600);
    f->Draw();

    TPaveText *pt = new TPaveText(2, 0.5, 4, 0.8, "brNDC");
    pt->AddText("Ejemplo de decaimiento exponencial");
    pt->Draw();

    TLatex *latex = new TLatex(1, 0.8, "#font[12]{f(x) = e^{-x}}");
    latex->SetTextSize(0.04);
    latex->Draw();
}
