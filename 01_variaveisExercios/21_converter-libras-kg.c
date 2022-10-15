#include <stdio.h>

int main(){
    // Ex 21 Converta libras para quilogramas
    float libras, quilos;

    printf("Converta as libras em kilos: \n");
    scanf("%f", &libras);

    quilos = libras * 0.453592;

    printf("%.1f libras equivale a %.3f kilos.", libras, quilos);

    return 0;
}