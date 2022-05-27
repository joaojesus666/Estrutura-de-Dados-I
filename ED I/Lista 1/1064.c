//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

//Constantes.
#define V 6

//Função principal.
int main(){
    //Inicialização das variaveis.
    float vet[V], soma, media;
    int i, numero, positivo;

    //Iniciando o valor dos vetores.
    soma = 0;
    media = 0;
    positivo = 0;
    
    for (i=0; i<V; i++){
        scanf("%f", &vet[i]);

        //Quantidade de numeros positivos.
        if (vet[i] > 0){
            //Soma dos valores do vetor.
            soma += vet[i];
            positivo++;
        }
    }
    
    //Calculo total da media.
    media = soma/positivo;

    //Impressão de valores.
    printf("%d valores positivos\n%.1f\n", positivo, media);

    return 0;//Final do codigo.
}