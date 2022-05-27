//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função principal.
int main(){
    //Declaração das variaveis.
    int NumEntrada, Impre, i, j;

    //Inicialização dos variaveis.
    Impre = 1;
    scanf("%d", &NumEntrada);

    //Configuração do codigo.
    for (j = 0; j < NumEntrada; j++){
        for(i = 0; i <= 3 ; i++){
            if (Impre%4 == 0){
                printf("PUM\n");
                Impre++;
            } else{
                printf("%d ", Impre++);
            }
        }
    }
    
    return 0;//Final do codigo.
}