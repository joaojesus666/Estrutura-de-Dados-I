//Biblioteca.
#include<stdio.h>
#include<stdlib.h>

//Função principal.
int main() {
    //Declaração de variavel.
    int X;
    float Y, CM;

    //Iniciação de variavel.
    scanf("%d", &X);
    scanf("%f", &Y);

    //Calculo final.
    CM = X/Y;

    //Impressão do resultado.
    printf("%.3f km/l\n", CM);
    return 0;//Final do codigo.
}