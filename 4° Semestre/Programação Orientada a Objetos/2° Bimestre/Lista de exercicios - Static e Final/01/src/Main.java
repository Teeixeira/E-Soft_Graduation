public class Main {
    public static void main(String[] args) {

        Livro livro1 = new Livro ("Livro1", "Autor1");
        System.out.printf("Livro 1: %s, %s, %d\n", livro1.getNome(), livro1.getAutor(), Livro.getContadorDeLivros());
        Livro livro2 = new Livro ("Livro1", "Autor1");
        System.out.printf("Livro 2: %s, %s, %d\n", livro2.getNome(), livro2.getAutor(), Livro.getContadorDeLivros());
    }
}