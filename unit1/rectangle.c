#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float altura, area, base, perimetro;
    printf ("Ingresa el valor de altura: ");
    scanf ("%f", &altura);
    (void) getchar ();
    printf ("Ingresa el valor de base: ");
    scanf ("%f", &base);
    (void) getchar ();
    area=altura*base;
    perimetro=altura+base+altura+base;
    printf ("Valor de area: %g\n", area);
    printf ("Valor de perimetro: %g\n", perimetro);
    putchar ('\n');
    system ("pause");
    return 0;
}