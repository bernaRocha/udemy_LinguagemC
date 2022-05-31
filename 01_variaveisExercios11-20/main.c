#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
/*
    // Ex 11 Leia uma velocidade em m/s e converta em km/h
    float mSeg, kHora;
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


    // Ex 14 Leia um ângulo em graus e converta para radianos
    float graus, radianos;
    float pi = 3.141592;
    printf("Digite o ângulo em graus a ser convertido em radianos: \n");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("%.4f graus em radianos é: %.4f ", graus, radianos);

    // Ex 15 Leia um ângulo em radianos e converta para graus
    float graus, radianos;
    float pi = 3.141592;
    printf("Apresente o ângulo em radianos e converta para graus: \n");
    scanf("%f", &radianos);
    graus = radianos * 180 / pi;
    printf("%.2f radianos em graus é: %.2f", radianos, graus);

    // Ex 16 Converta polegadas para centímetros
    float polegadas, centimetros;
    printf("Converta as polegadas em centímetros: \n");
    scanf("%f", &polegadas);
    centimetros = polegadas * 2.54;
    printf("%.2f polegadas em centímetros é: %.2fcm", polegadas, centimetros);

    // Ex 17 Converta centímetros em polegadas
    float polegadas, centimetros;
    printf("Converta centímetros em polegadas: \n");
    scanf("%f", &centimetros);
    polegadas = centimetros / 2.54;
    printf("%.1f cm em polegadas é: %.4f", centimetros, polegadas);

    // Ex 18 Converta um volume em m3 para litros
    float litros, m3;
    printf("Converta um volume em m3 para litros: \n");
    scanf("%f", &m3);
    litros = m3 * 1000;
    printf("%.2f m3 em litros dá %.2f L", m3, litros);

    // Ex 19 Converter litros em m3
    float litros, m3;
    printf("Converta um volume em litros para m3: \n");
    scanf("%f", &litros);
    m3 = litros / 1000;
    printf("%.2f litros em m3 dá %.3f L", litros, m3);
 */
    //Ex 20 Converta Kg para Libras
    float kg, lib;
    printf("Converta a quantida em Kg para Libras: \n");
    scanf("%f", &kg);
    lib = kg / 0.45359237;
    printf("%.2fKg em Libras dá: %.4fLb", kg, lib);
}
