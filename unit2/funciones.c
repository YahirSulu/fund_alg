#include <stdio.h>

//Prototipo//
//Funcion por valor
int sumaNumbers(int number1, int number2);

void modificarVariables(int a, int b) {
    a = a*2;
    b = b*2;
    printf("localVariables Arguments:::: a: %d, b = %d\n", a, b);
    return;
}

// Funcion por valor //
void mmodificarVariablesAddress(int* variable1, int* variable2) {
    *variable1 = variable1 * 2;
    *variable2 = variable2 * 2;
    return;
}

int a = 10;
int b = 20;

int main (int argc, char**argv){
    //Llamando la funcion
    int mySum = sumaNumbers(2, 4);
    printf("sum 10 + 20 = %d\n",sumaNumbers(10, 20));
    //Modificar variables
    printf("a: %d, b = %d\n", a, b);
    modificarVariables(a, b);
    printf("a: %d, b = %d\n", a, b);
}

//Definir la funcion
int sumaNumbers(int number1, int number2){
    //Variables locales
    int suma = 0;
    suma = number1 + number2;
    return suma;
}