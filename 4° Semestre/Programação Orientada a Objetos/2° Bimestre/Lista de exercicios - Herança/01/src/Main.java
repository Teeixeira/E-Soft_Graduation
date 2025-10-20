public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("Audi", "A3", 2020, 4);
        Moto moto = new Moto("Kawasaki", "Ninja ZX-6R", 2021, 636);

        System.out.println("=== Frota da Mobilidade Urbana ===");
        System.out.println(carro.getInfo());
        System.out.println(moto.getInfo());
    }
}
