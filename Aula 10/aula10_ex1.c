/*
1 - Implemente um algoritmo que sorteir=e numeros interios positivos que irão
representar números de senhas. Use a estrutura de dados Fila para
armazenar esses números. Adicionalmente, imagine que há uma fila de
prioridades (com outros números sorteados). O programa deverá proceder
com as seguintes ações:
    1: Solicitar nova senha (se for prioriário, inserir na fila de prioridade,
    senão, na fila "comum");
    2: Atender senha (se houver algum valor na fila de prioridade, remover
    este valor. Se a fila de prioridade estiver vazia, avender a senha da fila
    "comum");
*/

//Bibliotecas.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//variavel Constante.
#define TAM 10

//Estrutura.
struct est_fila {
    int fila[TAM];
    int qtd_elem;
};
typedef struct est_fila fila;

//Prototipo de função.
int menu(int opc);
void opcao(fila *fl, fila *fl_c, int valor, int opc);

int novo_valor(int num);

int filaVazia(fila *fl);
int filaCheia(fila *fl);
void insereFila(fila *fl, int num);
int removeFila(fila *fl);
int primeiroFila(fila *fl);
void imprimeFila(fila *fl);

//Função principal.
int main(int argc, char *argv[]){
    //Declaração das estruturas.
    fila fila_de_prioridade;
    fila fila_comum;

    //Declaração de variaveis.
    int opc=0;

    //Inicialização das variaveis.
    fila_de_prioridade.qtd_elem = 0;
    fila_comum.qtd_elem = 0;

    do {
        opc = menu(opc);
        opcao(&fila_de_prioridade, &fila_comum, TAM ,opc);
    }while(opc);

    return 0;
}

//Funções.

//Função de menu.
int menu(int opc){
    //Definição de por onde vai entrar
    printf("\n");
    printf("0. Sair\n");
    printf("1. Nova senha prioritaria\n");
    printf("2. Nova senha comum\n");
    printf("3. Atender\n");
    printf("4. Imprimir\n");

    printf("Opção: "); scanf("%d", &opc);
    printf("\n");

    return opc;
}

//Função de opção.
void opcao(fila *fl, fila *fl_c, int valor, int opc){
     int num = 0;
    switch(opc){
        case 0:
            //Termina de rodar o código.
            exit(1);
        break;

        case 1:
            num = novo_valor(num);
            insereFila(fl, num);
            
            printf("Fila prioritaria:\n");
            imprimeFila(fl);
            printf("Fila Comum:\n");
            imprimeFila(fl_c);
        break;

        case 2:
            num = novo_valor(num);
            insereFila(fl_c, num);
            
            printf("Fila prioritaria:\n");
            imprimeFila(fl);
            printf("Fila Comum:\n");
            imprimeFila(fl_c);
        break;

        case 3:
            if (filaVazia(fl)) {
                removeFila(fl_c);
            } else {
                removeFila(fl);
            }
            
            printf("Fila prioritaria:\n");
            imprimeFila(fl);
            printf("Fila Comum:\n");
            imprimeFila(fl_c);
        break;

        case 4:
            printf("Fila prioritaria:\n");
            imprimeFila(fl);
            printf("Fila Comum:\n");
            imprimeFila(fl_c);
        break;

        default:
            printf("Comando invalido\n\n");
    }
}

//novo valor gerado.
int novo_valor(int num) {
    time_t t;
    srand( (unsigned) time(&t) );
    num = rand() % 10;
    return num;
}

//Função para ver se a fila está VAZIA.
int filaVazia(fila *fl) {
    if (fl->qtd_elem == 0){
        return 1;
    } else {
        return 0;
    }
}

//Função para ver se a fila está CHEIA.
int filaCheia(fila *fl) {
    if (fl->qtd_elem == TAM){
        return 1;
    }else {
        return 0;
    }
}

//Insere na fila.
void insereFila(fila *fl, int num) {
    if (filaCheia(fl)) { //Verifica se a fila está cheia.
        printf("[ERRO] Fila está cheia, não é possivel inserir valor.\n");
    } else { //Havendo espaç disponivel, insere valor
        fl->fila[fl->qtd_elem++] = num;
    }
}

//Remove elementos.
int removeFila(fila *fl) {
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


//Imprime a fila.
void imprimeFila(fila *fl) {
    //system ("clear");    
    int i;
    printf("Qtd_elem: %d\n", fl->qtd_elem);
    printf(" Saida <-- [");
    for (i = 0; i < (fl->qtd_elem); i++){
        printf(" %d", fl->fila[i]); 
    }
    printf(" ]  <-- Entrada\n\n");
    printf("_______________________________\n");
}
