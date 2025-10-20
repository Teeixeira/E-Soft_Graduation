public class Livro {

    private String nome;
    private String autor;
    private static int contadorDeLivros = 0;

    public Livro(String nome, String autor) {
        this.nome = nome;
        this.autor = autor;
        contadorDeLivros++;
    }

    public static int getContadorDeLivros() {
        return contadorDeLivros;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }
}
