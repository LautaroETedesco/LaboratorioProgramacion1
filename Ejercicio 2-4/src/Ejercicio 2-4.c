/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-4:
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 ============================================================================
Ejercicio 2-4

Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int main(void) {


	char caracter;
	int contador=0;
	int contadorDeP = 0;

	setbuf(stdout,NULL);

	while(contador<CANTIDAD)
	{
		printf("\nIngresar un caracter");
		fflush(stdin);
		scanf("%c",&caracter);
		contador=contador+1;
		if(caracter=='p')
		{
			contadorDeP=contadorDeP+1;
		}
	}
		printf("La cantidad de p ingresadas es %d",contadorDeP);


		return EXIT_SUCCESS;
}
