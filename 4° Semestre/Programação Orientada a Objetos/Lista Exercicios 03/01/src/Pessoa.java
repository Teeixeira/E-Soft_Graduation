public class Pessoa {

    private String nome;
    private int idade;

    Pessoa(String nome, int idade) {
        this.nome = nome;
        setIdade(idade);
    }

    public String getNome(){
        return nome;
    }

    public int getIdade(){
        return idade;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public void setIdade(int idade){
        if(idade <= 0){
            System.out.println("Idade invalida, menor que zero");
        } else {
            this.idade = idade;
        }
    }
}
