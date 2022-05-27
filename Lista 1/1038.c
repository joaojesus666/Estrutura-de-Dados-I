//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função principal.
int main(){
    //Declaração de variaveis.
    float CQ, XS, XB, TS, R;
    int X, Y;

    //Inicialização de variaveis
    CQ = 4.00;
    XS = 4.50;
    XB = 5.00;
    TS = 2.00;
    R  = 1.50;
    scanf("%d %d", &X, &Y);

    //Calculos.
    if (X == 1) {
        printf("Total: R$ %.2f\n", (Y*CQ));
    }
    if (X == 2) {
            printf("Total: R$ %.2f\n", (Y*XS));
        }
    if (X == 3) {
        printf("Total: R$ %.2f\n", (Y*XB));
    }
    if (X == 4) {
        printf("Total: R$ %.2f\n", (Y*TS));
    }
    if (X == 5) {
        printf("Total: R$ %.2f\n", (Y*R));
    }

    return 0;//Final do codigo.
}