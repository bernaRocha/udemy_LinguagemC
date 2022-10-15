#include <stdio.h>

int main(){
    char nome[50]; // até 49 caracteres

    printf("Qual seu nome? \n");
    gets(nome);
    printf("Seu nome é %s\n", nome);
    return 0;
}