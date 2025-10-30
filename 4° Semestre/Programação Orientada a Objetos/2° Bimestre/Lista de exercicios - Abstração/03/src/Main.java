public class Main {
    public static void main(String[] args) {
        ContaCorrente conta1 = new ContaCorrente("Teixeira", 900000, 2000000);
        ContaPoupanca conta2 = new ContaPoupanca("Carvalho", 1200, 1);

        System.out.println(conta1.getSaldo());

        conta1.calcularTaxas();

        System.out.println(conta2.getSaldo());

        conta2.calcularTaxas();
    }
}