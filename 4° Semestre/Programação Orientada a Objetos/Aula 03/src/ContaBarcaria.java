public class ContaBarcaria {
    double saldo;
    String numeroConta;
    String agencia;
    Pessoa titular;
    Cartao[] cartoes;

    ContaBarcaria(double saldo, String numeroConta, String agencia, String nomePessoa, String cpf, String dataNascimento) {
        this.saldo = saldo;
        this.numeroConta = numeroConta;
        this.agencia = agencia;
        titular = new Pessoa (nomePessoa, cpf, dataNascimento);
    }
}
