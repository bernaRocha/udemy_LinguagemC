#include <stdio.h>

int main(){
    // Ex 23 Converta metros para jardas
    float jardas, metros;

    printf("Converta a medida em metros para jardas: \n");
    scanf("%f", &metros);

    jardas = metros / 0.9144;

    printf("%.2f metros em jardas são: %.4f\n", metros, jardas);
    return 0;
}