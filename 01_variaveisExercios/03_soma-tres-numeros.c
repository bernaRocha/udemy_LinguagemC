#include <stdio.h>

int main(){
    
    int num1, num2, num3, total;

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro número: \n");
    scanf("%d", &num3);

    total = num1 + num2 + num3;

    printf("A soma dos três números digitados é: %d\n", total);
    return 0;
}