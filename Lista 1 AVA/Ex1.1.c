/*
Problema 1 com resolução em função recursiva. 
*/

//Chama biblioteca
#include <stdio.h>
#include <stdlib.h>

//Declaração da função.
double fatorial (int n);

//Função principal
int main(void){
    //Declaração de variavel.
    int n;
    double f;

    //Inicialização de variavel.
    printf("Qual numero deseja fatorar:");
    scanf("%d",&n);

    //Retorno da função. 
    f = fatorial(n);

    //Impressão do resultado.
    printf("O resultado da fatoração de %d = %.0lf\n", n, f);
    
    //Final da função.
    return 0;
}

//Função de fatoração.
double fatorial(int n) {
    double x;

    if (n <=1) {
        return 1;
    } else {
        x = n * fatorial(n -1);
        return(x);
    }

}