#include <stdio.h>

int main(){
    // Ex 26 Converter m2 para hectares
    float m2, hectares;
    printf("Coverta a área de m2 para hectáres: \n");
    scanf("%f", &m2);

    hectares = m2 * 0.0001;

    printf("A área de %.1f m2 convertida em hectares são: %.7f hectares\n", m2, hectares);
    return 0;
}