#include <stdio.h>

int main(){
    int numero = 2;
    printf("Número declarado: %d\n", numero);

    numero = numero << 2;
    printf("Deslocando 2 bits para a esquerda: %d\n", numero);

    numero = 2;
    numero = numero >> 1;
    printf("Deslocando 1 bit para a direita: %d\n", numero);

    numero = 2;
    numero = ~numero;
    printf("O inverso em binário de 2 é: %d\n", numero);
    return 0;
}
