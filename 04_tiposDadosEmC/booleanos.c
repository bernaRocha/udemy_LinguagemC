#include <stdio.h>
#include <stdbool.h> 

int main(){
    bool a = true;
    bool b = false;

    if(a){
        printf("It is true\n");
    } else {
        printf("It is false\n");
    }

    printf("Verdadeiro = %d\n", a);
    printf("Falso = %d\n", b);
    printf("Verdadeiro e falso dá = %d\n", a&&b);
    // && (AND): takes 2 booleans; returns true only if both operands are true else false
    printf("Verdadeiro ou falso dá = %d\n", a||b);
    // || (OR): returns true if either or both of the operands are true else false
    printf("Negação de falso dá = %d\n", !b);
    // ! (NOT): takes 1 operand; return true if operand is false and false if operand is true

    return 0;
}