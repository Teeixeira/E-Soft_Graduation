package MetodosEntrega;

public class Drone extends Entrega {
    public Drone(double distancia, double peso) {
        super(distancia, peso, 1);
    }

    @Override
    public double calcularFrete() {
        return 25 + (0.5 * getPeso()) + (2 * getDistancia());
    }
}
