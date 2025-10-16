public class Casa {
    String endereco;
    Comodo[] comodos;
    int quantidadeComodos;

    Casa(String endereco, int maximoComodos) {
        this.endereco = endereco;
        this.comodos = new Comodo[maximoComodos];
        this.quantidadeComodos = 0;
    }

    void adicionarComodo(Comodo comodo) {
        comodos[quantidadeComodos] = comodo;
        quantidadeComodos++;
    }

    void listarComodos() {
        System.out.println("Casa na " + endereco + " possui os seguintes cômodos:");
        for (int i = 0; i < quantidadeComodos; i++) {
            System.out.println("- " + comodos[i].nome);
        }
    }
}
