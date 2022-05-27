//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função primaria.
int main(){
    //Definição das variaveis.
    int NumEntrada, Numero, i;

    //Inicialização das variaveis.
    scanf("%d", &NumEntrada);

    //Codigo principal.
    for(i=1; i<=NumEntrada; i++){
        
        scanf ("%d",&Numero);
        
        if (Numero==0){
            printf("NULL\n");
        } else if(Numero%2 == 0 && Numero>0){
            printf("EVEN POSITIVE\n");
        } else if(Numero%2 == 1 && Numero>0){
            printf("ODD POSITIVE\n");
        }else if(Numero%2 == 0 && Numero<0){
            printf("EVEN NEGATIVE\n");
        }else if(Numero%2 == -1 && Numero<0){
            printf("ODD NEGATIVE\n");
        }  
    }

    return 0;//Final da função.
}