public class Circulo {

    double raio;
    double pi;

    public Circulo(double raio) {
        this.raio = raio;
        this.pi = Math.PI;
    }

    double cacularArea(){
        return pi * (raio * raio);
    }

    double cacularPerimetro(){
        return 2 * pi * raio;
    }
}
