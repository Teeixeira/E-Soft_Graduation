import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Pessoa pessoa1 = new Pessoa("Leonardo", 29);

        System.out.println("Nome: " + pessoa1.getNome());
        System.out.println("Idade: " + pessoa1.getIdade());

        pessoa1.setNome("Rafael");
        pessoa1.setIdade(-25);

        System.out.println("---------------------------------------");

        System.out.println("Nome: " + pessoa1.getNome());
        System.out.println("Idade: " + pessoa1.getIdade());
    }
}