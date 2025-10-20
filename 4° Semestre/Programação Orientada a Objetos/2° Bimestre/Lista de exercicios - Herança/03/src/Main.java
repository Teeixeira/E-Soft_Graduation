public class Main {
    public static void main(String[] args) {
        Cachorro dog = new Cachorro("Cachorro", 3, "Lhasa Apso");
        Gato cat = new Gato("Gato", 2, "Sabor Laranja");

        System.out.println("=== Bichinhos PetSaúde ===");
        System.out.println(dog.getInfo());
        System.out.println(cat.getInfo());
    }
}