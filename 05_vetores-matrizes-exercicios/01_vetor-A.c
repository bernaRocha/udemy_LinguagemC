#include <stdio.h>

int main(){
    char A[6];
    A[0] = 1; A[1] = 0;
    A[2] = 5; A[3] = -2;
    A[4] = -5; A[5] = 7;

    int somatorio = A[0] + A[1] + A[5];
    printf("O somatório de A[0] + A[1] + A[5] é: %d\n\n", somatorio);

    A[4] = 100;

    for(int i = 0; i < 5; i++) {
        printf("Matriz A[%i] = %d\n", i, A[i]);
    }
    return 0;
}