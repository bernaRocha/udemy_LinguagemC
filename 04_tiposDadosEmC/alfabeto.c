#include <stdio.h>

int main(){

    for(int i = 33; i <= 126; i++){
        char letra = i;
        printf("%d - %c\n", i, letra);
    }
    
    return 0;
}