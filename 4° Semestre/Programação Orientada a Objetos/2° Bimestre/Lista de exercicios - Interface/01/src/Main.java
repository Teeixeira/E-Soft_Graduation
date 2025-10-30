public class Main {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente(5000.0);
        SeguroDeVida sv = new SeguroDeVida();

        System.out.println("Imposto da conta corrente: R$ " + cc.getValorImposto());
        System.out.println("Imposto do seguro de vida: R$ " + sv.getValorImposto());
    }
}