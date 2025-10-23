public class Desenvolvedor extends Funcionario {

    private String linguagemPrincipal;

    public Desenvolvedor(String nome, String cpf, double salario, String linguagemPrincipal) {
        super(nome, cpf, salario);
        this.linguagemPrincipal = linguagemPrincipal;
    }

    @Override
    public double getBonus() {
        return super.getSalario() * 0.20;
    }
}