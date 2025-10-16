public class Jogador {

    private String nome;
    private String posicao;
    private Integer numero;
    private Integer gols;

    public Jogador(String nome, String posicao, Integer numero, Integer gols) {
        this.nome = nome;
        this.posicao = posicao;
        this.numero = numero;
        this.gols = gols;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getPosicao() {
        return posicao;
    }

    public void setPosicao(String posicao) {
        this.posicao = posicao;
    }

    public Integer getNumero() {
        return numero;
    }

    public void setNumero(Integer numero) {
        this.numero = numero;
    }

    public Integer getGols() {
        return gols;
    }

    public void setGols(Integer gols) {
        this.gols = gols;
    }
}
