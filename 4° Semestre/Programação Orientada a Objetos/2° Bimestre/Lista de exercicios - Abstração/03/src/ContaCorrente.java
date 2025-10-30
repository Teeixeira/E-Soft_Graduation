public class ContaCorrente extends Conta {
    private double limiteCredito;

    public ContaCorrente(String titular, double saldo, double limiteCredito) {
        super(titular, saldo);
        this.limiteCredito = limiteCredito;
    }

    @Override
    public void calcularTaxas() {
        System.out.println("Conta corrente não tem taxas");
    }
}
