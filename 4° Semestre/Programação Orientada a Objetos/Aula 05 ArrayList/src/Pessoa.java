public class Pessoa {

    private String nome;
    private String cpf;
    private String[] telefones;

    private int ultimaPosicaodisponivel;

    public Pessoa(String nome, String cpf, int qtdTelefones) {
        this.nome = nome;
        this.cpf = cpf;
        this.telefones = new String[qtdTelefones];
        this.ultimaPosicaodisponivel = 0;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void addTelefone(String telefone) {

        if(this.ultimaPosicaodisponivel < this.telefones.length){
            this.telefones[ultimaPosicaodisponivel] = telefone;
            this.ultimaPosicaodisponivel ++;
        }
    }

    public void viewTelefones(){
        for(int i=0;i<this.ultimaPosicaodisponivel;i++){
            System.out.printf("Telefone [%s]: \n", telefones[i]);
        }
    }

    public void removerTelefone(String telefone) {
        for(int i=0;i<this.ultimaPosicaodisponivel;i++){
            if(this.telefones[i].equals(telefone)){
                this.telefones[i] = null;
            }
        }
    }

    public void editarTelefone(String telefoneAntigo, String telefoneNovo) {
        for(int i=0;i<this.ultimaPosicaodisponivel;i++){
            if(this.telefones[i].equals(telefoneAntigo)){
                this.telefones[i] = telefoneNovo;
            }
        }
    }

    public String[] getTelefone() {
        return telefones;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public void setTelefone(String[] telefones) {
        this.telefones = telefones;
    }
}
