public class Main {
    public static void main(String[] args) {

        CarrinhoDeCompras itens = new CarrinhoDeCompras();

        Livro livro = new Livro("Jogos Vorazes", "Suzanne Collins", 109.90);
        Livro livro2 = new Livro("Jogos Vorazes Volume 2", "Suzanne Collins", 139.90);
        Livro livro3 = new Livro("Jogos Vorazes Volume 3", "Suzanne Collins", 199.90);

        itens.addItem(livro);
        itens.addItem(livro2);
        itens.addItem(livro3);

        itens.listarItens();
    }
}