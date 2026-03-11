package MetodosEntrega;

public class Transportadora extends Entrega {
    public Transportadora(double distancia, double peso) {
        super(distancia, peso, 3);
    }

    @Override
    public double calcularFrete() {
        double frete = 20 + getPeso() + (0.03 * getDistancia());
        if (getPeso() > 50) {
            frete *= 0.9;
        }
        return frete;
    }
}
