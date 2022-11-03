#include <stdio.h>
/**
 * int = 4 bytes 
 * bit 0 / 1
 * byte 0000 0001
 * 
 */
int main(){
    int valores[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes.\n", valores[i], sizeof(valores[i]));
    }

    printf("O array valores tem o tamanho %ld bytes.\n", sizeof(valores));
    printf("Valores[0] vale: %d e o ednereço de memória é %p\n", valores[0], valores[0]);
    printf("*(valores) vale %d e o endereço de memória é %p\n", *(valores), *(valores));

    printf("Valores[1] vale: %d e o ednereço de memória é %p\n", valores[1], valores[1]);
    printf("Valores[2] vale: %d e o ednereço de memória é %p\n", valores[2], valores[2]);
    printf("Valores[3] vale: %d e o ednereço de memória é %p\n", valores[3], valores[3]);
    printf("Valores[4] vale: %d e o ednereço de memória é %p\n", valores[4], valores[4]);
    return 0;
}
