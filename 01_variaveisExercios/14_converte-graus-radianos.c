#include <stdio.h>

int main(){
    // Ex 14 Leia um �ngulo em graus e converta para radianos
    float graus, radianos;
    float pi = 3.141592;

    printf("Digite o ângulo em graus a ser convertido em radianos: \n");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("%.1f graus em radianos é: %.1f \n", graus, radianos);
    return 0;
}