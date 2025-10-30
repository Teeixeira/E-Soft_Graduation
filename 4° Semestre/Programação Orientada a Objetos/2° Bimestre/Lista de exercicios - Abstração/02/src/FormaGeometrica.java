public abstract class FormaGeometrica {

    private double base;
    private double altura;

    public FormaGeometrica(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    public double getBase() {
        return base;
    }

    public double getAltura() {
        return altura;
    }

    public abstract double calcularArea();
}