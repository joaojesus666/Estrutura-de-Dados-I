//Bibliotecas
#include<stdio.h>
#include<stdlib.h>

//Função principal
int main(){
    //Declaração de variavel.
    double raio, area;

    //Inicialização.
    scanf("%lf", &raio);
    area = 3.14159*raio*raio;

    printf("A= %.4lf\n", area);
    return 0;
}