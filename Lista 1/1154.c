//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função principal.
int main(){
    //Declaração das variaveis.
    double IdadeM, IdadeF;
    int Idade, Contador = 0;
    //Inicialização das varaveis.
    IdadeM = 0;
    Contador = 0;
    IdadeF = 0;
    Idade = 0;

    while(1){
        scanf("%d", &Idade);        
        
        if (Idade<0){
            break;
        }else{
            IdadeF += Idade;
            Contador++;
        }
    }
    
    //Impressão.
    IdadeM = IdadeF/Contador;
    printf("%.2lf\n", IdadeM);  
         
    
    return 0;//Final do codigo.
}