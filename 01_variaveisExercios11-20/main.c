#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
    float mSeg, kHora;
    printf("Digite a velocifdade em m/s a ser convertida em km/h. \n");
    scanf("%f", &mSeg);
    kHora = mSeg * 3.6;
    printf("A velocidade %.1f m/s em k/h é: %.1f", mSeg, kHora);
    //return 0;
}
