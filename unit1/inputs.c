#include <stdio.h>

int num1; //Declarando mi variable
int num2; 

int main(){
    //Imprimir mensaje//
    printf("Enter number1,\n\tnum1: ");
    //* Inputs *//
    scanf("%d", &num1); //Inputs Keyboard
    printf("Enter number2,\n\tnum2: "); //Output Screen
    scanf("%d", &num2);
    //*Procesos*//
    int sum = num1 + num2;
    printf(" suma = %d\n", sum);
    return 0;
}