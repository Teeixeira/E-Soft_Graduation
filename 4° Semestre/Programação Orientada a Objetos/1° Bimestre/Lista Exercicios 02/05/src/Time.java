public class Time {
    String nome;
    String cidade;
    Jogador[] jogadores;
    int quantidadeJogadores;

    Time(String nome, String cidade) {
        this.nome = nome;
        this.cidade = cidade;
        this.jogadores = new Jogador[30];
        this.quantidadeJogadores = 0;
    }

    void adicionarJogador(Jogador jogador) {
        jogadores[quantidadeJogadores] = jogador;
        quantidadeJogadores++;
        jogador.time = this;
    }

    void listarJogadores() {
        System.out.println("Jogadores do " + nome + ":");
        for (int i = 0; i < quantidadeJogadores; i++) {
            System.out.println(jogadores[i].nome + " - " + jogadores[i].posicao);
        }
    }
}