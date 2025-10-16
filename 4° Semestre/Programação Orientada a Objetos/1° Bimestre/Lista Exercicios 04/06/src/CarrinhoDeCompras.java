import java.util.ArrayList;
import java.util.List;

public class CarrinhoDeCompras {

    private List<Livro> livros;

    public CarrinhoDeCompras() {
        this.livros = new ArrayList<Livro>();
    }

    public void addItem(Livro livro) {
        this.livros.add(livro);
    }

    public void removerItem(Livro livro) {
        this.livros.remove(livro);
    }

    public void listarItens(){
        int i = 1;
        double valorTotal = 0;
        for (Livro livro : this.livros) {
            System.out.printf("%d - Item: %s, Autor: %s, Preço: %.2f\n", i, livro.getNome(),
                    livro.getAutor(), livro.getPreco());
            valorTotal += livro.getPreco();
            i ++;
        }
        System.out.printf("Total de itens: R$ %.2f\n", valorTotal);
    }
}


