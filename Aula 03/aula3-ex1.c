//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

void dobra( int *pt_a );

//Função principal.
int main(){
    int x;
    int *pt_x;

    x = 2;
    pt_x = NULL;
    pt_x = &x;

    printf("Endereço de &x: %ls \n", &x);
    printf("Valor armazenado em tp_x: %ls \n", pt_x);
    printf("Endereço de &pt_x: %d \n", &pt_x);
    printf("Valor em memoria acessado por *pt_x: %d \n", *pt_x);     
    
    printf("Valor de x = %d\n", x);
    dobra(&x);
    printf("Valor de x apos dobra = %d\n", x);
    
    return 0;//Final do codigo.
}

void dobra( int *pt_a ) {
    *pt_a = *pt_a * 2;
}