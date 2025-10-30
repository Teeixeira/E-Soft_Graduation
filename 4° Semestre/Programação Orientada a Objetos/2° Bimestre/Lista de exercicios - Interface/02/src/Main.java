public class Main {
    public static void main(String[] args) {
        Lampada lampadaCozinha = new Lampada();
        ArCondicionado arSala = new ArCondicionado();

        lampadaCozinha.ligar();
        arSala.ligar();

        lampadaCozinha.desligar();
        arSala.desligar();
    }
}