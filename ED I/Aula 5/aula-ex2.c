/*Escreva um algoritimo que
Versão 1

X-Leia do usuario a quantidade de valores inteiros serão armazenados;
X-Aloque um vetor dinamicamente para armazenar os valores;
X-Leia os valores do usuário;
X-Na função principal, crie um vetor com tamanho 2, chamado resultado;
X-Escreva uma funçao que receba como parâmetro o vetor e encontre o menor valor da sequência. Este valor deverá ser armazenado na posição 0 no vetor "resultados";
X-Escreva uma segunda função que receba como parâmetro o vetor e encontr o maior valor da sequencia.Este valor deverá ser armazenado na posição 1 no vetor "resultados";
X-Ao final, imprima todos os valores do vetor e tamvém o menor e maior valor(Encongrados); 

Versão 2
X-Transforme a impressão no em um arquivo.
*/
//Importando bibliotecas.
#include <stdio.h>
#include <stdlib.h>

//Definição de uma constante
#define N 2

//Declaração de função.
int menor(int vet[], int tamanho);
int maior(int vet[], int tamanho);

//Função principal
int main() {
    FILE *file;
    int *vet;
    int resultado[N];
    int i, tamanho;

    //Criação e edição do arquivo executavel.
    file = fopen("aula-ex2-2.txt", "w");

    //Tamanho do vetor.
    printf("Informe a quantidade de valores:");
    scanf("%d", &tamanho);  
    
    //Alocando memoria para vetor dinamicamente.
    vet = (int*) malloc( sizeof(int) * tamanho);    
    
    //Lendo os valores e armazenando no vetor.
    for (i=0; i<tamanho; i++) {
      printf("Informe o valor %d de %d:", i+1, tamanho);
      scanf("%d", &vet[i]);
    }

    //Alocação no vetor.
    resultado[0] = menor(vet, tamanho);
    resultado[1] = maior(vet, tamanho);

    //Imprimindo o vetor preenchido.
    for (i=0; i<tamanho; i++) {
        fprintf(file, "Vet[%d] = %d\n", i, vet[i]);
    }

    //Imprimindo o vetor resultado.
    fprintf(file, "O menor valor recebido é %d\nO maior valor recebido é %d\n", resultado[0], resultado[1]);
    fclose(file);
    free (vet);
    return 0;
}

//Funcao que encontra o maior valor presente no vetor
int maior(int vet[], int tamanho) {
    int maior, i;
    maior = vet[0];
    for (i=1; i<tamanho; i++) {
        if (vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}

//Função que encontra o menor valor presente no vetor
int menor(int vet[], int tamanho) {
    int menor, i;
    menor = vet[0];
    for (i=1; i<tamanho; i++) {
        if (vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}