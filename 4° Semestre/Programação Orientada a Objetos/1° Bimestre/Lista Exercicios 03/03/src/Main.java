import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        ContaBancaria conta = new ContaBancaria("Leonardo", 1006004,25000);

        double valor;

        Scanner input = new Scanner(System.in);

        System.out.println("Digite o valor que deseja depositar: ");
        valor = input.nextDouble();

        conta.depositar(valor);

        System.out.printf("Saldo na conta: %.2f\n", conta.getSaldo());

        System.out.println("Digite o valor que deseja sacar: ");
        valor = input.nextDouble();

        conta.sacar(valor);

        System.out.printf("Saldo na conta: %.2f\n", conta.getSaldo());
    }
}