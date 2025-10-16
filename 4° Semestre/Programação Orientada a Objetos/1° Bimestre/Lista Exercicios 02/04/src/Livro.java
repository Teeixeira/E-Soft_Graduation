public class Livro {

    String titulo;
    Autor autor;

    Livro(String titulo, Autor autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    void exibirAutor(){
        System.out.printf("Livro: %s\n", titulo);
        System.out.printf("Autor: %s\n", autor.nome);
        System.out.printf("Autor: %s\n", autor.nacionalidade);
    }
}
