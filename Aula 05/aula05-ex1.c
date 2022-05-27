#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *vet;
  int i, tamanho;

  printf("Informe a quantidade de vetor:");
  scanf("%d", &tamanho);

  //Alocando memoria para vetor dinamicamente.
  vet = (int*) malloc( sizeof(int) * tamanho);

  //Lendo os valores e armazenando no vetor.
  for (i=0; i<tamanho; i++) {
    printf("Informe o valor %d de %d:", i+1, tamanho);
    scanf("%d", &vet[i]);
  }

  //Imprimindo o vetor preenchido.
  for (i=0; i<tamanho; i++) {
    printf("Vet[%d] = %d\n", i, vet[i]);
  }

  return 0;
}

/*Escreva um algoritimo que
-Leia do usuario a quanidade de valores inteiros serão armazenados;
-Aloque um vetor dinamicamente para armazenar os valores;
-Leia os valores do usuário;
-Na função principal, crie um vetor com tamanho 2, chamado resultado;
-Escreva uma funçao que receba como parâmetro o vetor e encontre o menor valor da sequência. Este valor deverá ser armazenado na posição 0 no vetor "resultados";
-Escreva uma segunda função que receba como parâmetro o vetor e encontr o maior valor da sequencia.Este valor deverá ser armazenado na posição 1 no vetor "resultados";
-Ao final, imprima todos os valores do vetor e tamvém o menor e maior valor(Encongrados); 
*/