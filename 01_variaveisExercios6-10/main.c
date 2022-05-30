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

    // Ex 07 converter Fahrenheit para Celsius
    float celsius, fahrenheit;
    printf("Diga a temperatura em Fahrenheit para converter para Celsius: \n");
    scanf("%f", &fahrenheit);
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
    printf("%.1f em Celsius é %.1f", fahrenheit, celsius);

    // Ex 08 Ler em Kelvin e converter para Celsiu
    float kelvin, celsius;
    printf("Diga a temperatura em Kelvin a ser convertida: \n");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("%.1f Kelvin em Celsius é %.1f. ", kelvin, celsius);

    // Ex 09 Ler em Celsius e converter para Kelvin
    float celsius, kelvin;
    printf("Diga a temperatura em Celsius para converter em Kelvin: \n");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.1f Celsius em Kelvin é %.1f", celsius, kelvin);
*/
    // Ex 10 Ler uma velocidade em Km/h e converter em m/s
    float kilHora, mSeg;
    printf("Digite a velocidade em km/h a ser convertida em m/s: \n");
    scanf("%f", &kilHora);
    mSeg = kilHora / 3.6;
    printf("A velocidade %.1f k/h convertida em m/s fica em %.1f", kilHora, mSeg);
    return 0;
}
