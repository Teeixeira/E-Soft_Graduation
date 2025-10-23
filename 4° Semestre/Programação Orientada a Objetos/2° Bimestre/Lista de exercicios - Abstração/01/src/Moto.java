public class Moto extends Veiculo {

    private int cilindradas;
    private String modelo;

    public Moto(String placa, String marca, int cilindradas, double valor, String modelo) {
        super(placa, marca, valor);
        this.cilindradas = cilindradas;
        this.modelo = modelo;
    }

    public int getCilindradas() {
        return cilindradas;
    }

    public String getModelo() {
        return modelo;
    }

    @Override
    public double calcularSeguro() {
        return super.getValor() * 0.08;
    }
}
