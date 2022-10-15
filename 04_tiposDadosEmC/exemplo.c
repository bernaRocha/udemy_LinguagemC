#include <stdio.h>

int main(){
    
    int numero_inteiro; //7, 45

    float media, nota_01, nota_02; // 1.6, 8.90
    double media_tambem; // suporta mais dados que um float

    printf('Qual a primeira nota? ');
    scanf("%f", &nota_01);

    printf('Qual a segunda nota? ');
    scanf("%f", &nota_02);

    media = (nota_01 + nota_02) / 2;

    printf("Sua média é %.2f", media);


    return 0;
}