/*
Fila;
    Insira variaveis na fila
*/

#include<stdio.h>
#include<stdlib.h>

#define TAM 3

struct est_fila {
    int fila[TAM];
    int qtd_elem;
};
typedef struct est_fila tipo_fila;

void insereFila(tipo_fila *fl, int valor);
int removerFila(tipo_fila *fl);

int main(int argc, char *argv[]){
    int i, j;
    tipo_fila fila;
    fila.qtd_elem = 0;
    for (int i=0; i<TAM; i++){
      fila.fila[i] = 0;
    }

    //Inserindo na fila.
    for (i=0; i<TAM; i++){
      printf("Qual numero deseja inserir na fila: ");
      scanf("%d", &fila.fila[i]);
    }
    printf("\n\t");
    //Imprimindo.
    for (i = 0; i < TAM; i++){
        printf("%d ", fila.fila[i]);
    }
    printf("\n");

    //Remover todos da fila.
    for (j=0; j<TAM; j++){
        //Remove.
        printf("\nO numero removido da fila foi: %d\n", fila.fila[0]);
        for(i = 0; i < TAM; i++){
          fila.fila[i] = fila.fila[i+1];
        }
        printf("\t");
        //Imprimindo.
        for (i = 0; i < TAM; i++){
            printf("%d ", fila.fila[i]);
        }  
        printf("\n");
    }
    
    
    //Final do codigo.
    return 0;
}

void insereFila(tipo_fila fl[], int qtd){
    

}