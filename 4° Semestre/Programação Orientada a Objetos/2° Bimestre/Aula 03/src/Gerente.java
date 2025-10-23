public class Gerente extends Funcionario {

    private String departamento;

    public Gerente(String nome, String cpf, double salario, String departamento) {
        super(nome, cpf, salario);
        this.departamento = departamento;
    }

    @Override
    public double getBonus(){
        return super.getSalario() * 0.15;
    }
}