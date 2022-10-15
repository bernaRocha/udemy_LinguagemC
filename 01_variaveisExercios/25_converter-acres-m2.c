#include <stdio.h>

int main(){
    // Ex 25 Converta uma área em acres para m2
    float m2, acres;

    printf("Converta uma medida em acres para m2: \n");
    scanf("%f", &acres);

    m2 = acres / 0.00024711;

    printf("A área de %.1f acres em m2 são: %.2f m2 \n", acres, m2);
    return 0;
}