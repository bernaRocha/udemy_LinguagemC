#include <stdio.h>

int main(){
    // Ex 19 Converter litros em m3
    float litros, m3;

    printf("Converta um volume em litros para m3: \n");
    scanf("%f", &litros);

    m3 = litros / 1000;

    printf("%.2f litros em m3 é: %.3f m3\n", litros, m3);
    return 0;
}