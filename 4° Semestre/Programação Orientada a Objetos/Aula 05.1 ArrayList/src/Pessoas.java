import java.util.ArrayList;
import java.util.List;

public class Pessoas {

    private String nome;
    private String cpf;
    private List<String> telefones;

    private int ultimaPosicaodisponivel;

    public Pessoas(String nome, String cpf, int qtdTelefones) {
        this.nome = nome;
        this.cpf = cpf;
        this.telefones = new ArrayList<String>();
        this.ultimaPosicaodisponivel = 0;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void addTelefone(String telefone) {
        this.telefones.add(telefone);
    }

    public void viewTelefones(){
        for(String telefone : this.telefones){
            System.out.printf("Telefone: %s\n", telefone);
        }
    }

    public void removerTelefone(String telefone) {
        this.telefones.remove(telefone);
    }

    public void editarTelefone(String telefoneAntigo, String telefoneNovo) {
        int poscisao = telefones.indexOf(telefoneAntigo);
        telefones.set(poscisao, telefoneNovo);
    }
}
