#include <stdio.h>

// Protótipo de função
int soma(int num1, int num2);
void mensagem();

int main(){
    int n1, n2, ret;
    printf("Informe o número 01: \n");
    scanf("%d", &n1);

    printf("Informe o número 02: \n");
    scanf("%d", &n2);

    ret = soma(n1, n2);
    printf("A soma de %d com %d é: %d\n", n1, n2, ret);

    mensagem();
    return 0;
}

int soma(int num1, int num2) {
    int res = num1 + num2;
    return res;
}

void mensagem(){
    printf("Bem vindo.\n");
}