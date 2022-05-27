/*
*UFMT - Barachelado em Ciencias da Computação.
*Prof. Irvainton
*
*Exercicio com alocação dinamica de Matriz.
*/

#include<stdio.h>
#include<stdlib.h>

//Prototipo de funções.

//Função principal.
int main(int argc, char *argv[]){ 

    int n_linha, n_coluna, i, j;
    printf("Informe a quantidade de Linhas da matriz:");
    scanf("%d", &n_linha);
    printf("Informe a quantidade de Linhas da matriz:");
    scanf("%d", &n_coluna);

    int **matriz; //Uma matriz eh um vetor de poteiros para ponteiros

    //Alocamento das linhas dinamicamente.
    matriz = (int**) malloc( sizeof(int*) * n_linha);
    //Alocamento das colunas dinamicamente.
    for (int i = 0; i < n_linha; i++){
        matriz[i] = (int*) malloc(sizeof(int) * n_linha);
    }

    // Preencher a matriz automaticamente
    for (i = 0; i < n_linha; i++){
        for (j=0; j<n_coluna ; j++){
            matriz[i][j] = i+j;
        }
    }
    
    //Impressão da matriz.
    for (i = 0; i < n_linha; i++){
        printf("(Linha %d): [", i);
        for (j=0; j<n_coluna ; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("]\n");
    }

    //Final do codigo.
    return 0;
}