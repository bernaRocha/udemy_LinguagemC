#include<stdio.h>

int main(){
    // Ex 07 converter Fahrenheit para Celsius
    float celsius, fahrenheit;
    printf("Diga a temperatura em Fahrenheit para converter para Celsius: \n");
    scanf("%f", &fahrenheit);
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
    printf("%.1f em Celsius é %.1f\n", fahrenheit, celsius);


    return 0;
}