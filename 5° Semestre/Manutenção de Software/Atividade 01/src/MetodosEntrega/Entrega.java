package MetodosEntrega;

abstract public class Entrega {
    private double distancia;
    private double peso;
    private static int prazo;

    public Entrega(double distancia, double peso, int prazo) {
        this.distancia = distancia;
        this.peso = peso;
        Entrega.prazo = prazo;
    }

    public double getDistancia() {
        return distancia;
    }

    public void setDistancia(double distancia) {
        this.distancia = distancia;
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public int getPrazo() {
        return prazo;
    }

    public void setPrazo(int prazo) {
        this.prazo = prazo;
    }

    abstract public double calcularFrete();
}
