import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Veiculo v1 = new Veiculo("RHB-XXXX", "Ninja ZX-6R", 2021, "Verde");

        v1.modelo = "Ninja ZX-6R";
        v1.anoFabricacao = 2021;
        v1.cor = "Verde";
        v1.placa = "RHB-XXXX";

        System.out.printf("Veiculo 1: %s\n", v1.modelo);
        System.out.printf("Veiculo 1: %d\n", v1.anoFabricacao);
        System.out.printf("Veiculo 1: %s\n", v1.cor);
        System.out.printf("Veiculo 1: %s\n", v1.placa);

        System.out.println("=============================================");

        System.out.println("Informe os dados de dois livros:");

        String titulo[] = new String[20];
        String autor[] = new String[20];
        int anoPublicacao[] = new int[3];

        for(int i = 0; i < 2; i++){
            System.out.printf("Informe os dados do %d° livro:", i + 1);
            System.out.print("Titulo: ");
            titulo[i] = scanner.nextLine();
            System.out.print("Autor: ");
            autor[i] = scanner.nextLine();
            System.out.print("Ano de publicação: ");
            anoPublicacao[i] = scanner.nextInt();

            Pratica_01 livro  = new Pratica_01(titulo[i], autor[i], anoPublicacao[i]);
        }
    }
}
