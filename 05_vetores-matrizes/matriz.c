#include <stdio.h>

// matrizes são arrays multi-dimensionais
int main(){
    char nome[3][50];

    for(int i = 0; i < 3; i++){
        printf("Qual seu nome? ");
        gets(nome[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("Olá %s\n", nome[i]);
    }
    return 0;
}