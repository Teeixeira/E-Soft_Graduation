public class ContaBancaria {

    private String titular;
    private int numeroConta;
    private double saldo;

    ContaBancaria(String titular, int numeroConta, double saldo) {
        this.titular = titular;
        this.numeroConta = numeroConta;
        this.saldo = saldo;
    }

    public void depositar(double valor){
        if(valor > 0){
            this.saldo += valor;
        }else{
            System.out.println("O valor informado não pode ser negativo para deposito");
        }
    }

    public void sacar(double valor){
        if(this.saldo >= valor){
            this.saldo -= valor;
        }else{
            System.out.println("Saldo insuficiente");
        }
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public int getNumeroConta() {
        return numeroConta;
    }

    public void setNumeroConta(int numeroConta) {
        this.numeroConta = numeroConta;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
}

