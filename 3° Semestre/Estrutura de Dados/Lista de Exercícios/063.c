/*Implemente um programa em linguagem C que permita o cadastro de N produtos, onde N deve ser informado pelo usuário. Para cada 
produto, devem ser armazenadas as seguintes informações: 
• Código (int) 
• Nome (string de tamanho variável) 
• Preço (float) 

Regras: 
a) O cadastro dos produtos deve ser feito utilizando struct e alocação dinâmica. 
b) O nome do produto deve ser armazenado de forma dinâmica, utilizando o tamanho exato informado pelo usuário. 
c) Após o cadastro, o programa deve exibir todos os produtos cadastrados. 
d) Não se esqueça de liberar toda memória alocada. 
*/

#include <stdio.h>
#include <stdlib.h>

// Struct para representar um produto
typedef struct {
    int codigo;
    char *nome;
    float preco;
} Produto;

int n, tamanhoNome;

int main() {

    printf("Informe a quantidade de produtos: ");
    scanf("%d", &n);

    Produto *produtos = malloc(n * sizeof(Produto));
    if (produtos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Tamanho do nome: ");
        scanf("%d", &tamanhoNome);

        produtos[i].nome = malloc((tamanhoNome + 1) * sizeof(char));
        if (produtos[i].nome == NULL) {
            printf("Erro ao alocar memoria para o nome!\n");
            return;
        }

        printf("Nome: ");
        gets(produtos[i].nome);
        fflush(stdin);


        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
    }
    printf("\n Produtos Cadastrados:\n");
    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo: %d\n", produtos[i].codigo);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: %.2f\n", produtos[i].preco);
    }

    for (int i = 0; i < n; i++) {
        free(produtos[i].nome);
    }
    free(produtos);

    return 0;
}
