public class Quarto {

    private int numero;
    private String tipo;
    private double precoPorNoite;
    private Boolean ocupado = false;
    private Hospede hospedeAtual;

    public Quarto(int numero, String tipo, double precoPorNoite, Boolean ocupado, Hospede hospedeAtual) {
        this.numero = numero;
        this.tipo = tipo;
        this.precoPorNoite = precoPorNoite;
        this.ocupado = ocupado;
        this.hospedeAtual = hospedeAtual;
    }

    public void ocupar(Hospede hospede){
        this.ocupado = true;
        hospedeAtual = hospede;
    }

    public void liberar(){
        this.ocupado = false;
        this.hospedeAtual = null;
    }

    public Boolean isOcupado(){
        return this.ocupado;
    }

    public int getNumero() {
        return numero;
    }

    public Hospede getHospedeAtual() {
        return hospedeAtual;
    }

    public String getTipo() {
        return tipo;
    }
}
