public class Funcionario extends Pessoa {

    private double salario;

    public Funcionario(String nome, String cpf, double salario) {
        super(nome, cpf);
        this.salario = salario;
    }

    public String toString(){
        return super.toString() + "\nSalario: " + this.salario;
    }

    public double getSalario() {
        return salario;
    }

    public double getBonus(){
        return this.salario * 0.05;
    }
}
