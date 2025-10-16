import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String alunoNome;
        double alunoNota1;
        double alunoNota2;

        System.out.println("Nome do aluno:");
        alunoNome = scanner.nextLine();
        System.out.println("Nota 1 do aluno:");
        alunoNota1 = scanner.nextDouble();
        System.out.println("Nota 2 do aluno:");
        alunoNota2 = scanner.nextDouble();

        Aluno aluno = new Aluno (alunoNome, alunoNota1, alunoNota2);

        aluno.setAluno(alunoNome);
        aluno.setNota1(alunoNota1);
        aluno.setNota2(alunoNota2);

        double media = (aluno.getNota1() + aluno.getNota2()) / 2;

        System.out.printf("Aluno: %s\n", aluno.getAluno());
        System.out.printf("Nota1: %.2f\n", aluno.getNota1());
        System.out.printf("Nota2: %.2f\n", aluno.getNota2());
        System.out.printf("Media: %.2f\n", media);
    }
}