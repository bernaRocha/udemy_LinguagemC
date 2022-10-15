#include <stdio.h>

int main(){
    // Ex 06 Converter Celsius para Fahrenheit

    float celsius, fahrenheit;
    printf("Diga a temperatura a ser convertida: \n");

    scanf("%f", &celsius);
    fahrenheit = celsius *(1.8) + 32.0;

    printf("A temperatura %.1f em Fahrenheit é %.1f\n", celsius, fahrenheit);
    return 0;
}