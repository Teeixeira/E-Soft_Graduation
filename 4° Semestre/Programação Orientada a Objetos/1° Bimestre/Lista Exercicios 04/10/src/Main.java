import java.sql.SQLOutput;
import java.util.List;

public class Main {
    public static void main(String[] args) {

        Time time = new Time();

        Jogador jogador = new Jogador("Ederson", "Goleiro", 1, 9);
        Jogador jogador2 = new Jogador("Grimaldo", "Lateral esquerdo", 3, 13);
        Jogador jogador3 = new Jogador("Trent", "Lateral direito", 66, 50);
        Jogador jogador4 = new Jogador("Marquinhos", "Zagueiro", 4, 42);
        Jogador jogador5 = new Jogador("Gabriel Magalhães", "Zagueiro", 5, 28);
        Jogador jogador6 = new Jogador("Vitinha", "Meio campo", 6, 82);
        Jogador jogador7 = new Jogador("De Bruyne", "Meio campo", 10, 129);
        Jogador jogador8 = new Jogador("Raphinha", "Ponta esquerda", 12, 213);
        Jogador jogador9 = new Jogador("Savinho", "Ponta direita", 8, 98);
        Jogador jogador10 = new Jogador("Musiala", "Meio atacante", 11, 120);
        Jogador jogador11 = new Jogador("Cristiano Ronaldo", "Atacante", 7, 1053);

        System.out.println("-------------------- ESCALAÇÃO --------------------");
        time.contratarJogadores(jogador);
        time.contratarJogadores(jogador2);
        time.contratarJogadores(jogador3);
        time.contratarJogadores(jogador4);
        time.contratarJogadores(jogador5);
        time.contratarJogadores(jogador6);
        time.contratarJogadores(jogador7);
        time.contratarJogadores(jogador8);
        time.contratarJogadores(jogador9);
        time.contratarJogadores(jogador10);
        time.contratarJogadores(jogador11);

        time.exibirEscalacao();
    }
}