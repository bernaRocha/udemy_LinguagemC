#include <stdio.h>
#include <stdlib.h>


/* Aula sobre variáveis \ */
int main()
{
    //Declarando
    int idade; // inteiro ] declarando
    idade = 0; // inicializando
    // Função para escrever algo entre as aspas
    printf("Hello world!\n");
    printf("Qual a sua idade? \n");

    //Receber dados, argumentos da entrada do teclado
    scanf("%d", &idade); //& do & dos ponteiros

    //Sa�da
    printf("Você tem %d anos.\n", idade);
    return 0;
}
