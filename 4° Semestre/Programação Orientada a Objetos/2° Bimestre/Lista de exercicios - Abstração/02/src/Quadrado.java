public class Quadrado extends FormaGeometrica {

    private String cor;

    public Quadrado(double base, double altura, String cor) {
        super(base, altura);
        this.cor = cor;
    }

    @Override
    public double calcularArea() {
        return super.getAltura() * super.getAltura();
    }
}
