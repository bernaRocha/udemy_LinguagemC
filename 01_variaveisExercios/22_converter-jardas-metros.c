#include <stdio.h>

int main(){
    // Ex 22 Converta jardas em metros
    float jardas, metros;

    printf("Converta a medida de jardas para metros: \n");
    scanf("%f", &jardas);

    metros = 0.9144 * jardas;

    printf("%.1f jardas em metros são: %.4f metros\n", jardas, metros);
    return 0;
}