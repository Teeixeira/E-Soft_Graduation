public class Main {
    public static void main(String[] args) {
        Time flamengo = new Time("Flamengo", "Rio de Janeiro");
        Time corinthians = new Time("Corinthians", "São Paulo");

        Jogador j1 = new Jogador("Pedro", "Atacante");
        Jogador j2 = new Jogador("Arrascaeta", "Meia");
        Jogador j3 = new Jogador("Cássio", "Goleiro");

        flamengo.adicionarJogador(j1);
        flamengo.adicionarJogador(j2);
        corinthians.adicionarJogador(j3);

        flamengo.listarJogadores();
        corinthians.listarJogadores();

        Jogador j4 = new Jogador("Daniel Alves", "Lateral");
        System.out.println(j4.nome + " - " + j4.posicao + " (Agente Livre)");

        corinthians.adicionarJogador(j4);
        corinthians.listarJogadores();
    }
}