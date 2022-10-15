#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int digito;
    int soma = 0;

    printf("Digite um número maior que 0 e com mais de 1 algarismo: \n");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10;  // encontra o último digito
        soma = soma + digito;  // adiciona na variável soma
        numero = numero / 10;
    }
    

    printf("A soma dos algarismo digitados são: %d\n", soma);
    return 0;
}