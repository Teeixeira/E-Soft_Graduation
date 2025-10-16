import java.util.ArrayList;
import java.util.List;

public class Hotel {

    private String nome;
    private String endereco;
    private List<Quarto> quartos;

    public Hotel(String nome, String endereco) {
        this.nome = nome;
        this.endereco = endereco;
        this.quartos = new ArrayList<Quarto>();
    }

    public void adicionarQuarto(Quarto quarto){
        this.quartos.add(quarto);
    }

    public void hospedar(Hospede hospede, int numeroQuarto){
        for(Quarto quarto : this.quartos){
            if(numeroQuarto == quarto.getNumero()){
                if(quarto.isOcupado()){
                    System.out.printf("O quarto %d está ocupado!\n",numeroQuarto);
                } else {
                    quarto.ocupar(hospede);
                    System.out.printf("%s, hospedado no quarto: %d\n", hospede.getNome(), numeroQuarto);
                }
            }
        }
    }

    public void realizarCheckout(int numeroQuarto){
        for(Quarto quarto : this.quartos){
            if(numeroQuarto == quarto.getNumero()){
                System.out.printf("Realizando checkout no quarto %d\n", numeroQuarto);
                quarto.liberar();
                break;
            } else {
                System.out.println("Quarto não encontrado!");
            }
        }
    }

    public void exibirRelatorioOcupacao(){
        for(Quarto quarto : this.quartos){
            if (quarto.isOcupado() == false){
                System.out.println("O quarto está livre!");
            } else {
                System.out.println("O quarto está ocupado!");
            }
        }
    }
}
