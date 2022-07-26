#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variáveis
    int numero, soma = 0;

    for(int i = 0; i < 5; i++) {
        //entrada
        printf("Informe um número: ");
        scanf("%d", &numero);

        //processamento
        soma += numero;
    }

    //saída
    printf("A soma é %d", soma);

    return 0;
}
