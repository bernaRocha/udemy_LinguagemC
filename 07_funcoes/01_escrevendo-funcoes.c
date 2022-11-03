#include <stdio.h>

void mensagem(){
    printf("Bem vindo.\n");
}

int soma(int num1, int num2) {
    int res = num1 + num2;
    return res;
}

void proximo_char(char caractere){
    printf("Próximo caractere em ASCII: %c\n", caractere+1);
}

int main(){

    printf("Olá....\n");

    mensagem();
    
    printf("Somatório: %d\n", soma(6, 9));
    
    char c = "105";
    proximo_char(c);
    
    return 0;
}