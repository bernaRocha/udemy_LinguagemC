#include<stdio.h>

int main(){

    char opcao; // um caractere apenas
    printf("Informe uma opção: \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");
    scanf("%c", &opcao);

    if(opcao == 'a'){
        printf("Seu saldo é = ");
    }else if(opcao == 'b'){
        printf('Extrato da conta = ');
    }else if (opcao == 'c'){
        printf('Seu limite é = ');
    }else {
        printf('Opção inválida');
    }


    return 0;
}