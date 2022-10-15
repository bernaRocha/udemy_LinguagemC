#include <stdio.h>

int main(){
    // Ex 09 Ler em Celsius e converter para Kelvin
    float celsius, kelvin;
    printf("Diga a temperatura em Celsius para converter em Kelvin: \n");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.1f Celsius em Kelvin é %.1f\n", celsius, kelvin);
    return 0;
}