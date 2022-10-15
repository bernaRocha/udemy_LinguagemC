#include <stdio.h>

int main(){
    // Ex 18 Converta um volume em m3 para litros
    float litros, m3;

    printf("Converta um volume em m3 para litros: \n");
    scanf("%f", &m3);

    litros = m3 * 1000;

    printf("%.2f m3 em litros é: %.2f L\n", m3, litros);
    return 0;
}