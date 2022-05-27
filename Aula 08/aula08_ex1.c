/*
Implementeção de fila
*/
//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>

//Varivavel constante.
#define TAM 10

//Estruturas.
struct est_fila {
    int fila[TAM];
    int qtd_elem;
};
typedef struct est_fila tipo_fila;

//"*fl" é  prototipo da função. 
//Prototipo de função.
int filaVazia(tipo_fila *fl);
int filaCheia(tipo_fila *fl);
void insereFila(tipo_fila *fl, int valor);
int removeFila(tipo_fila *fl);
int primeiroFila(tipo_fila *fl);
void imprimeFila(tipo_fila *fl); //Função para debug/visualizar fila.

int main(int argc, char *argv[]){
    //Declaração da fila.
    tipo_fila fila_de_num;

    //Inicialização das variaveis.
    fila_de_num.qtd_elem = 0;

    //Escreve na fila
    insereFila(&fila_de_num, 10);    
    insereFila(&fila_de_num, 20);    
    insereFila(&fila_de_num, 30);

    //Imprime a fila.
    imprimeFila(&fila_de_num);

    //Imprime o valor que foi removido da fila.
    printf("Valor removido: %d\n\n", removeFila(&fila_de_num) );

    //Imprime a fila.
    imprimeFila(&fila_de_num);

    //Final do codigo principal
    return 0;
}

//Funções.

//Função para ver se a fila está VAZIA.
int filaVazia(tipo_fila *fl) {
    if (fl->qtd_elem == 0){
        return 1;
    } else {
        return 0;
    }
}

//Função para ver se a fila está CHEIA.
int filaCheia(tipo_fila *fl) {
    if (fl->qtd_elem == TAM){
        return 1;
    }else {
        return 0;
    }
}

//Insere na fila.
void insereFila(tipo_fila *fl, int valor) {
    if (filaCheia(fl)) { //Verifica se a fila está cheia.
        printf("[ERRO] Fila está cheia, não é possivel inserir valor.\n");
    } else { //Havendo espaç disponivel, insere valor
        fl->fila[fl->qtd_elem++] = valor;
        /*
                    OU
        fl -> fila[fl -> qtd_elem] = valor;
        fl -> qtd_elem++;         
        */
    }
}

//Remove elementos.
int removeFila(tipo_fila *fl) {
    int valor, i;
    if (filaVazia(fl)) {
        printf ("[ERRO] Fila vazia, não é possivel remover valor.\n");
        return 1; //retorna 1 como sinal de erro.
    } else {
        valor = fl->fila[0]; //Guarda o valor a ser rotornado.
        //Laço para reposicionamento dos valores.
        for (int i = 0; i < (fl -> qtd_elem -1); i++) {
            fl->fila[i] = fl->fila[i+1];
        }
        fl->qtd_elem--;
        return valor;
    } 
}

int primeiroFila(tipo_fila *fl) {

}

//Imprime a fila.
void imprimeFila(tipo_fila *fl) {
    int i;
    printf("Qtd_elem: %d\n", fl->qtd_elem);
    printf(" Saida <-- [");
    for (i = 0; i < (fl->qtd_elem); i++){
        printf(" %d", fl->fila[i]); 
    }
    printf(" ]  <-- Entrada\n\n");
}