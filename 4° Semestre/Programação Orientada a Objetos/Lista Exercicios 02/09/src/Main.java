public class Main {
    public static void main(String[] args) {
        Processador cpu = new Processador("Intel i7", 3.8);
        MemoriaRAM ram = new MemoriaRAM(16, "DDR4");

        Computador pc = new Computador(cpu, ram, 5);

        Periferico mouse = new Periferico("Mouse Logitech", "Mouse");
        Periferico teclado = new Periferico("Teclado Mecânico", "Teclado");
        Periferico monitor = new Periferico("Monitor LG", "Monitor");

        pc.addPeriferico(mouse);
        pc.addPeriferico(teclado);
        pc.addPeriferico(monitor);

        pc.mostrar();
    }
}
