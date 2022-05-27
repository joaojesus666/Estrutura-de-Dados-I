//Biblioteca.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Função principal
int main() {
    //Declaração das variaveis.
    int I,F,TEMPO;
    
    //Inicialização das variaveis.
    scanf("%d %d",&I,&F);
    
    //Calculo dos horarios.
    TEMPO=24-I+F;
    
    if (TEMPO >24)
        printf("O JOGO DUROU %d HORA(S)\n",TEMPO-24);
    else
        printf("O JOGO DUROU %d HORA(S)\n",TEMPO);

    return 0;//Final do codigo.
}