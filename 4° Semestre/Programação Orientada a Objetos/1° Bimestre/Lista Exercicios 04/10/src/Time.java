import java.util.ArrayList;
import java.util.List;

public class Time {

    private List<Jogador> jogadores;

    public Time() {
        this.jogadores = new ArrayList<Jogador>();
    }

    public void contratarJogadores(Jogador jogador) {
        this.jogadores.add(jogador);
    }

    public void exibirEscalacao() {
        for (Jogador jogador : this.jogadores) {
            System.out.printf("%s, %s, n° %d, %d gols\n",jogador.getNome(), jogador.getPosicao(),
                    jogador.getNumero(), jogador.getGols());
        }
    }
}
