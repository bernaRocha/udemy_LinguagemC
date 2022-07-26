#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Estrutura repetição while
    int numero, soma = 0;

    //entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    //primeiro checa o dado antes de processar
    while(numero != 0) {
        soma += numero;
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);

    }
    printf("A soma é %d", soma);
    return 0;
}
