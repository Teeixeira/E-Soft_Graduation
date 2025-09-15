import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        Hotel hotel = new Hotel("Golden Inga", "Av XV de Novembro");

        Hospede hospede1 = new Hospede("Leonardo", "109.XXX.XXX-11");
        Hospede hospede2 = new Hospede("Sandra", "111.XXX.XXX-77");
        Quarto quarto1 = new Quarto(101,"Suite",109.90, false,null);
        Quarto quarto2 = new Quarto(102,"Presidencial", 159.90, false, null);
        Quarto quarto3 = new Quarto(103, "Deluxe", 250.00, false, null);

        hotel.adicionarQuarto(quarto1);
        hotel.adicionarQuarto(quarto2);
        hotel.adicionarQuarto(quarto3);

        System.out.println("Status dos quartos atuais:");
        hotel.exibirRelatorioOcupacao();

        System.out.println("\nRealizar hospedagem dos hospedes:");
        hotel.hospedar(hospede1, 101);
        hotel.hospedar(hospede2, 101);
        hotel.hospedar(hospede2, 103);

        System.out.println("\nNova checagem dos quartos:");
        hotel.exibirRelatorioOcupacao();
        System.out.println();

        hotel.realizarCheckout(101);

        System.out.println("\nStatus final dos quartos:");
        hotel.exibirRelatorioOcupacao();
    }
}