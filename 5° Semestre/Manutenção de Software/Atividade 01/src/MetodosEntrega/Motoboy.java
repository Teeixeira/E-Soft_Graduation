package MetodosEntrega;

public class Motoboy extends Entrega {
    public Motoboy(double distancia, double peso) {
        super(distancia, peso, 1);
    }

    @Override
    public double calcularFrete() {
        return 8 + (2 * getDistancia());
    }
}
