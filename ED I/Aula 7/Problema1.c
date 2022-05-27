/*
Problema 1: Implemente um programa que tenha como objetivo
cadastrar alunos, suas notas(duas), calcular sua média e sua
situação final (aprovado/reprovado).

Utilize um registro para representar o "conceito" aluno. Cadastre
tantos alunos quanto o usúario informar.

Ao final, imprima a média da turma (média aritmetica entre todas
as médias finais dos alunos da turma).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Definição de tipo.
struct estrutura_aluno {
    char nome[150];
    float n1, n2, mf;
    char status[50];
};
typedef struct estrutura_aluno tipo_aluno;

//Prototipo de funções.

//Função principal.
int main(int argc, char *argv[]){
    
    //Declaração de variavel.
    int Quantidade_Alunos, i;
    float MF_Final;
    tipo_aluno *aluno;

    //Inicialização da quantidade de alunos.
    printf("Quantidade de alunos: ");
    scanf("%d",&Quantidade_Alunos);
    MF_Final = 0;

    //Alocando o tamanho dos alunos.
    aluno = (tipo_aluno*) malloc( sizeof(tipo_aluno) * Quantidade_Alunos);

    //Inicialização das notas e nomes dos alunos.
    for (i = 0; i<Quantidade_Alunos ; i++){
        printf("\nQual o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);
        printf("Qual a primeira nota: ");
        scanf("%f", &aluno[i].n1);
        printf("Qual a segunda nota: ");
        scanf("%f", &aluno[i].n2);
    }
    
    //Média de cada aluno.
    for(i=0; i<Quantidade_Alunos; i++){
        aluno[i].mf = (aluno[i].n1 + aluno[i].n2)/2;
    }

    //Status do aluno.
    for(int i=0; i<Quantidade_Alunos; i++){
        if (aluno[i].mf >= 5) {
            strcpy (aluno[i].status, "Aprovado"); //strcpy para passar a string para a variavel.
        } else {
            strcpy (aluno[i].status, "Reprovado");
        }
    }

    //Média aritimetica da turma
    for (int i = 0; i <Quantidade_Alunos ; i++){
        MF_Final = (aluno[i].mf + MF_Final);
    }
    MF_Final = MF_Final / Quantidade_Alunos;

    //Impresão das notas e status.
    for(i=0; i<Quantidade_Alunos ; i++){
        printf("\nAluno %s:\n \tN1 = %.2f;\n \tN2 = %.2f;\n \tMF = %.2f;\n \tSTATUS = %s;\n", aluno[i].nome, aluno[i].n1, aluno[i].n2, aluno[i].mf, aluno[i].status);
    }
    //Imprimir a média final da turma.
    printf("\n\tA média da turma é %.2f\n", MF_Final);

    //Final do código.
    return 0;
}