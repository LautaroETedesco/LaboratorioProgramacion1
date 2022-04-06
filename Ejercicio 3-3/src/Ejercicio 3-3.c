/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-3:
 Crear una función que pida el ingreso de un entero y lo retorne.

 */

#include <stdio.h>
#include <stdlib.h>
int pedirEntero(void);

int main(void) {

	int numero;
	setbuf(stdout,NULL);

	numero=pedirEntero();

	printf("El numero es %d",numero);
	return EXIT_SUCCESS;
}

int pedirEntero(void)
{
	int numero;

	printf("\nIngrese un numero entero");

	scanf("%d",&numero);

	return numero;
}
