public class Main {
    public static void main(String[] args) {

        Disciplina d1 = new Disciplina("Programação");
        Disciplina d2 = new Disciplina("Banco de Dados");
        Disciplina d3 = new Disciplina("Estruturas de Dados");

        Professor prof1 = new Professor("Carlos", 5);

        prof1.adicionarDisciplina(d1);
        prof1.adicionarDisciplina(d2);

        prof1.listarDisciplinas();

        System.out.println("Disciplina " + d3.nome + " ainda não tem professor.");
    }
}