#include <stdio.h>
#include "sum.h"

//DataType integer, flotantes, string(cadenas de texto), caracteres
// cajitas que almacenan infor, para usarlas despues en codigo:
//Global variables//
int edad = 19;

int estatura = 1.75;
char* name = "Yahir Sulu";
char sexo = 'M';


int main(){
    int after10years = suma(edad, 10);
    printf("mi edad despues de 10 años: %d", after10years);
    printf("pi from the function: %f\n", pi);
    return 0;
}