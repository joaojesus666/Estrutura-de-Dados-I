//Biblioteca
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Prototipo de função.
bool verificaParentes(char *);

//Função principal.
int main(){
    //Definição de variavel.
    char expressão[1000];

    while (scanf("%s", expressão) != EOF) {
        if (verificaParentes(expressão)){
            printf("correct\n");
        } else{
            printf("incorrect\n");
        }
    }
    
    return 0;
}

//Funções secundarias.
bool verificaParentes(char *str){
    short qts = 0;

    while ((*str) && (qts >= 0)) {
        if (*str == '('){
            qts++;
        }

        if (*str == ')'){
            qts--;
        }

        str++;            
    }

    if (qts == 0){
        return true;
    } else {
        return false;
    }
}