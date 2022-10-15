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

    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !b);

    return 0;
}