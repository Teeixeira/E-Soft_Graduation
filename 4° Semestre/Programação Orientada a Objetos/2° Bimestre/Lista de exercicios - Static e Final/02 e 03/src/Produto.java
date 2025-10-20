public class Produto {

    private String descritivo;
    private double valor;
    private static double taxaImposto = 0.05;

    public Produto(String descritivo, double valor) {
        this.descritivo = descritivo;
        this.valor = valor;
    }

    public double getPrecoComImposto() {
        return this.valor * (1 + taxaImposto);
    }

    public static void setTaxaImposto(double novaTaxa){
        taxaImposto = novaTaxa;
    }

    public String getDescritivo() {
        return descritivo;
    }

    public double getValor() {
        return valor;
    }
}

