//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função principal.
int main(){
    //Declaração das variaveis.
    int NumEntrada, Numcontado, Impre, PulodeLinha, i, j;

    //Inicialização dos variaveis.
    Impre = 1;
    PulodeLinha = 0;
    scanf("%d %d", &NumEntrada, &Numcontado);

    //Configuração do codigo.
    if((1<NumEntrada<20) && (Numcontado<100000)){
        for(i = 1; i <= Numcontado ; i++){
            PulodeLinha++;
            if(PulodeLinha == NumEntrada){
                printf("%d\n", i);
                PulodeLinha = 0;
            } else{
                printf("%d ", i);
            }
        }
    }
    
    return 0;//Final do codigo.
}