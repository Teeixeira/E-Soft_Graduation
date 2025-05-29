/******************************************************************************

1) Conclua o programa abaixo onde a estrutura deverá possuir:
nome
telefone
email
cpf

Siga os passos abaixo:

Crie um vetor (de tamanho 3) onde serao armazenados os dados de 3 pessoas (solicitar ao usuario)

Posteriormente, crie variáveis de ponteiro (uma para cada variável) e posteriormente atribua o valor 10 para a variável x.  
Em seguida, a variável y deverá possuir o dobro da variável x. 
A variável z deverá possuir o possuir 10 vezes o valor de y, subtraindo o valor 20 do valor final (o valor atribuído para a variável Z deverá vir através de seu ponteiro).
A variável w receberá o terceiro caractere do segundo nome do vetor.
A variável k deverá receber a metade do valor da variável do ponteiro de z .
A variável n deverá receber apenas 32,5% do valor atribuído a soma das variáveis x e y, mas os valores deverão vir de seus respectivos ponteiros.

Ao usuário:
Mostre o valor de cada variável, bem como seu endereço de memória
Mostre o valor de cada ponteiro, bem como o seu endereço de memória
Mostre o endereço de memória que cada ponteiro aponta
Mostre o consumo em bytes de cada variável, ponteiro e estrutura.

2) Qual o tamanho de uma struct que não possua nenhuma variável definida em seu conteúdo?
3) Qual comando e parâmetros devo utilizar para apresentar a posição do último caractere de uma string?
4) Se uma string de 8 elementos possui seu endereço de memoria 0090FEF0, quais serão os endereços de memória do 1o. e  5o. caractere?

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa {
    char nome[50];
    char cpf[12];
    char telefone[12];
    char email[25];
} pessoa;

pessoa p[3];
int x, y, z;
char w;
float k;
double n;

int main() {
    // Solicitação dos dados ao usuário
    for (int i = 0; i < 3; i++) {
        printf("Nome do %d usuario: ", i + 1);
        scanf("%s", p[i].nome);
        fflush(stdin);
        
        printf("CPF do %d usuario (Apenas numeros): ", i + 1);
        scanf("%s", p[i].cpf);
        fflush(stdin);
        
        printf("Telefone do %d usuario (Apenas numeros): ", i + 1);
        scanf("%s", p[i].telefone);
        fflush(stdin);
        
        printf("E-mail do %d usuario: ", i + 1);
        scanf("%s", p[i].email);
        fflush(stdin);
    }
    
    int *ptrX = &x, *ptrY = &y, *ptrZ = &z;
    char *ptrW = &w;
    float *ptrK = &k;
    double *ptrN = &n;
    
    *ptrX = 10;
    *ptrY = (*ptrX) * 2;
    *ptrZ = (*ptrY) * 10 - 20;
    *ptrW = p[1].nome[2];
    *ptrK = (*ptrZ) / 2.0;
    *ptrN = (*ptrX + *ptrY) * 0.325;
    
    printf("\nValores e enderecos das variaveis:\n");
    printf("x = %d, endereco: %p\n", x, &x);
    printf("y = %d, endereco: %p\n", y, &y);
    printf("z = %d, endereco: %p\n", z, &z);
    printf("w = %c, endereco: %p\n", w, &w);
    printf("k = %.2f, endereco: %p\n", k, &k);
    printf("n = %.2lf, endereco: %p\n", n, &n);
    
    printf("\nValores e enderecos dos ponteiros:\n");
    printf("ptrX = %p, aponta para: %p\n", &ptrX, ptrX);
    printf("ptrY = %p, aponta para: %p\n", &ptrY, ptrY);
    printf("ptrZ = %p, aponta para: %p\n", &ptrZ, ptrZ);
    printf("ptrW = %p, aponta para: %p\n", &ptrW, ptrW);
    printf("ptrK = %p, aponta para: %p\n", &ptrK, ptrK);
    printf("ptrN = %p, aponta para: %p\n", &ptrN, ptrN);
    
    printf("\nConsumo de memoria (em bytes):\n");
    printf("Tamanho da estrutura pessoa: %lu bytes\n", sizeof(pessoa));
    printf("Tamanho de x: %lu bytes\n", sizeof(x));
    printf("Tamanho de y: %lu bytes\n", sizeof(y));
    printf("Tamanho de z: %lu bytes\n", sizeof(z));
    printf("Tamanho de w: %lu bytes\n", sizeof(w));
    printf("Tamanho de k: %lu bytes\n", sizeof(k));
    printf("Tamanho de n: %lu bytes\n", sizeof(n));
    printf("Tamanho de um ponteiro: %lu bytes\n", sizeof(ptrX));
    
    return 0;
}

/*2) Qual o tamanho de uma struct que não possua nenhuma variável definida em seu conteúdo?
  R: A struct nao pode ter 0 byte, entao é atribuído 1 byte para reservar a memoria para a struct
*/

/*3) Qual comando e parâmetros devo utilizar para apresentar a posição do último caractere de uma string?
  R: posicao = strlen(string) - 1 
*/

/*4) Se uma string de 8 elementos possui seu endereço de memoria 0090FEF0, quais serão os endereços de memória do 1o. e  5o. caractere?  
  R: 1- 0x0090FEF0
     2- 0x0090FEF1
     3- 0x0090FEF2
     4- 0x0090FEF3
     5- 0x0090FEF4 
*/