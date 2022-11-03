#include <stdio.h>

int main(){

    int valores[5];

    for(int i = 0; i < 5; i++) {
        printf("Informe o %d/5 valor: ", (i + 1));
        scanf("%d", &valores[i]);
    }

    printf("Os valores informados são: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
    }

    printf("Endereço do primeiro item: %p\n", &valores[0]);
    printf("Endereço do vetor: %p\n", valores);
    return 0;
}