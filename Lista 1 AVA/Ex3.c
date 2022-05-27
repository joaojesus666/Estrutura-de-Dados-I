/*
Problema 3 com resolução em função recursiva. 
*/

//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

//Declaração da função.
int par(int n);
  
//Função principal.
int main(){
    //Declaração das varieveis.
    int n;
    
    //Inicialização da variavel.
    printf("Até qual numero deseja descobrir os pares?\n");
    scanf("%d", &n);
    
    //Chamada da função
    par(n);
    
    //Final do código.
    return 0;
}

//Função.
int par(int n){
  int i;
  
  for (i=n+1; i>=2; i--){
        if (i%2 == 0 ){
            i-1;
        } else{
            printf("%d\n", i-1);
        }
    }
}