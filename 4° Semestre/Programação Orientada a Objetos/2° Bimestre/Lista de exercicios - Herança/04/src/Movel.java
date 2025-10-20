public class Movel extends Produto {
    private String material;
    private String cor;

    public Movel(int id, String nome, double preco, String material, String cor) {
        super(id, nome, preco);
        this.material = material;
        this.cor = cor;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + " | Material: " + material + " | Cor: " + cor;
    }
}