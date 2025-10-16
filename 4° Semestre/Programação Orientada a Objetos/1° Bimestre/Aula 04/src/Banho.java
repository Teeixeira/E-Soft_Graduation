public class Banho {

    String sabao;
    float qtdAgua;
    Cachorro cachorro;
    Pessoa[] funcionario;


    Banho(String sabao, float qtdAgua, Cachorro cachorro, Pessoa funcionario){
        this.sabao = sabao;
        this.qtdAgua = qtdAgua;
        this.cachorro = cachorro;
        this.funcionario = new Pessoa[15];
        this.funcionario[0] = funcionario;
    }

    void printBanho(){
        System.out.println("==================");
        System.out.println("Banho");
        System.out.printf("Sabão: %s\n", sabao);
        System.out.printf("Quant de agua: %f\n", qtdAgua);
        System.out.printf("Funcionario: %s\n", funcionario[0].nome);
    }

    void addFuncionario(Pessoa funcionario){
        if(funcionario.matricula != 0){
            for(int i = 0; i < 4; i ++){
                if(this.funcionario[i] == null){
                    this.funcionario[i] = funcionario;
                    break;
                }
            }
        }
    }
}
