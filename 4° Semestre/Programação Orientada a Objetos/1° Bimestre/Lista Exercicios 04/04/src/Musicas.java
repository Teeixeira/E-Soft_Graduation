public class Musicas {

    private String nome;
    private String artista;
    private Integer anoPublicacao;

    public Musicas(String nome, String artista, Integer anoPublicacao) {
        this.nome = nome;
        this.artista = artista;
        this.anoPublicacao = anoPublicacao;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getArtista() {
        return artista;
    }

    public void setArtista(String artista) {
        this.artista = artista;
    }

    public Integer getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(Integer anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }
}
