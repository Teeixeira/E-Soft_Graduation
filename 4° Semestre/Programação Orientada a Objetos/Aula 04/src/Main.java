// https://dontpad.com/esoft4d

public class Main {
    public static void main(String[] args) {

        Cachorro bob = new Cachorro("Bob", 0, "João");
        System.out.println("==================");
        System.out.println("Cachorro");
        System.out.printf("Nome: %s\n", bob.nome);
        System.out.printf("Dono: %d - %s\n", bob.dono.matricula, bob.dono.nome);

        Pessoa pedro = new Pessoa(150, "Pedro Silva");
        System.out.println("==================");
        System.out.println("Funcionario");
        System.out.printf("Matricula: %d\n", pedro.matricula);
        System.out.printf("Nome %s\n", pedro.nome);

        Banho primeiroBanho = new Banho("Protex", 30, bob, pedro);

        bob.printValores();

        Pessoa lucas = new Pessoa(151,"Lucas Silva");

        Pessoa donoBob = bob.dono;
    }
}