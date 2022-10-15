#include <stdio.h>

int main(){
    // Ex04 Ler um n real e imprimir o quadrado
    int numReal, quadrado;

    printf("Digite um número real: \n");
    scanf("%d", &numReal);

    quadrado = numReal * numReal;

    printf("O quadrado do número digitado ( %d ) é: %d\n", numReal, quadrado);
    return 0;
}