#include<stdio.h>

int main(){
    // Ex 08 Ler em Kelvin e converter para Celsius
    float kelvin, celsius;
    printf("Diga a temperatura em Kelvin a ser convertida: \n");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("%.1f Kelvin em Celsius é %.1f\n.", kelvin, celsius);

    return 0;
}
