// construa um codigo em linguagem C ao qual o usuário consiga informar e armazenar
// em memória os dados de 5 carros (marca, modelo, cor, ano modelo, ano fabricacao,
// combustivel (gasolina, etanol, flex, eletrico ou hibrido) e placa.

// O usuário deverá cadastrar os 5 veiculos e posteriormente informar 
// uma placa qualquer para que o sistema efetue uma busca sequencial nos dados, 
// apresentando todas as informações (se encontrar) ou a mensagem 
//"veiculos nao localizado"

// Necessário utilização de estruturas homogêneas e/ou heterogêneas.

// Utilizar scanf na entrada

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct veiculo {
    char marca[15], modelo[15], cor[15], combustivel[15], placa[10];
    int ano_modelo, ano_fabr;
};

struct veiculo ve[5];

char busca[10];
int resultado, ind;

int main(){

    for(int x = 0; x < 5; x ++){
        printf("Cadastro do %d veiculo!\n", x + 1);

        printf("Marca do %d veiculo: ", x + 1);
        scanf("%s", ve[x].marca);

        fflush(stdin);

        printf("Modelo do %d veiculo: ", x + 1);
        scanf("%s", ve[x].modelo);

        fflush(stdin);

        printf("Cor do %d veiculo: ", x + 1);
        scanf("%s", ve[x].cor);

        fflush(stdin);

        printf("Combustivel do %d veiculo: ", x + 1);
        scanf("%s", ve[x].combustivel);

        fflush(stdin);

        printf("Placa do %d veiculo (Com hifen ""-""): ", x + 1);
        scanf("%s", ve[x].placa);

        fflush(stdin);

        printf("Ano de modelo do %d veiculo: ", x + 1);
        scanf("%d", &ve[x].ano_modelo);

        fflush(stdin);

        printf("Ano de fabricacao do %d veiculo: ", x + 1);
        scanf("%d", &ve[x].ano_fabr);

        fflush(stdin);
    }

    printf("Dentre os veiculos, informe uma placa para realizar a busca: ");
    scanf(" %s", busca);

    ind = -1;

    for(int x = 0; x < 5; x ++){
        resultado = strcmp(busca,ve[x].placa);
        if(resultado == 0){
            ind = x;
        }
    }

    if(ind != -1){
        printf("\nVeiculo encontrado!\n");
        printf("Marca: %s\n", ve[ind].marca);
        printf("Modelo: %s\n", ve[ind].modelo);
        printf("Cor: %s\n", ve[ind].cor);
        printf("Combustivel: %s\n", ve[ind].combustivel);
        printf("Placa: %s\n", ve[ind].placa);
        printf("Ano Modelo: %d\n", ve[ind].ano_modelo);
        printf("Ano Fabricacao: %d\n", ve[ind].ano_fabr);
    } else {
        printf("Veiculo nao encontrado!!!\n");
    }

    return 0;
}