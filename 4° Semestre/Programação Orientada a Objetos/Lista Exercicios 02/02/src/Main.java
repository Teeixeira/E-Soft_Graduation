import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe o raio do circulo: ");
        double raio = scanner.nextDouble();

        Circulo circulo = new Circulo(raio);

        System.out.printf("Area = %f\nPerimetro = %f", circulo.cacularArea(), circulo.cacularPerimetro());

    }
}