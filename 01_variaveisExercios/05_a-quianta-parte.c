#include <stdio.h>

int main(){
    // Ex 05 Ler um número e imprimir a quinta parte dele
    float num1, quintaParte;

    printf("Digite o número a ser calculado sua quinta parte: \n");
    scanf("%f", &num1);

    quintaParte = num1 / 5;

    printf("A quinta parte de (%.0f) é: %.1f\n", num1, quintaParte);

    return 0;
}