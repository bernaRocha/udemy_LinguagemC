#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Estrutura repetição while
    int numero, soma = 0;

    //recebe ao menos uma vez o dado para ser processado
    do{
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);

        //processamento
        soma += numero;
    }
    while(numero != 0);

    printf("A soma é %d", soma);
    return 0;
}
