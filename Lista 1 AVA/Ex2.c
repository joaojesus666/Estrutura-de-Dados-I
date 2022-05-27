/*
Problema 2 com resolução em função recursiva. 
*/

//Biblioteca.
#include <stdio.h>
#include <stdlib.h>

//Declaração da função.
int fib (int n);

//Função principal.
int main(void){
    //Declaração de variavel.
    int n, f;

    //Inicialização de variavel.
    printf("Qual numero deseja calcular:");
    scanf("%d",&n);

    //Retorno da função. 
    f = fib(n);

    //Impressão do resultado.
    printf("O resultado do calculo de %d = %d\n", n, f);
    
    //Final do codigo.
    return 0;
}

//Função de fibonacci.
int fib(int n) {
    double x;

    if (n ==1) {
        return 1;
    } else if (n ==2) {
        return 1;
    } else {
        return fib(n -1) + fib(n -2);
    }
}