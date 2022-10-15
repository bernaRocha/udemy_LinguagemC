#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    //setlocale(LC_ALL, "");
/*
    

    

    

    

    

    

    

    // Ex 28 Ler 3 valores e apresentar a soma do quadrado dos 3
    int num1, num2, num3;
    printf("Registre tr�s valores e exiba a soma do quadrados deles -> \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("A soma dos quadrados dos tr�s n�meros �: %d", (num1 * num1) + (num2 * num2)+ (num3 * num3));

    printf("Ex 29 - Ler 4 notas e imprimir a m�dia delas: \n");

    float num1, num2, num3, num4, media;
    printf("Registre os 4 n�meros: \n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A m�dia � %.2f", media);

    printf("Ex 30 - Ler um valor real e a cotacao do dolar, apos isso o valor em dolares\n\n");

    float real, cotacao_dolar, real_em_dolar;
    printf("O valor em reais: \n");
    scanf("%f", &real);

    printf("A cota��o do dolar hoje: \n");
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

    printf("Ex 32 - Ler um inteiro e imprimir a soma do sucessor de seu triplo\ncom o antecessor do dobro.\n");
    int numero, equacao;
    printf("Registre o inteiro: \n\n");
    scanf("%d", &numero);

    equacao = (3 * numero + 1) + (2 * numero - 1);

    printf("\nA soma do sucessor de seu triplo\ncom o antecessor do dobro = %d\n", equacao);

    printf("Ex 33 - Leia o lado de um quadrado e imprima a sua area.");
    int lado, area;

    printf("Diga o lado do quadrado para calculo da area: \n");
    scanf("%d", &lado);

    area = lado * lado;

    printf("A area de um quadrado de lado %d e igual a %d", lado, area);

    printf("Ex 34 - Leia um valor do raio e calcule a area do circulo. ");
    float raio, pi = 3.141592, area_circulo;
    printf("Qual o valor do raio? \n");
    scanf("%f", &raio);

    area_circulo = pi * raio * raio;

    printf("\nA area do circulo de raio %.2f e %.2f", raio, area_circulo);
 */

    printf("Ex 35 - A partir dos catetos a e b, calcule a hipotenusa.\n");
    float catetoA, catetoB;
    float hipotenusa;
    printf("Registre os catetos a e b: \n");
    scanf("%f %f", &catetoA, &catetoB);
    hipotenusa = sqrt ((catetoA * catetoA) + (catetoB * catetoB)); // Só funciona rodando pelo terminal:
                                                                   // gcc main.c -lm # cria o arquivo a.out
                                                                   // ./a.out                     
    printf("A hipotenusa de um triangulo com lados de %.1f e %.1f e %.1f\n", catetoA, catetoB, hipotenusa);

    return 0;
}
