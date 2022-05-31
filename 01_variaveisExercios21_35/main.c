#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
/*
    // Ex 21 Converta libras para quilogramas
    float libras, quilos;
    printf("Converta as libras em kilos: \n");
    scanf("%f", &libras);
    quilos = libras * 0.453592;
    printf("%.1f libras equivale a %.7f kilos.", libras, quilos);

    // Ex 22 Converta jardas em metros
    float jardas, metros;
    printf("Converta a medida de jardas para metros: \n");
    scanf("%f", &jardas);
    metros = 0.9144 * jardas;
    printf("%.1f jardas em metros é: %.4f metros", jardas, metros);
*/
    // Ex 23 Converta metros para jardas
    float jardas, metros;
    printf("Converta a medida em metros para jardas: \n");
    scanf("%f", &metros);
    jardas = metros / 0.9144;
    printf("%.1f metros em jardas é %.4f", metros, jardas);
}
