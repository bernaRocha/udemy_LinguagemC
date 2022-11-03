#include <stdio.h>

int main(){
    int n; // var que guarda o valor na memória

    int* p; //ponteiro, valor que aponta para um endereço de memória

    p = &n;

    printf("Informe um número n: \n");
    scanf("%d", &n);

    printf("O número informado foi %d\n", n);
    
    printf("O endereço de memória de n[%d]: %d\n", n, &n);
    
    printf("O endereço do ponteiro p: %p\n", p);
    
    return 0;
}