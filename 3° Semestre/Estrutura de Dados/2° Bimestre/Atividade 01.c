// Link forms:
// https://forms.gle/ibwX7n8BHYTXfkYR7

// Link materiais:
// https://drive.google.com/drive/folders/11oMxTWxwmkL5y54WTDpeqPiRIGtnFo-J?usp=sharing


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
    char nome[50]; // Nome do Jogador Ex: Moreno
    int idade; // Idade do jogador Ex: 41
    char classe[20]; // Classe do Jogador Ex: "Guerreiro", "Mago", etc.
} personagem;
//------------------------------------------------------------------------------
typedef struct {
    int nivel; // Nivel do jogador no jogo Ex: 12
    int experiencia; // Pontuacao de experiencia Ex: 890
    personagem p; // Dados do personagem
} jogador;
//------------------------------------------------------------------------------
typedef struct apelido {
    jogador jog; //jog e uma variavel do tipo jogador
    struct apelido *proximo; //*proximo e um ponteiro do no
} no;
//------------------------------------------------------------------------------
no *topo = NULL; //topo e ponteiro que indica o TOPO da pilha

void push(jogador j);     // procedimento Empilhar
void pop();               // procedimento Desempilhar
void mostra_pilha();      // procedimento Imprimir pilha
void liberar_pilha();     // procedimento Limpar memoria
jogador entrada_dados();  // funcao Entrada de dados que retorna dados do jogador

//-------------------------------------------
int main() {
    setlocale(LC_ALL, ""); //ativa teclado padrao do windows
    int opcao; //opcao para o MENU
    jogador dados; //dados e uma variavel do tipo jogador
    do {
        system("cls");
        printf("\nMenu - Pilha de Jogadores");
        printf("\n1. Empilhar Jogador");
        printf("\n2. Desempilhar Jogador");
        printf("\n3. Apresenta Pilha");
        printf("\n4. Limpar Memoria");
        printf("\n5. Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        fflush(stdin); // limpa buffer do teclado

        switch (opcao) {
            case 1:
                dados = entrada_dados(); //variavel dados recebe informacoes do jogador
                push(dados); //empilha dados do jogador
                break;
            case 2:
                pop(); //desempilha o jogador do topo
                break;
            case 3:
                mostra_pilha(); //apresenta a pilha toda
                break;
            case 4:
                liberar_pilha();
                break;
            default:
                printf("Opcao invalida");
        }
        system("pause");
    } while (opcao != 5);

    liberar_pilha(); // limpeza final
    printf("\nFim do programa.\n");
    system("pause");
    return 0;
}
//-------------------------------------------
void push(jogador j) {
    no *novo = malloc(sizeof(no));
    if(novo){
        novo -> jog = j;
        novo -> proximo = topo;
        topo = novo;
    } else {
        printf("Nao foi possivel empilhar!\n");
    }
   
    printf("\nJogador %s empilhado com sucesso!\n", j.p.nome);
}
//-------------------------------------------
void pop() {
    if(topo == NULL){
        printf("A pilha esta vazia!\n");
    } else {
        no *temp;
        temp = topo;
        topo = topo -> proximo;
        printf("Jogador %s foi removido da pilha!\n\n", temp->jog.p.nome);  
        free(temp);
    }
}
//-------------------------------------------
void mostra_pilha() {

    if (topo == NULL) {
        printf("A pilha esta vazia!\n");
        return;
    }

    no *temp;
    temp = topo;
    printf("\nMostrando Pilha...\n");

    while (temp != NULL){
        printf("Nome: %s\n", temp->jog.p.nome);
        printf("Idade: %d\n", temp->jog.p.idade);
        printf("Classe: %s\n", temp->jog.p.classe);
        printf("Nivel: %d\n", temp->jog.nivel);
        printf("Experiencia: %d\n", temp->jog.experiencia);
        temp = temp->proximo;
    }
}
//-------------------------------------------
void liberar_pilha() {
    while (topo != NULL){
        pop();
    }

    printf("\nMemoria liberada com sucesso.\n");
}
//-------------------------------------------
jogador entrada_dados() {
    jogador jog;

    printf("\nCadastro do Jogador:\n");
    printf("Nickname: ");
    scanf("%s",&jog.p.nome);
    fflush(stdin);
    printf("Idade: ");
    scanf("%d",&jog.p.idade);
    fflush(stdin);
    printf("Classe: ");
    scanf("%s",&jog.p.classe);
    fflush(stdin);
    printf("Nivel: ");
    scanf("%d",&jog.nivel);
    fflush(stdin);
    printf("Experiencia: ");
    scanf("%d",&jog.experiencia);
    fflush(stdin);
    
    return jog;
}