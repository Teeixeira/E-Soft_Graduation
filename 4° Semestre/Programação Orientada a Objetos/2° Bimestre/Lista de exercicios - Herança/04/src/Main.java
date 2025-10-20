public class Main {
    public static void main(String[] args) {

        Eletronico celular = new Eletronico(1, "Celular", 2499.90, 110, 12);
        Movel mesa = new Movel(2, "Mesinha", 799.90, "MDF", "Marrom");

        System.out.println("=== PRODUTOS E-COMMERCE ===");
        System.out.println(celular.getInfo());
        System.out.println(mesa.getInfo());
    }
}