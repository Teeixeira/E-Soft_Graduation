import java.util.Scanner;

public class Exercicio_02 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe o primeiro número: ");
        int num1 = scanner.nextInt();

        double raiz = Math.sqrt(num1);

        System.out.printf("Dobro: %d\nTriplo: %d\nRaiz Quadrada: %.2f\n", num1 * 2, num1 * 3, raiz);

/* ---------------------------------------------------------------------------------------------------------------- */

        System.out.println("Informe um valor em reais: ");
        double reais = scanner.nextDouble();
        double dolar = 5.51;
        System.out.printf("Valor em dolar: %.2f\n", reais * dolar);

/* ---------------------------------------------------------------------------------------------------------------- */

        System.out.println("Informe um segundo numero: ");
        double num2 = scanner.nextDouble();

        System.out.printf("Numero ao quadrado: %.2f\nNumero ao cubo: %.2f\n", num2 * num2, (num2 * num2) * num2);

/* ---------------------------------------------------------------------------------------------------------------- */

        double numeros[] = new double[2];
        double maior = 0, menor = 0;

        for(int i = 0; i < 2; i++){
            System.out.printf("Informe o %d° número: ", i + 1);
            numeros[i] = scanner.nextInt();

            if(i == 0){
                maior = numeros[i];
                menor = numeros[i];
            } else {
                if(numeros[i] > maior){
                    maior = numeros[i];
                }
                if(numeros[i] < menor){
                    menor = numeros[i];
                }
            }
        }

        System.out.printf("Maior: %.0f\nMenor: %.0f\n", maior, menor);

/* ---------------------------------------------------------------------------------------------------------------- */

        System.out.println("Informe um terceiro numero: ");
        int num3 = scanner.nextInt();

        if (num3 > 0){
            System.out.println("Numero informado é positivo!");
        } else if (num3 < 0){
            System.out.println("Numero informado é negativo!");
        } else {
            System.out.println("Numero informado é igual a zero!");
        }

        scanner.close();
    }
}