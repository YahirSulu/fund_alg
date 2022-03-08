#include <stdio.h>

int edad = 3;
int* miguel;


int main(){
    miguel = &edad;
    printf("dato: %p\n", &miguel);
    printf("dato: %p\n", &edad);
    printf("dato: %p\n", miguel);
    printf("dato: %d\n", *miguel);

    return 0;
}