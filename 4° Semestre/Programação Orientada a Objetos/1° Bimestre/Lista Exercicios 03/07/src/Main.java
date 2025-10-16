import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String nomeLivro;
        String autorLivro;
        Boolean disponivel;

        System.out.println("Livro:");
        nomeLivro = scanner.nextLine();
        System.out.println("Autor:");
        autorLivro = scanner.nextLine();
        disponivel = true;

        Livro livro = new Livro(nomeLivro, autorLivro, disponivel);

        livro.setTitulo(nomeLivro);
        livro.setAutor(autorLivro);
        livro.setDisponivel(disponivel);


    }
}