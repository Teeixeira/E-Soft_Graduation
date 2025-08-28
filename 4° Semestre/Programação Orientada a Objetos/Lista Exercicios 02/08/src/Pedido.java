public class Pedido {
    private Cliente cliente;
    private Produto[] produtos;
    private int quantidadeProdutos;

    public Pedido(Cliente cliente, int maximoProdutos) {
        this.cliente = cliente;
        this.produtos = new Produto[maximoProdutos];
        this.quantidadeProdutos = 0;
    }

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }

    public void addProduto(Produto produto) {
        if (quantidadeProdutos < produtos.length) {
            produtos[quantidadeProdutos] = produto;
            quantidadeProdutos++;
        } else {
            System.out.println("Não é possível adicionar mais produtos ao pedido.");
        }
    }

    public void mostrar() {
        System.out.println("Pedido do cliente: " + cliente.getNome() + " (CPF: " + cliente.getCpf() + ")");
        System.out.println("Produtos:");
        for (int i = 0; i < quantidadeProdutos; i++) {
            System.out.println("- " + produtos[i].getNome() + " - R$ " + produtos[i].getPreco());
        }
    }
}