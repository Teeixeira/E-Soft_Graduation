public class Cachorro {
    String nome;
    Pessoa dono;

    Cachorro(String nome, int matriculaDono, String nomeDono){
        this.nome = nome;
        dono = new Pessoa(matriculaDono, nomeDono);
    }

    void printValores(){
        System.out.println("==================");
        System.out.println("Cachorro");
        System.out.printf("Nome: %s\n", nome);
        System.out.printf("Dono: %d - %s", dono.matricula, dono.nome);
    }
}
