//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

//Função principal.
int main(){
    //Declaração das variaveis.
    double A, B, C, D;

    //Inicialização das variaveis.
    scanf("%lf %lf %lf", &A, &B, &C);

    //Calculo
    if (((B*B)-4*A*C)<0 || A==0){
        printf("Impossivel calcular\n");
    } else{
        D = sqrt((B*B)-4*A*C);
        printf("R1 = %.5lf\nR2 = %.5lf\n", ((-B+D)/(2*A)), ((-B-D)/(2*A)));
    }
    return 0;//Final do codigo. 
}