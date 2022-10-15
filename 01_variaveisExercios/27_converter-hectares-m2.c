#include <stdio.h>

int main(){
    // Ex 27 Converter hectares em m2
    float m2, hectares;
    printf("Coverta a área de hectares para m2: \n");
    scanf("%f", &hectares);

    m2 = hectares * 10000;

    printf("%.1f hectares em m2 são: %.2f m2\n", hectares, m2);
    return 0;
}