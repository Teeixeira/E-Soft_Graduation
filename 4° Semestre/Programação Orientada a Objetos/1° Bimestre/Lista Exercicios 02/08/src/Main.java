public class Main {
    public static void main(String[] args) {
        Cliente cliente1 = new Cliente("Maria", "123.456.789-00");

        Produto p1 = new Produto("Arroz", 20.0);
        Produto p2 = new Produto("Feijão", 10.0);
        Produto p3 = new Produto("Carne", 50.0);

        Pedido pedido1 = new Pedido(cliente1, 10);

        pedido1.addProduto(p1);
        pedido1.addProduto(p2);
        pedido1.addProduto(p3);

        pedido1.mostrar();
    }
}