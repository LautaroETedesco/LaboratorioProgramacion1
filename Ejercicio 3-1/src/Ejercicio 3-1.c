/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

 ============================================================================
 Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

 */

#include <stdio.h>
#include <stdlib.h>
float mostrarFloat(float nro);

int main(void) {

	float numeroFlotante;

	setbuf(stdout,NULL);

		printf("Ingrese un flotante");
		fflush(stdin);
		scanf("%f",&numeroFlotante);

		mostrarFloat(numeroFlotante);



		return EXIT_SUCCESS;
}


float mostrarFloat(float nro)
{
	printf("%f",nro);

	return 0;
}
