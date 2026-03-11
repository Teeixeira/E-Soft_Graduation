import MetodosEntrega.*;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Digite o peso: ");
        double peso = scanner.nextDouble();

        System.out.printf("\n\nDigite a distância em km: ");
        double distancia = scanner.nextDouble();

        List<Integer> opcoes = new ArrayList<Integer>();

        System.out.printf("\n1 - Transportadora");
        opcoes.add(1);
        if (peso <= 30) {
            System.out.printf("\n2 - Correios");
            opcoes.add(2);
        }
        if (peso <= 10 && distancia <= 15) {
            System.out.printf("\n3 - Motoboy");
            opcoes.add(3);
        }
        if (peso <= 5 && distancia <= 45) {
            System.out.printf("\n4 - Drone");
            opcoes.add(4);
        }

        System.out.printf("\n\nDigite a opção de entrega: ");
        Integer entrega = scanner.nextInt();

        Optional<Integer> result = opcoes.stream()
                .filter(i -> i.equals(entrega)) // Use .equals() for object content
                .findAny();

        Entrega formaEntrega = null;
        if (result.isPresent()){
            switch (entrega){
                case 1:
                    formaEntrega = new Transportadora(distancia, peso);
                    break;
                case 2:
                    formaEntrega = new Correios(distancia, peso);
                    break;
                case 3:
                    formaEntrega = new Motoboy(distancia, peso);
                    break;
                case 4:
                    formaEntrega = new Drone(distancia, peso);
                    break;
            }
        }

        System.out.printf("Entregue em: %d dias\nValor de frete: %.2f", formaEntrega.getPrazo(), CalculadoraFrete.calcularFrete(formaEntrega));
    }
}