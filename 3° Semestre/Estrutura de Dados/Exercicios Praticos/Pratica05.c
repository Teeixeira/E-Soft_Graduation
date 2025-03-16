//Primeiro, otimize as estruturas abaixo para que consumam o menor numero de 
//bytes possível, verificando se há algum campo importante que ficou de fora, mas
//sem excluir os campos já definidos.
//Posteriormente, construir um programa com base na estrutura que cadastre 5 pessoas,
//classifique as pessoas em ordem de nome e posteriormente apresente ao usuário
//o nome, cpf, fone, cidade e estado.
//Por fim, apresente quantos bytes cada estrutura consome.

#include <stdio.h>
#include <stdlib.h>

// Definição da struct Endereco
typedef struct {
    char logradouro[30];
    short int numero;
    char cidade[25];
    char estado[3]; 
    char cep[10]; 
} ENDERECO;

// Definição da struct Pessoa
typedef struct {
    char nome[30];
    char cpf[12];
    char rg[10];
    char fone[12];
    char sexo; 
    short int idade;
    ENDERECO endereco; 
} PESSOA;

// Vetor para armazenar 5 pessoas
PESSOA cliente[5];

int main() {
    for(int x = 0; x < 5; x++) {
        printf("\nCadastro da %d pessoa:\n", x + 1);

        printf("Nome: ");
        scanf("%s", cliente[x].nome);
        fflush(stdin);

        printf("CPF (Apenas numeros): ");
        scanf("%s", cliente[x].cpf);
        fflush(stdin);

        printf("\nCPF: %s \n", cliente[x].cpf);

        printf("RG (Apenas numeros): ");
        scanf("%s", cliente[x].rg);
        fflush(stdin);

        printf("Telefone (Apenas numeros): ");
        scanf("%s", cliente[x].fone);
        fflush(stdin);

        printf("Sexo (M ou F): ");
        scanf("%c", &cliente[x].sexo);
        fflush(stdin);

        printf("Idade: ");
        scanf("%hd", &cliente[x].idade);
        fflush(stdin);

        // Entrada do endereço
        printf("Logradouro: ");
        scanf("%s", cliente[x].endereco.logradouro);
        fflush(stdin);

        printf("Numero: ");
        scanf("%hd", &cliente[x].endereco.numero);
        fflush(stdin);

        printf("Cidade: ");
        scanf("%s", cliente[x].endereco.cidade);
        fflush(stdin);

        printf("Estado (Sigla, ex: PR): ");
        scanf("%s", cliente[x].endereco.estado);
        fflush(stdin);

        printf("CEP (Apenas numeros): ");
        scanf("%s", cliente[x].endereco.cep);
        fflush(stdin);
    }

    PESSOA temp;

    for (int x = 0; x < 4; x++) { 
        for (int y = x + 1; y < 5; y++) {
            if (strcmp(cliente[x].nome, cliente[y].nome) > 0) {
                temp = cliente[x];
                cliente[x] = cliente[y];
                cliente[y] = temp;
            }
        }
    }

    printf("\n--- Dados Cadastrados ---\n");

    for(int x = 0; x < 5; x++) {
        printf("\nPessoa %d:\n", x + 1);
        printf("    Nome: %s\n", cliente[x].nome);
        printf("     CPF: %c%c%c.%c%c%c.%c%c%c-%c%c\n", cliente[0].cpf, cliente[1].cpf, cliente[2].cpf, cliente[3].cpf, cliente[4].cpf, cliente[5].cpf, cliente[6].cpf, cliente[7].cpf, cliente[8].cpf, cliente[9].cpf, cliente[10].cpf);
        printf("Telefone: (%c%c) %c%c%c%c%c-%c%c%c%c\n", cliente[0].fone, cliente[1].fone, cliente[2].fone, cliente[3].fone, cliente[4].fone, cliente[5].fone, cliente[6].fone, cliente[7].fone, cliente[8].fone, cliente[9].fone, cliente[10].fone);
        printf("  Cidade: %s\n", cliente[x].endereco.cidade);
        printf("  Estado: %s\n", cliente[x].endereco.estado);
    }

    printf("\nTamanho da struct ENDERECO: %d bytes", sizeof(ENDERECO));
    printf("\nTamanho da struct PESSOA: %d bytes\n", sizeof(PESSOA));

    return 0;
}
