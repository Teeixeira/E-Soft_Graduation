public class Carro {
    String marca;
    String modelo;
    Motor motor;

    Carro(String marca, String modelo, int potencia, String tipoCombustivel) {
        this.marca = marca;
        this.modelo = modelo;
        this.motor = new Motor(potencia, tipoCombustivel);
    }

    void exibirDetalhes(){
        System.out.printf("Marca: %s\n", marca);
        System.out.printf("Modelo: %s\n", modelo);
        System.out.printf("Potencia: %d\nCombustivel: %s\n", motor.potencia, motor.tipoCombustivel);
    }
}
