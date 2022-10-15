#include <stdio.h>

int main(){
    // Ex 13 Leia uma dist�ncia em kilometros e converta para milhas
    float milhas, kilometros;
    printf("Digite a distância em kilometros a ser convertida em milhas: \n");
    scanf("%f", &kilometros);

    milhas = kilometros / 1.61 ; // Está arredondado

    printf("A distância %.1f kilometros em milhas é: %.1f\n", kilometros, milhas);
    return 0;
}