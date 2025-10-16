import java.util.Scanner;

public class Main {
    public static void main(String[] args){

        Scanner scanner =  new Scanner(System.in);

        ContaBarcaria contaPessoalNubank = new ContaBarcaria(0.0, "12345-6", "0001", "Leonardo T", "123456789-10", "1995-11-16");

        System.out.printf("Saldo: %.2f\n",  contaPessoalNubank.saldo);
        contaPessoalNubank.saldo = 800.00;
        System.out.printf("Saldo: %.2f\n", contaPessoalNubank.saldo);

        Cartao cartaoNu = new Cartao("123456789", "2030-10", "500", contaPessoalNubank);
    }
}