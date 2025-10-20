public class Main {
    public static void main(String[] args) {

        Produto produto1 = new Produto("Produto1", 10);
        System.out.printf("%s, preco: %.2f\n", produto1.getDescritivo(), produto1.getPrecoComImposto());
        Produto produto2 = new Produto("Produto2", 15);
        System.out.printf("%s, preco: %.2f\n", produto2.getDescritivo(), produto2.getPrecoComImposto());

        Produto.setTaxaImposto(0.10);

        System.out.printf("%s, preco: %.2f\n", produto1.getDescritivo(), produto1.getPrecoComImposto());
        System.out.printf("%s, preco: %.2f\n", produto2.getDescritivo(), produto2.getPrecoComImposto());
    }
}