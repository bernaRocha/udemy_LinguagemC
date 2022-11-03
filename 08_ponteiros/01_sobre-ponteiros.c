#include <stdio.h>

void incrementa(int* contador) {
    printf("Começo da função.\n");
    printf("Antes de incrementar.\n");
    printf("O contador vale: %d\n", (*contador));
    printf("O endereço de memória é: %d\n\n", contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale: %d\n", ++(*contador)); // primeiro incrementa e depois imprime
    printf("O endereço de memória é: %d\n", contador);
    printf("Fim da função.\n\n");
}


int main(){
    int contador = 10;

    printf("Antes de incrementar.\n");
    printf("O contador vale: %d\n", contador);
    printf("O endereço de memória é: %d\n\n", &contador);
    
    incrementa(&contador);

    printf("Depois de incrementar.\n");
    printf("O contador vale: %d\n", contador);
    printf("O endereço de memória é: %d\n\n", &contador);

    
    return 0;
}