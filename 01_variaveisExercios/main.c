#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

/*    printf("Ex1, pedir um número inteiro e imprimir.\n");
    int inteiro;
    printf("Digite um número inteiro: \n");

    scanf("%d", &inteiro);
    printf("O número digitado foi: %d\n", inteiro);
*/
    //Ex2 Digitar 3 valor e imprimir a soma
    int num1, num2, num3, total;
    total = num1 + num2 + num3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    scanf("%d", &total);

    printf("A soma dos três números digitados é: %d\n", total);

    return 0;
}
