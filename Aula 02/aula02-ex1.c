/*
UFMT - Estrutura de Dados I
prof. Ivairton

Aula 2 - Exercicio 1
*/

//Bibliotecas.
#include<stdio.h>
#include<stdlib.h> 

//Constantes.
#define N 10

//Função principal
int main(){
    //Declaração de variveis.
    int a;
    int b;
    int i;
    //Ou se pode declarar.
    int soma, produto;

    //Inicialização.
    //a = 4;
    //b = 7;

    scanf("%d", &a);
    scanf("%d", &b);

    soma = a+b;

    //Imprime o resultado.
    printf("O resultado eh: %d \n", soma);
    printf("O resultado de a=%d + b=%d eh: %d \n", a, b, soma);

    //Verifica se a eh maior que b.
    if ( a > b){
        printf("A é maior que B!\n");
    } else if (a < b) {
        printf("A não é maior que B!\n");
    } else {
        printf("A eh igual a B!\n");
    }

    //Vamos multiplicar os valores usando um laço.
    produto = a;
    while (b > 1){
        produto = produto + a;
        b--;
    }
    printf("Muliplicação = %d\n", produto);

    //Vamos informat quantas vezes o elemento foi somado na ação de multiplicação.
    for (i = 0; i < a; i++ ){
        printf("Contador %d\n", i+1);
    }

    //Trabalhando com vetor.
    int vet[N];
    //Preencher vetor.
    for (i=0; i<N; i++) {
        vet[i] = i*i;
    }
    //Imprimeir vetor.
    for (i=0; i<N; i++) {
        printf("vet[%d]=%d\n", i, vet[i]);
    }

    return 0; //Retorno de sucesso com valor zero.
}