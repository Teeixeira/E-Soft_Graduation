public class Professor {
    String nome;
    Disciplina[] disciplinas;
    int quantidadeDisciplinas;

    Professor(String nome, int maximoDisciplinas) {
        this.nome = nome;
        this.disciplinas = new Disciplina[maximoDisciplinas];
        this.quantidadeDisciplinas = 0;
    }

    void adicionarDisciplina(Disciplina disciplina) {
        disciplinas[quantidadeDisciplinas] = disciplina;
        quantidadeDisciplinas++;
        disciplina.professor = this;
    }

    void listarDisciplinas() {
        System.out.println("Professor " + nome + " leciona:");
        for (int i = 0; i < quantidadeDisciplinas; i++) {
            System.out.println("- " + disciplinas[i].nome);
        }
    }
}
