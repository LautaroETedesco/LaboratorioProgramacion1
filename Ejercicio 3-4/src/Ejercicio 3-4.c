/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-4:
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.

 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 99
#define MIN 0
int pedirEntero(int min, int max);

int main(void) {

	int numero;
	setbuf(stdout,NULL);

	numero=pedirEntero(MIN,MAX);

	printf("El numero es %d",numero);
	return EXIT_SUCCESS;
}

int pedirEntero(int min, int max)
{
	int numero;

	printf("\nIngrese un numero entero");
	fflush(stdin);
	scanf("%d",&numero);
	if(numero>max || numero<min)
	{
		printf("\nError,Ingrese un numero entero");
		fflush(stdin);
		scanf("%d",&numero);
	}
	return numero;
}
