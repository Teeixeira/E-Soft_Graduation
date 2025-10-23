public abstract class Veiculo {

    private String placa;
    private String marca;
    private double valor;

    public Veiculo(String placa, String marca, double valor) {
        this.placa = placa;
        this.marca = marca;
        this.valor = valor;
    }

    public String getPlaca() {
        return placa;
    }

    public String getMarca() {
        return marca;
    }

    public double getValor() {
        return valor;
    }

    public abstract double calcularSeguro();
}