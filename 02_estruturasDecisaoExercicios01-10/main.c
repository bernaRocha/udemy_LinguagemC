#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
/*
    // Ex 01

    int num1, num2;
    printf("Registre o primeiro número: \n");
    scanf("%d", &num1);
    printf("Agora o segundo número: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O número maior é o %d", num1);
    } else {
        printf("O número maior é o %d", num2);
    }

    // Ex 02
    int num1;
    float raiz;

    printf("Registre um número parao o cálculo da raiz: \n");
    scanf("%d", &num1);

    if(num1 > 0) {
        raiz = sqrt(num1);
        printf("A raiz quadrada de %d é %.2f", num1, raiz);
    } else {
        printf("Número inválido por ser negativo");
    }

    // Ex 03

    int num1, quadrado;
    float raiz;

    printf("Registre o número para o cálculo: \n");
    scanf("%d", &num1);

    if (num1 > 0) {
        raiz = sqrt(num1);
        printf("O número %d é positivo, sua raiz é: %.4f", num1, raiz);
    } else {
        quadrado = num1 * num1;
        printf("O número %d é negativo, o quadrado dele é: %d", num1, quadrado);
    }

    // Ex 04
    int num1, quadrado;
    float raiz;

    printf("Registre o número para os cálculos: \n");
    scanf("%d", &num1);

    if (num1 > 0) {
        quadrado = num1 * num1;
        raiz = sqrt(num1);
        printf("O quadrado de %d é %d\n", num1, quadrado);
        printf("A raiz de %d é %.7f", num1, raiz);
    }

    // Ex 05
    int numero;
    printf("Registre o número para verificação: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.", numero);
    } else {
        printf("O número %d é ímpar.", numero);
    }

    // Ex 06
    int num1, num2, diferenca;
    printf("Registre dois números: \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("%d é maior que %d \n", num1, num2);
        diferenca = num1 - num2;
        printf("A diferença entre eles é: %d", diferenca);
    } else {
        printf("%d é maior que %d \n", num2, num1);
        diferenca = num2 - num1;
        printf("A diferença entre eles é: %d", diferenca);
    }

    // Ex 07
    int num1, num2;
    printf("Registre dois números para comparação: \n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        printf("O número maior é o %d", num1);
    } else if (num2 > num1) {
        printf("O número maior é o %d", num2);
    } else {
        printf("Números iguais. (%d)", num1);
    }

    // Ex 08

    float nota1, nota2, media;


    printf("Digite a primeira nota do aluno: \n");
    fflush( stdout );
    scanf("%f",&nota1);


    printf("Digite a segunda nota do aluno: \n");
    fflush( stdout );
    scanf("%f",&nota2);

    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
        media = (nota1 + nota2) / 2;
        printf("A média do aluno é %.2f", media);
    } else if (nota1 || nota2 > 10 && nota1 || nota2 < 0) {
        printf("Números inválidos, por favor tente novamente.");
    }

    // Ex 09
    float salario, totalEmprestimo, prestacaoEmprestimo;
    printf("Registre  seu salário. \n");
    fflush( stdout );
    scanf("%f", &salario);

    printf("Quanto deseja de emprestimo para que seja pago em 12 vezes? \n");
    fflush( stdout );
    scanf("%f", &totalEmprestimo);

    prestacaoEmprestimo = totalEmprestimo  / 12;

    if(prestacaoEmprestimo > (0.2 * salario)) {
        printf("O empréstimo não pode ser condedido.");
    }
    else {
        printf("Empréstimo aprovado.");
    }

*/
    //Ex 10
    char genero;
    float altura, pesoIdeal;

    printf("Verifique aqui seu peso ideal. \n");
    printf("Informe seu gênero [M/m ou F/f]: \n");
    scanf("%c", &genero);

    printf("Informe sua altura. \n");
    getchar();
    scanf("%f", &altura);

    if(genero == 'M' || genero == 'm'){
        pesoIdeal = (72.7 * altura) - 58.0;
        printf("Sendo homem seu peso ideal tendo %.2f de altura é %.2fKg.", altura, pesoIdeal);
    }
    else if(genero == 'F' || genero == 'f'){
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Sendo mulher seu peso ideal tendo %.2f de altura é %.2fKg.", altura, pesoIdeal);
    }

    return 0;
}
