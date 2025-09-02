import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Pessoa pessoa1 = new Pessoa("Leonardo", 29);

        System.out.println("Nome: " + pessoa1.getNome());
        System.out.println("Idade: " + pessoa1.getIdade());

        System.out.println("---------------------------------------");

        pessoa1.setNome("Rafael");
        System.out.println("Nome: " + pessoa1.getNome());
        pessoa1.setIdade(-25);
        System.out.println("Idade: " + pessoa1.getIdade());
    }
}