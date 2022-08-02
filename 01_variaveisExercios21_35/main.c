#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // biblioteca para matemática

int main()
{
    //setlocale(LC_ALL, "");
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

    // Ex 23 Converta metros para jardas
    float jardas, metros;
    printf("Converta a medida em metros para jardas: \n");
    scanf("%f", &metros);
    jardas = metros / 0.9144;
    printf("%.1f metros em jardas é %.4f", metros, jardas);

    // Ex 24 Converta m2 para acres
    float m2, acres;
    printf("Converta uma medida em m2 para acres: \n");
    scanf("%f", &m2);
    acres = m2 * 0.00024711;
    printf("A medida %.2f m2 em acres é: %.8f", m2, acres);

    // Ex 25 Converta uma área em acres para m2
    float m2, acres;
    printf("Converta uma medida em acres para m2: \n");
    scanf("%f", &acres);
    m2 = acres / 0.00024711;
    printf("A área de %.1f acres em m2 é: %.2f", acres, m2);

    // Ex 26 Converter m2 para hectares
    float m2, hectares;
    printf("Coverta a área de m2 para hectáres: \n");
    scanf("%f", &m2);
    hectares = m2 * 0.0001;
    printf("A área de %.1fm2 convertida em hectares é: %.7f", m2, hectares);

    // Ex 27 Converter hectares em m2
    float m2, hectares;
    printf("Coverta a área de hectares para m2: \n");
    scanf("%f", &hectares);
    m2 = hectares * 10000;
    printf("%.1f hectares em m2 é: %.2f", hectares, m2);

    // Ex 28 Ler 3 valores e apresentar a soma do quadrado dos 3
    int num1, num2, num3;
    printf("Registre três valores e exiba a soma do quadrados deles -> \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("A soma dos quadrados dos três números é: %d", (num1 * num1) + (num2 * num2)+ (num3 * num3));
    printf("Ex 29 - Ler 4 notas e imprimir a média delas: \n");

    float num1, num2, num3, num4, media;
    printf("Registre os 4 números: \n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média é %.2f", media);

    printf("Ex 30 - Ler um valor real e a cotacao do dolar, apos isso o valor em dolares\n\n");

    float real, cotacao_dolar, real_em_dolar;
    printf("O valor em reais: \n");
    scanf("%f", &real);

    printf("A cotação do dolar hoje: \n");
    scanf("%f", &cotacao_dolar);
    real_em_dolar = real / cotacao_dolar;
    printf("O valor em reais convertido para dolares consiste em: %.2f", real_em_dolar);

    printf("Ex 31 - lEr um numero, imprimir o antecessor e o seu sucessor.\n");
    int numero, antecessor, sucessor;
    printf("Registre um numero: \n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    printf("A antecessor = %d\n", antecessor);
    sucessor = numero + 1;
    printf("O sucessor = %d\n", sucessor);
 */
    printf("Ex 32 - Ler um inteiro e imprimir a soma do sucessor de seu triplo\ncom o antecessor do dobro.\n");
    int numero, equacao;
    printf("Registre o inteiro: \n\n");
    scanf("%d", &numero);

    equacao = (3 * numero + 1) + (2 * numero - 1);

    printf("\nA soma do sucessor de seu triplo\ncom o antecessor do dobro = %d", equacao);
}
