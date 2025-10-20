public class Animal {
    private String nome;
    private int idade;

    public Animal(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public String getInfo() {
        return "Nome: " + nome + " | Idade: " + idade + " anos";
    }
}