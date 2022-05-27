//Bibiliotecas.
#include<stdio.h>
#include<stdlib.h>

//Função principal.
int main() {
    //Declaração de variavel.
    int A, B, C, D;

    //Inicialização das varaveis.
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    /*Estrutura de logica do codigo.
    B maior que C. 
    D maior que A.
    Soma de C e D maior que soma de A e B. 
    Se C é positivo.
    Se D é positivo.
    Se A é par.*/
    if ((B>C) && (D>A)&&(C+D>A+B) && (C>0) && (D>0) && (A%2==0)){
        //Impressão se der certo.
        printf("Valores aceitos\n");
    }else{
        //Impressão se der errado.
        printf("Valores nao aceitos\n");
    }

    return 0;//Final do codigo.
}
