#include <stdio.h>

int main(){
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 3;
    numeros[1][0] = 5;
    numeros[1][1] = 7;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("números[%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }

    float valores[2][2], i, j;
    printf("Registre os valores da matriz [2][2]\n");

    // registra os valores
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("\nElemento[%d][%d] = ", (int)i, (int)j);
            scanf("%f", &valores[(int)i][(int)j]);
            fflush(stdin);
        }
    }   
    // imprime
    printf("\n------ Saída de dados ------\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("\nElemento[%d][%d] = %.1f", (int)i, (int)j, valores[(int)i][(int)j]);
            
        }
    } 
    printf("\n");
    return 0;
}