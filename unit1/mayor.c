#include <stdio.h>

int main(int argc, char const *argv[])
{
	// Aquí almacenaremos los 3 números
	int numeros[3];

	for (int i = 0; i < 3; ++i)
	{
		printf("Por favor, ingresa el numero %d:\n", i + 1); // Sumar 1 porque empezamos desde 0
		scanf("%d", &numeros[i]);
	}

	//Suponemos que el mayor es el primer número
	int numeroMayor = numeros[0];

	// Comenzar desde el 1, porque estamos suponiendo que el 0 es el mayor
	for (int indice = 1; indice < 3; ++indice)
	{
		int numeroActual = numeros[indice];
		if (numeroActual > numeroMayor){		
			// Cambiar únicamente si el actual es mayor que numeroMayor
			numeroMayor = numeroActual;
		}
	}
	printf("De los 3 numeros que proporcionaste, el mayor es %d\n", numeroMayor);
	return 0;
}