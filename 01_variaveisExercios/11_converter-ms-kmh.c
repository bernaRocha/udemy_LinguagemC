#include <stdio.h>

int main(){
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
    float mSeg, kHora;

    printf("Digite a velocidade em m/s a ser convertida em km/h. \n");
    scanf("%f", &mSeg);

    kHora = mSeg * 3.6;

    printf("A velocidade %.1f m/s em k/h é: %.1f\n", mSeg, kHora);
    return 0;
}