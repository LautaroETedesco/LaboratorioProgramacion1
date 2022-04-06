/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-2:
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

 */

#include <stdio.h>
#include <stdlib.h>
int esPar(int nro);

int main(void) {

	int numero=1;
	int retorno;
	setbuf(stdout,NULL);

	retorno = esPar(numero);

	if(retorno==1)
	{
		printf("El numero es par");
	}
	else
	{
		printf("El numero es impar");
	}




	return EXIT_SUCCESS;
}


int esPar(int nro)
{
	int retorno=0;
	if (nro % 2 == 0)
	{
		retorno=1;
	}

	return retorno;
}
