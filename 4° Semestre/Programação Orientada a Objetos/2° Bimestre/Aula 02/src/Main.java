import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {

        Funcionario leonardo = new Funcionario("Leonardo", "12345-6789", 2880);

        System.out.println(leonardo);

        List<Funcionario> funcionarios = new ArrayList<Funcionario>();

        for(int i = 0; i < 50; i++){
            Desenvolvedor novoDev = new Desenvolvedor("Leonardo", "123456-80", 1500, "Java");
            funcionarios.add(novoDev);
        }

        for(int i = 0; i < 10; i++){
            Gerente novoGerente = new Gerente ("Teixeira", "31234-77",3000, "Warriors");
            funcionarios.add(novoGerente);
        }

        for(Funcionario f : funcionarios){
            System.out.println(f);
            System.out.println(f.getBonus());
            System.out.println();
        }

        // Sobrecarga;
        Calculadora.somar(1, 7);
        Calculadora.somar(1.6, 1.4);
        Calculadora.somar(1.6, 1.4, 3.0);
    }
}