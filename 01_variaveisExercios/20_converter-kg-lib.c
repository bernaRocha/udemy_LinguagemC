#include <stdio.h>

int main(){
    //Ex 20 Converta Kg para Libras
    float kg, lib;
    printf("Converta a quantida em Kg para Libras: \n");
    scanf("%f", &kg);

    lib = kg / 0.45359237;

    printf("%.2f Kg em Libras é: %.4fLb\n", kg, lib);
    return 0;
}