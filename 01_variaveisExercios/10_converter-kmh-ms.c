#include <stdio.h>

int main(){
    // Ex 10 Ler uma velocidade em Km/h e converter em m/s
    float kilHora, mSeg;

    printf("Digite a velocidade em km/h a ser convertida em m/s: \n");
    scanf("%f", &kilHora);

    mSeg = kilHora / 3.6;

    printf("A velocidade %.1f k/h convertida em m/s fica em %.1f\n", kilHora, mSeg);
    return 0;
}