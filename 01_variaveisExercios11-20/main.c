#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
/*    float mSeg, kHora;
    printf("Digite a velocifdade em m/s a ser convertida em km/h. \n");
    scanf("%f", &mSeg);
    kHora = mSeg * 3.6;
    printf("A velocidade %.1f m/s em k/h é: %.1f", mSeg, kHora);

    // Ex 12 Leia uma distância em milhas e converta para kilometros
    float milhas, kilometros;
    printf("Digite a distância em milhas a ser convertida: ");
    scanf("%f", &milhas);
    kilometros = 1.61 * milhas; // Está arredondado
    printf("A distância %.1f milhas em kilometros é: %.1f", milhas, kilometros);

    // Ex 13 Leia uma distância em kilometros e converta para milhas
    float milhas, kilometros;
    printf("Digite a distância em kilometros a ser convertida em milhas: \n");
    scanf("%f", &kilometros);
    milhas = kilometros / 1.61 ; // Está arredondado
    printf("A distância %.1f kilometros em milhas é: %.1f", kilometros, milhas);
*/

    // Ex 14 Leia um ângulo em graus e converta para radianos
    float graus, radianos;
    float pi = 3.141592;
    printf("Digite o ângulo em graus a ser convertido em radianos: \n");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("%.4f graus em radianos é: %.4f ", graus, radianos);
}
