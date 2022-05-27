/*
Problema 1 com resolução em função iterativa. 
*/

//Biblioteca
#include <stdio.h>
#include <stdlib.h>

//Declaração da função.
int fatorial (int n);

//Função principal.
int main(void){
    //Declaração de variavel.
    int n, f;

    //Inicialização de variavel.
    printf("Qual numero deseja fatorar:");
    scanf("%d",&n);

    //Retorno da função. 
    f = fatorial(n);

    //Impressão do resultado.
    printf("O resultado da fatoração de %d = %d\n", n, f);
    
    //Final da função.
    return 0;
}

//Função de fatoração.
int fatorial(int n) {
    double i, fat;
    fat = 1;
    for (i=1; i<=n; i++){
        fat = fat *i;
    }
    return fat;
}