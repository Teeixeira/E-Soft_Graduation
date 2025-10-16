public class Livro {

    private String titulo;
    private String autor;
    private Boolean disponivel;

    Livro(String titulo, String autor, Boolean disponivel) {
        this.titulo = titulo;
        this.autor = autor;
        this.disponivel = disponivel;
    }

    public Boolean emprestar(Boolean disponivel) {
        return disponivel = false;
    }

    public Boolean devolver(Boolean disponivel) {
        return disponivel = true;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public Boolean getDisponivel(Boolean disponivel) {
        if (disponivel == true) {
            return disponivel = true;
        } else {
            return disponivel = false;
        }
    }

    public void setDisponivel(Boolean disponivel) {
        this.disponivel = disponivel;
    }
}
