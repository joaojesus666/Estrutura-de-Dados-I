//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

//Função principal.
int main(){
    //Declaração das variaveis.
    float salario;

    //Inicialização da variavel.
    scanf("%f", &salario);

    //Logica principal.
    if (salario <= 2000.0){
        printf("Isento\n");
    }else if(salario <= 3000.0){
        printf("R$ %.2f\n", (salario - 2000)*0.08);
    }else if(salario <= 4500.0){
        printf("R$ %.2f\n", 1000.0*0.08+(salario-3000)*0.18);
    }else{
        printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28);
    }

    return 0;//Final do codigo.
}
    