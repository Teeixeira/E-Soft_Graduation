package MetodosEntrega;

public class Correios extends Entrega {
    public Correios(double distancia, double peso) {
        super(distancia, peso, 5);
    }

    @Override
    public double calcularFrete() {
        return 12 + (1.5 * getPeso()) + (0.05 * getDistancia());
    }
}
