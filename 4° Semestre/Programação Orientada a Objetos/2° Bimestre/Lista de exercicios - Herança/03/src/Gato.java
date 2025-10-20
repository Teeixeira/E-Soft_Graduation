public class Gato extends Animal {
    private String corDoPelo;

    public Gato(String nome, int idade, String corDoPelo) {
        super(nome, idade);
        this.corDoPelo = corDoPelo;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + " | Cor do Pelo: " + corDoPelo;
    }
}