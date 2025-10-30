public class Main {
    public static void main(String[] args) {

        Carro carro = new Carro("AAA-1A111", "Audi", "A3", 98000, "223");
        Moto moto = new Moto("BBB-2B222", "Kawasaki", 636, 68000,"Ninja ZX-6R");

        System.out.println("Calcular seguros:");
        System.out.printf("Carro: %.2f\n", carro.calcularSeguro());
        System.out.printf("Moto: %.2f\n", moto.calcularSeguro());
    }
}