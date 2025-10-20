public class Main {
    public static void main(String[] args) {

        Aluno aluno = new Aluno("Leonardo Teixeira", "123.456.789-00", "24159855-0");
        Professor professor = new Professor("João Paulo", "987.654.321-00", 18500.00);
        FuncionarioAdministrativo funcionario = new FuncionarioAdministrativo("Bloco 11", "111.222.333-44", "Financeiro");

        System.out.println("=== STUDEO ===");
        System.out.println(aluno.getInfo());
        System.out.println(professor.getInfo());
        System.out.println(funcionario.getInfo());
    }
}
