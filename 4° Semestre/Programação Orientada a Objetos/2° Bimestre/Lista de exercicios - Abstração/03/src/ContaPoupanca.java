public class ContaPoupanca extends Conta {
    private double rendimentoMensal;

    public ContaPoupanca(String titular, double saldo, double rendimentoMensal) {
        super(titular, saldo);
        this.rendimentoMensal = rendimentoMensal;
    }

    @Override
    public void calcularTaxas() {
        setSaldo(getSaldo() - 15);
    }
}
