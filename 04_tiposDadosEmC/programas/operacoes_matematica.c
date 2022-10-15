#include <stdio.h>
#include <math.h>

// gcc -o operacoes_matematica operacoes_matematica.c -lm
// ./operacoes_matematica 
int main(){
    printf("somar + \n");
    printf("subtrair - \n");
    printf("multiplicar * \n");
    printf("dividir / \n");
    printf("elevar ao quadrado x ** 2 \n");
    printf("módulo %% \n");
    
    int numero_01, numero_02, resultado;
    float rest_div;

    printf("Informe o número 1: ");
    scanf("%d", &numero_01);

    printf("Informe o número 2: ");
    scanf("%d", &numero_02);

    resultado = numero_01 + numero_02;
    printf("A soma é: %d\n", resultado);

    resultado = numero_01 - numero_02;
    printf("A subtração é: %d\n", resultado);

    resultado = numero_01 * numero_02;
    printf("A multiplicação é: %d\n", resultado);

    rest_div = (float)numero_01 / (float)numero_02;
    printf("A divisão é: %f\n", rest_div);

    resultado = numero_01 % numero_02;
    printf("O resto da divisão é: %d\n", resultado);

    resultado = pow(numero_01, numero_02);
    printf("A potenciação é: %d\n", resultado);

    printf(" \n");
    printf(" \n");
    return 0;
}