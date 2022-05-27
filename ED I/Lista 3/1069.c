//Bibliotecas.
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
    //Declaração de variaveis.
    int quantia, diamantes;
    char mina[1000];

    //Inicialização de variaveis.
    quantia = 0;
    
    //Quantas vezes vai ser minerador.
    scanf("%d", &quantia);

    while(quantia--) {
        scanf("%s", mina);

        diamantes = 0;

        for (int i = 0; i < strlen(mina); i++) {
            if (mina[i] == '\0') {
                break;
            }

            if (mina[i] == '<'){
                for (int j = i; j < strlen(mina); j++) {
                    if (mina[j] == '>') {
                        diamantes++;
                        mina[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", diamantes);
    }
    
    return 0;
}