public class Main {
    public static void main(String[] args) {

        Comodo quarto = new Comodo("Quarto");
        Comodo sala = new Comodo("Sala");
        Comodo cozinha = new Comodo("Cozinha");

        Casa casa = new Casa("Avenida Brasil, 123", 10);

        casa.adicionarComodo(quarto);
        casa.adicionarComodo(sala);
        casa.adicionarComodo(cozinha);

        casa.listarComodos();
    }
}