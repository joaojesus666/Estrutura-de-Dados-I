/*
*UFMT - Barachelado em Ciencias da Computação.
*Prof. Irvainton
*
*Exercicio com estrutura.
*/

#include<stdio.h>
#include<stdlib.h>

//Definição de tipo.
struct estrutura_aluno {
    char nome[100];
    int ra;
    float n1, n2, mf;
};
typedef struct estrutura_aluno tipo_aluno;

//Prototipo de funções.

//Função principal.
int main(int argc, char *argv[]){

    //As duas formas estão certas de declara variavel.
    struct estrutura_aluno aluno1;
    //tipo_aluno aluno2;

    aluno1.n1 = 7.5;
    aluno1.n2 = 9.3;
    aluno1.mf = (aluno1.n1 + aluno1.n2)/2;

    printf("Aluno 1:\n N1 = %.2f;\n N2 = %.2f;\n MF = %.2f;\n", aluno1.n1, aluno1.n2, aluno1.mf);

    return 0;
}