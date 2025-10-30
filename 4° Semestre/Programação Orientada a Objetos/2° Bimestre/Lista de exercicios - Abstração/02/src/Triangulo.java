public class Triangulo extends FormaGeometrica{

    private String cor;

    public Triangulo(double base, double altura, String cor) {
        super(base, altura);
        this.cor = cor;
    }

    @Override
    public double calcularArea() {
        return (super.getAltura() * super.getAltura() / 2);
    }
}
