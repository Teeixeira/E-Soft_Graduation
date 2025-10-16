import java.util.Scanner;

public class Exercicio_01 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe seu nome: ");
        String nome = scanner.next();
        System.out.printf("Bem vindo %s!\n", nome);

        int numeros[] = new int[3];
        int soma = 0;

        for(int i = 0; i < 3; i++){
            System.out.printf("Informe o %d° número: ", i + 1);
            numeros[i] = scanner.nextInt();
            soma += numeros[i];

        }
        System.out.printf("Soma: %d\n", soma);
        System.out.printf("Media: %d\n", soma / 3);
        System.out.printf("Antecessor do 3° numero '%d' e sucessor '%d'",numeros[2] - 1, numeros[2] + 1);

        scanner.close();
    }
}