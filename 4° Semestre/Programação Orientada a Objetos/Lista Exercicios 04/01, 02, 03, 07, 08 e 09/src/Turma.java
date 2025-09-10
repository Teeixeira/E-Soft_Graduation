import java.util.ArrayList;
import java.util.List;

public class Turma {

    private Integer qtdAlunos = 0;

    private List<Aluno> alunos;

    public Turma (){
        this.alunos = new ArrayList<>();
    }

    public void matricularAluno(Aluno aluno){
        this.alunos.add(aluno);
        this.qtdAlunos ++;
    }

    public void listarAlunos(){
        for(Aluno aluno : this.alunos){
            System.out.printf("Aluno: %s\n", aluno.getNome());
            System.out.printf("RA: %s\n", aluno.getRa());
        }
        System.out.printf("Quantidade de alunos: %d\n", qtdAlunos);
    }

    public void buscarAlunoPorRa(String ra){
        for(Aluno aluno : this.alunos){
            if(aluno.getRa().equals(ra)){
                System.out.printf("Aluno encontrado: %s, RA: %s\n", aluno.getNome(), aluno.getRa());
                return;
            }
        }
        System.out.println("Aluno não localizado!");
    }

    public void getAlunoNaPosicao(int indice){
        System.out.printf("Indice %d: %s, RA %s\n", indice, alunos.get(indice).getNome(), alunos.get(indice).getRa());
    }

    public Integer getQtdAlunos() {
        return qtdAlunos;
    }

    /*
        03 ) Para implementar um metodo de exclusão de alunos poderia ser utilizado como base o mesmo modelo
        do metodo de buscar aluno pelo RA e mudar apenas o gatilho de condição juntamente com a troca
        do valor da variavel para NULL ou podemos utilizar a função ".remove(parametro)", o risco seria
        a perda de integridade do array, pois ficariam buracos vazios no meio do array e poderia ser
        necessario remanejar os indices

        05) se o loop percorresse somente até a posição de "alunos.lenght()" o ultimo aluno não seria exibido
        pois ao retornar para a condição dentro do for o valor já estaria incrementado e não iria atender a
        condição para executar o loop, desta forma o ultimo aluno dentro do array não seria exibido
    */
}
