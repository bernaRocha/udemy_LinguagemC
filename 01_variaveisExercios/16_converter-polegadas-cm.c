#include <stdio.h>

int main(){
    // Ex 16 Converta polegadas para centímetros
    float polegadas, centimetros;

    printf("Converta as polegadas em centímetros: \n");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("%.2f polegadas em centímetros é: %.2fcm\n", polegadas, centimetros);
    return 0;
}