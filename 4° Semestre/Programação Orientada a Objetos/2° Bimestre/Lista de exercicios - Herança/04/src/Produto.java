public class Produto {
    private int id;
    private String nome;
    private double preco;

    public Produto(int id, String nome, double preco) {
        this.id = id;
        this.nome = nome;
        this.preco = preco;
    }

    public String getInfo() {
        return "id: " + id + " | Nome: " + nome + " | Preço: R$ " + preco;
    }
}