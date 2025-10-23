public class Carro extends Veiculo {

    private String modelo;
    private String cavalos;

    public Carro(String placa, String marca, String modelo, double valor, String cavalos) {
        super(placa, marca, valor);
        this.modelo = modelo;
        this.cavalos = cavalos;
    }

    public String getModelo() {
        return modelo;
    }

    public String getCavalos() {
        return cavalos;
    }

    @Override
    public double calcularSeguro() {
        return super.getValor() * 0.1;
    }
}
