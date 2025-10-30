import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        ValorMenorQueZeroException validacao = new ValorMenorQueZeroException("Compras");

        Scanner leitor = new Scanner(System.in);

        System.out.println("Digite o saldo da conta: ");
        double saldo = leitor.nextDouble();

        System.out.println("Digite o valor do pagamento: ");
        double pagamento = leitor.nextDouble();

        try {
            if (saldo >= pagamento) {
                saldo -= pagamento;
            } else {
                throw validacao;
            }
        } catch (ValorMenorQueZeroException e) {
            System.out.println(e.getMessage());
        }
    }
}
