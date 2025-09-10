public class Main {
    public static void main(String[] args) {

        Turma turma = new Turma();

        Aluno aluno = new Aluno("Leonardo", "24159859-2");

        turma.matricularAluno(aluno);

        turma.listarAlunos();

        System.out.println("--------------------------");

        Aluno aluno2 = new Aluno("Vinicius", "2345655-6");

        turma.matricularAluno(aluno2);

        Aluno aluno3 = new Aluno("Amanda", "9876543-2");

        turma.matricularAluno(aluno3);

        turma.listarAlunos();

        System.out.println("---- TESTE BUSCA RA ----");

        turma.buscarAlunoPorRa("24159859-2");

        turma.getAlunoNaPosicao(0);
    }
}