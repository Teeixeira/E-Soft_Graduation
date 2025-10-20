public class FuncionarioAdministrativo extends Pessoa {
    private String setor;

    public FuncionarioAdministrativo(String nome, String cpf, String setor) {
        super(nome, cpf);
        this.setor = setor;
    }

    @Override
    public String getInfo() {
        return super.getInfo() + " | Setor: " + setor;
    }
}
