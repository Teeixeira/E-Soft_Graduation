public class Main {
    public static void main(String[] args) {

        Autor autor1 = new Autor("Clarice Lispector", "Brasileira");

        Livro livro1 = new Livro("A Paixão Segundo G.H.", autor1);
        Livro livro2 = new Livro("Laços de Família", autor1);

        livro1.exibirAutor();
        System.out.println();
        livro2.exibirAutor();
    }
}