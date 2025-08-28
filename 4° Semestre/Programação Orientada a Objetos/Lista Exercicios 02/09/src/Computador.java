public class Computador {
    private Processador processador;
    private MemoriaRAM memoriaRAM;
    private Periferico[] perifericos;
    private int quantidadePerifericos;

    public Computador(Processador processador, MemoriaRAM memoriaRAM, int maxPerifericos) {
        this.processador = processador;
        this.memoriaRAM = memoriaRAM;
        this.perifericos = new Periferico[maxPerifericos];
        this.quantidadePerifericos = 0;
    }

    public void addPeriferico(Periferico periferico) {
        if (quantidadePerifericos < perifericos.length) {
            perifericos[quantidadePerifericos] = periferico;
            quantidadePerifericos++;
        } else {
            System.out.println("Não é possível adicionar mais periféricos.");
        }
    }

    public void mostrar() {
        System.out.println("=== Computador ===");
        System.out.println("Processador: " + processador.getModelo() + " - " + processador.getVelocidadeGHz() + "GHz");
        System.out.println("Memória RAM: " + memoriaRAM.getCapacidadeGB() + "GB - " + memoriaRAM.getTipo());
        System.out.println("Periféricos:");
        for (int i = 0; i < quantidadePerifericos; i++) {
            System.out.println("- " + perifericos[i].getNome() + " (" + perifericos[i].getTipo() + ")");
        }
    }
}
