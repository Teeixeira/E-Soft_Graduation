public class Main {
    public static void main(String[] args) {

        Pessoa pessoa = new Pessoa("Leonardo", 29);

        pessoa.mostrarPessoa();
        System.out.println("O Leonardo fez aniversario!!!");
        pessoa.fazerAniversario();
        pessoa.mostrarPessoa();
    }
}