#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    // Ex 06 Converter Celsius para Fahrenheit
/*
    float celsius, fahrenheit;
    printf("Diga a temperatura a ser convertida: \n");

    scanf("%f", &celsius);
    fahrenheit = celsius *(1.8) + 32.0;

    printf("A temperatura %.1f em Fahrenheit é %.1f", celsius, fahrenheit);
*/
    // Ex 07 converter Fahrenheit para Celsius
    float celsius, fahrenheit;
    printf("Diga a temperatura em Fahrenheit para converter para Celsius: \n");
    scanf("%f", &fahrenheit);
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
    printf("%.1f em Celsius é %.1f", fahrenheit, celsius);
    return 0;
}
