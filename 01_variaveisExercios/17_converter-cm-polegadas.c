#include <stdio.h>

int main(){
    // Ex 17 Converta centímetros em polegadas
    float polegadas, centimetros;

    printf("Converta centímetros em polegadas: \n");
    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("%.1f cm em polegadas é: %.4f\n", centimetros, polegadas);
    return 0;
}