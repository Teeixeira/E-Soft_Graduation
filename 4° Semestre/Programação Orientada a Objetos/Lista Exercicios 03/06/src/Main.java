import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String nomeProduto;
        double precoProduto;

        System.out.println("Digite o nome do produto: ");
        nomeProduto = scanner.nextLine();
        System.out.println("Digite o valor do produto: ");
        precoProduto = scanner.nextDouble();

        Produto produto = new Produto(nomeProduto, precoProduto);

        produto.setNome(nomeProduto);
        produto.setPreco(precoProduto);

        System.out.printf("Produto: %s\n",produto.getNome());
        System.out.printf("Preco: R$ %.2f\n",produto.getPreco());
    }
}