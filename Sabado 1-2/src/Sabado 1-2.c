/*
 ============================================================================
 Name        : Sabado.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-2:
 Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden fue ingresado.

 */

#include <stdio.h>
#include <stdlib.h>
#define INTENTOS 5

int main(void) {

	int numeroIngresado;
	int max;
	int min;
	int banderaMax=1;
	int banderaMin=1;
	int contadorPosicion=0;
	int posicionMax;
	int posicionMin;

	setbuf(stdout,NULL);


	while(contadorPosicion<INTENTOS)
	{
		printf("\nIngrese un numero entero");
		scanf("%d",&numeroIngresado);
		contadorPosicion=contadorPosicion+1;

		if(banderaMax==1)
		{
			max=numeroIngresado;
			banderaMax=0;
			posicionMax=contadorPosicion;

		}else
		{
			if(numeroIngresado>max)
			{
				max=numeroIngresado;
				posicionMax=contadorPosicion;
			}
		}

		if(banderaMin==1)
		{
			min=numeroIngresado;
			banderaMin=0;
			posicionMin=contadorPosicion;

		}else
		{
			if(numeroIngresado<min)
			{
				min=numeroIngresado;
				posicionMin=contadorPosicion;
			}
		}



	}

	printf("\nEl menor numero ingresado es %d y su posicion es %d",min,posicionMin);
	printf("\nEl mayor numero ingresado es %d y su posicion es %d",max,posicionMax);

	return EXIT_SUCCESS;
}
