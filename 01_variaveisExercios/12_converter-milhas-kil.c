#include<stdio.h>

int main(){
    // Ex 12 Leia uma dist�ncia em milhas e converta para kilometros
    float milhas, kilometros;
    printf("Digite a distância em milhas a ser convertida: \n");
    scanf("%f", &milhas);

    kilometros = 1.61 * milhas; // Está arredondado
    
    printf("A distância %.1f milhas em kilometros é: %.1f\n", milhas, kilometros);

    return 0;
}