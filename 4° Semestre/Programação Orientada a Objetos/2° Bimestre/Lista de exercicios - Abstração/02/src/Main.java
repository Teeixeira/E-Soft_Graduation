public class Main {
    public static void main(String[] args) {

        Quadrado quadrado = new Quadrado(10, 5, "Azul");
        Triangulo triangulo = new Triangulo(5, 5, "Vermelho");

        System.out.println("Calcular Area:");
        System.out.printf("Quadrado: %.2f\n", quadrado.calcularArea());
        System.out.printf("Triangulo: %.2f\n", triangulo.calcularArea());
    }
}