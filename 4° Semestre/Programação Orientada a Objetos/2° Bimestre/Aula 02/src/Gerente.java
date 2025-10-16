public class Gerente extends Funcionario {

    private String setorResponsavel;

    public Gerente(String nome, String cpf, double salario, String setorResponsavel) {
        super(nome, cpf, salario);
        this.setorResponsavel = setorResponsavel;
    }

    @Override // Override sobrescreve o metodo
    public double getBonus(){
        return super.getSalario() * 0.10;
    }
}
