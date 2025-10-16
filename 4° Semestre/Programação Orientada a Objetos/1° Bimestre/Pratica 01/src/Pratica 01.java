import java.util.Scanner;

public class Exercicio1 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o nome: ");
        String nome = scanner.next();

        System.out.printf("Nome digitado: %s\n", nome);

        System.out.println("Digite um número: ");
        int numeroDigitado = scanner.nextInt();

        System.out.printf("Número digitado: %d\n", numeroDigitado);

        if(numeroDigitado > 0){
            System.out.println("O número é positivo");
        } else {
            System.out.println("O número é negativo");
        }

        int soma = 0;

        for(int i = 0; i < 10; i++){
            System.out.printf("Digite o %d° número: ", i + 1);
            int numeroSomado = scanner.nextInt();
            soma += numeroSomado;
        }

        System.out.printf("Soma: %d", soma);
    }
}
