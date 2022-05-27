/*
Método de Ordenação
    Bobble Sort ("ordenação bolha");
    Ordenação com o do lado
*/

#include<stdio.h>
#include<stdlib.h>

//Estruturas.
struct est_lista {
    int *lista;
    int qtd;
};
typedef struct est_lista tipo_lista;

//Prototipo de função
    //Funções para configurar lista.
    int listaVazia(tipo_lista *l);
    int listaCheia(tipo_lista *l, int TAM);
    int menu(int opc);
    void opcao(tipo_lista *l, int TAM, int opc);

    //Funções para remover da lista.
    void removeListaINICIO(tipo_lista *l);
    void removeListaFIM(tipo_lista *l);
    void removeListaNoIndice(tipo_lista *l);

    //Funções para inserir na lista.
    int NovoValorLista();
    void insereListaINICIO(tipo_lista *l, int TAM);
    void insereListaFIM(tipo_lista *l, int TAM);
    void insereListaNoIndice(tipo_lista *l, int TAM);
    
    //Função para ordrnar.
    void ordenaçãoBobbleSort(tipo_lista *l, int TAM);
    void ordenaçãoShellSort(tipo_lista *l, int TAM);
    
    //Função para imrpimir.
    void imprimelista(tipo_lista *l);

//Função principal
int main(int argc, char *argv){
    //Declarção de lista.
    tipo_lista lista_de_num;
    int Tam_Vet;

    //Inicialização das variaveis.
    lista_de_num.qtd = 0;
    int opc = 0;

    //Tamanho do vetor
    printf("Qual o tamanho da lista desejada: ");
    scanf("%d", &Tam_Vet);
    
    //Alocando memoria para vetor dinamicamente.
    lista_de_num.lista = (int*) malloc( sizeof(int)* Tam_Vet); 
    
    //Opções de edição da lista.
    do {
    opc = menu(opc);
    opcao(&lista_de_num, Tam_Vet, opc);
    }while(opc);

    //Final do codigo principal.
    return 0;
}

//Funções secundarias.

//Função de menu.
int menu(int opc){
    //Definição de por onde vai entrar
    printf("\n");
    printf("0. Sair\n");
    printf("1. Imprimir lista\n");
    printf("2. Inserir no Inicio\n");
    printf("3. Inserir no Final\n");
    printf("4. Inserir em uma posição especifica\n");
    printf("5. Remove do Inicio\n");
    printf("6. Remove do Final\n");
    printf("7. Remove em uma posição especifica\n");
    printf("8. Ordenar (Bobble Sort)\n");
    printf("9. Ordenar (Sell Sort)\n");

    printf("Opção: "); scanf("%d", &opc);

    return opc;
}

//Função de opção.
void opcao(tipo_lista *l, int TAM, int opc){
    switch(opc){
        case 0:
            //Termina de rodar o código.
            exit(1);
            //Liberar vetor.
            free(l->lista);
        break;

        case 1:
            //Imprime a lista.
            imprimelista(l);
        break;

        case 2:
            //Insere no inicio da lista.
            insereListaINICIO(l, TAM);            
        break;

        case 3:
            //Insere no final da lista.
            insereListaFIM(l, TAM);
        break;

        case 4:
            //Insere em uma posição aleatoria da lista.
            insereListaNoIndice(l, TAM);
        break;

        case 5:
            //Remove no inicio da lista.
            removeListaINICIO(l);
        break;

        case 6:
            //Remove no final da lista.
            removeListaFIM(l);
        break;

        case 7:
            //Remove em uma posição aleatoria da lista.
            removeListaNoIndice(l);
        break;
        
        case 8:
            //Ordenação em Bobble Sort.
            ordenaçãoBobbleSort(l, TAM);
        break;

        case 9:
            //Ordenação em Shell Soft
            ordenaçãoShellSort(l, TAM);
        break;

        default:
            printf("Comando invalido\n\n");
    }
}

//Função para ver se a lista está VAZIA.
int listaVazia(tipo_lista *l){
    if (l->qtd == 0){
        return 1;
    }else {
        return 0;
    }
}

//Função para ver se a lista está CHEIA.
int listaCheia(tipo_lista *l, int TAM) {
    if (l->qtd == TAM){
        return 1;
    }else {
        return 0;
    }
}

//Remove o numero da lista pelo INICIO.
void removeListaINICIO(tipo_lista *l) {
    if (listaVazia(l)){
        printf("[ERROR] - Não é possivel retirar mais variavel da lista.");
    } else {
        int valor = l->lista[0];

        for (int i=0 ; i < (l->qtd) ; i++) {
            l->lista[i] = l->lista[i+1];
        } 
        l->qtd--;

        printf("O valor removido foi: %d\n", valor);
        imprimelista(l);
    }
}

//Remove o numero da lista pelo FIM.
void removeListaFIM(tipo_lista *l) {
    if (listaVazia(l)){
        printf("[ERROR] - Não é possivel retirar mais variavel da lista.");
    } else {
        int valor = l->lista[l->qtd-1];

        for (int i = (l->qtd -1); i < 0; i++) {
            l->lista[i] = l->lista[i+1];
        } 
        l->qtd--;

        printf("O valor removido foi: %d\n", valor);
        imprimelista(l);
    }
}

//Remove o numero da lista por um indice aleatorio.
void removeListaNoIndice(tipo_lista *l) {
    if (listaVazia(l)){
        printf("[ERROR] - Não é possivel retirar mais variavel da lista.");
    } else {
        int indice;
        printf("Em qual posição quer remover de 0 a %d: ", (l->qtd - 1));
        scanf("%d", &indice);

        int valor = l->lista[indice];

        for (int i=indice ; i < (l->qtd) ; i++) {
            l->lista[i] = l->lista[i+1];
        } 
        l->qtd--;

        printf("O valor removido foi: %d\n", valor);
        imprimelista(l);
    }
}

//Insere um valor na lista
int NovoValorLista(){
    int valor;

    printf("Qual valor deseja inserir na lista: ");
    scanf("%d", &valor);

    return valor;
}

//Escreve o numero na lista pelo INICIO.
void insereListaINICIO(tipo_lista *l, int TAM) {
    if (listaCheia(l, TAM)){
        printf("[ERROR] - Não é possivel adicionar mais variavel na lista\n");
    } else {
        int valor = NovoValorLista();

        for (int i = (l->qtd); i >=0; i--){
            l->lista[i+1] = l->lista[i];
        }
        l->lista[0] = valor;
        l->qtd++;

        imprimelista(l);       
    }
}

//Escrever o numero na lista pelo FIM.
void insereListaFIM(tipo_lista *l, int TAM) {     
    if (listaCheia(l, TAM)){
        printf("[ERROR] - Não é possivel adicionar mais variavel na lista.\n");
    } else {
        int valor = NovoValorLista();

        l->lista[l->qtd++] = valor;
        imprimelista(l);
    }
}

//Insere por um indice aleatorio.
void insereListaNoIndice(tipo_lista *l, int TAM) {
    if (listaCheia(l, TAM)){
        printf("[ERROR] - Não é possivel adicionar mais variavel na lista\n");
    } else {
        int indice;
        printf("Em qual posição quer inserir de 0 a %d: ", (l->qtd - 1));
        scanf("%d", &indice);

        int valor = NovoValorLista();

        for (int i = (l->qtd); i >=indice; i--){
            l->lista[i+1] = l->lista[i];
        }
        l->lista[indice] = valor;
        l->qtd++;

        imprimelista(l);       
    }
}

//Função para ordenar por Bobble Sort.
void ordenaçãoBobbleSort(tipo_lista *l, int TAM){
    int troca, valor;
    troca = 1;

    while(troca) {
        troca = 0;
        for (int i = 0; i < (l->qtd - 1); i++){
            if(l->lista[i] > l->lista[i+1]){
                valor = l->lista[i];
                l->lista[i] = l->lista[i+1];
                l->lista[i+1] = valor;

                troca = 1;
            }
        }

    }

    imprimelista(l);
}

//Função para ordenar por Shell Sort.
void ordenaçãoShellSort(tipo_lista *l, int TAM){
    int troca, valor, salto;
    troca = 1;
    salto = (TAM/2);

    while(troca) {
        troca = 0;
        for (int i = 0; i < (l->qtd - salto); i++){
            if(l->lista[i] > l->lista[i+salto]){
                valor = l->lista[i];
                l->lista[i] = l->lista[i+salto];
                l->lista[i+salto] = valor;

                troca = 1;
            }
            salto--;
        }

    }
//[ 3  583  58  5  9  1  0  58  10  46 ]
    imprimelista(l);
}

//Imprimir a pilha.
void imprimelista(tipo_lista *l) {
    system("clear");
    printf("\n [");
    for(int i=0; i < (l->qtd); i++){
        printf(" %d ", l->lista[i]); 
    }
    printf("]\n");
    
    printf("   ");
    for(int i=0; i < (l->qtd); i++){
        printf("%d", i);
        printf("  ");
    }
    printf("\n");
}