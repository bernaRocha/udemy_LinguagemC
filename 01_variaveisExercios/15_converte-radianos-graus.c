#include <stdio.h>

int main(){
    // Ex 15 Leia um ângulo em radianos e converta para graus
    float graus, radianos;
    float pi = 3.141592;

    printf("Apresente o ângulo em radianos e converta para graus: \n");
    scanf("%f", &radianos);

    graus = radianos * 180 / pi;

    printf("%.1f radianos em graus é: %.1f\n", radianos, graus);
    return 0;
}