#include <stdio.h>

int main(){
    // Ex 24 Converta m2 para acres
    float m2, acres;

    printf("Converta uma medida em m2 para acres: \n");
    scanf("%f", &m2);

    acres = m2 * 0.00024711;

    printf("A medida %.2f m2 em acres são: %.8f acres \n", m2, acres);
    return 0;
}