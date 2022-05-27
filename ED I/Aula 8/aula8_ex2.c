/*
Implementação de pilha.
*/

// Bibliotecas
#include<stdio.h>
#include<stdlib.h>

//Variavel constante.
#define TAM 10

//Estruturas.
struct est_pilha {
    int pilha[TAM];
    int qtd;
};
typedef struct est_pilha tipo_pilha;

//Prototipo de função
int pilhaVazia(tipo_pilha *pl);
int filaCheia(tipo_pilha *pl);
int removePilha(tipo_pilha *pl);

void inserePilha(tipo_pilha *pl);
void imprimePilha(tipo_pilha *pl);

//Função principal
int main(int argc, char *argv){
    //Declarção de pilha.
    tipo_pilha pilha_de_num;

    //Inicialização das variaveis.
    pilha_de_num.qtd = 0;

    //Escreve na pilha.
    inserePilha(&pilha_de_num); 

    //Impreção da pilha completa.
    imprimePilha(&pilha_de_num);
    printf("_________________________________________\n");     

    for (int i = 0; i < TAM; i++){
        //Imprime o valor que foi removido da pilha.
        printf("\tValor removido: %d\n", removePilha(&pilha_de_num));
        //Imprime a pilha.
        imprimePilha(&pilha_de_num);
    }

    //Final do codigo principal.
    return 0;
}

//Funções secundarias.

//Função para ver se a pilha está VAZIA.
int pilhaVazia(tipo_pilha *pl){
    if (pl->qtd == 0){
        return 1;
    }else {
        return 0;
    }
}

//Função para ver se a pilha está CHEIA.
int pilhaCheia(tipo_pilha *pl) {
    if (pl->qtd == TAM){
        return 1;
    }else {
        return 0;
    }
}

//Função para remover o ultimo item da pilha.
int removePilha(tipo_pilha *pl) {
    if (pilhaVazia(pl)){
        printf("[ERROR] - Não é possivel retirar mais variavel da pilha.");
        return 1;
    } else {
        int valor = pl->pilha[pl->qtd-1];

        for (int i = (pl->qtd -1); i < 0; i++) {
            pl->pilha[i] = pl->pilha[i+1];
        } 
        pl->qtd--;
        return valor;
    }
}

//Escrever o numero na pilhar.
void inserePilha(tipo_pilha *pl) {
    if (pilhaCheia(pl)){
        printf("[ERROR] - Não é possivel adicionar mais variavel da pilha.");
    } else {
        for (int i=0; i < TAM; i++){
            printf("Qual numero deseja inserir na fila: ");
            scanf("%d", &(pl->pilha[i]) );
            printf("\n");
            pl->qtd++;
            imprimePilha(pl);
        }
        printf("_________________________________________\n\n");
    }
}

//Imprimir a pilha.
void imprimePilha(tipo_pilha *pl) {
    printf("Elementos na pilha: %d\n", pl->qtd);
    printf("\t <-- Saida \n [");
    for(int i=0; i < (pl->qtd); i++){
        printf(" %d ", pl->pilha[i]);
    }
    printf("]\n\t <-- Entrada\n\n");
    
}