public class Main {
    public static void main(String[] args) {

        Pessoa leonardo = new Pessoa("Leonardo","1xx.xxx.xxx-51", 3);

        leonardo.addTelefone("44998555555");

        leonardo.viewTelefones();

        leonardo.addTelefone("554468975");

        System.out.println("-----------");
        leonardo.viewTelefones();

        System.out.println("-----------");
        leonardo.removerTelefone("44998555555");
        leonardo.viewTelefones();
    }
}