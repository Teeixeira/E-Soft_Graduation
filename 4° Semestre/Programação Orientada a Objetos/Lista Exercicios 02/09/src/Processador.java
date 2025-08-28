public class Processador {
    private String modelo;
    private double velocidadeGHz;

    public Processador(String modelo, double velocidadeGHz) {
        this.modelo = modelo;
        this.velocidadeGHz = velocidadeGHz;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public double getVelocidadeGHz() {
        return velocidadeGHz;
    }

    public void setVelocidadeGHz(double velocidadeGHz) {
        this.velocidadeGHz = velocidadeGHz;
    }
}