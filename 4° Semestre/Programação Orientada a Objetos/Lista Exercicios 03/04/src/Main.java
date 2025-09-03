import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        String nomefuncionario;
        String cargoFuncionario;
        double salarioFuncionario;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe o nome do funcionario: ");
        nomefuncionario = scanner.nextLine();
        System.out.println("Informe o cargo do Funcionario: ");
        cargoFuncionario = scanner.nextLine();
        System.out.println("Informe o salario do Funcionario: ");
        salarioFuncionario = scanner.nextDouble();

        Funcionario funcionario = new Funcionario(nomefuncionario, cargoFuncionario, salarioFuncionario);

        funcionario.setNome(nomefuncionario);
        funcionario.setCargo(cargoFuncionario);
        funcionario.setSalario(salarioFuncionario);

        System.out.printf("Nome: %s\n",funcionario.getNome());
        System.out.printf("Cargo: %s\n",funcionario.getCargo());
        System.out.printf("Salario: %s\n",funcionario.getSalario());
    }
}