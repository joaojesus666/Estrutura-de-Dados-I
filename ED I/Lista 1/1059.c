//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

//Função principal.
int main(){
    //Declaração das varieveis.
    int i;

    //Impressão.
    for (i=0; i<=100; i++){
        if (i%2 == 0 ){
            i+1;
        } else{
            printf("%d\n", i+1);
        }
    }

    return 0; //Retorno de sucesso com valor zero.
}