/*
 ============================================================================
 Name        : Sabado.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-1:
 Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
 El promedio de los números positivos.
 El promedio de los números negativos.

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeroIngresado;
	char respuesta;
	int contadorPositivos=0;
	int contadorNegativos=0;
	int acumuladorPositivos=0;
	int acumuladorNegativos=0;
	int promedioPositivos;
	int promedioNegativos;

	setbuf(stdout,NULL);

	do
	{
		printf("\nIngrese un numero entero");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado>0)
		{
			contadorPositivos=contadorPositivos+1;
			acumuladorPositivos=acumuladorPositivos+numeroIngresado;

		}
		else
		{
			if(numeroIngresado<0)
			{
				contadorNegativos=contadorNegativos+1;
				acumuladorNegativos=acumuladorNegativos+numeroIngresado;

			}
		}

		printf("\nDesea seguir ingresando numeros s o n");
		fflush(stdin);
		scanf("%c",&respuesta);
		if(respuesta!='s' && respuesta!='n')
		{
			printf("\nError, ingrese una respuesta valida");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
	}while(respuesta=='s');


		promedioPositivos=acumuladorPositivos/contadorPositivos;
		promedioNegativos=acumuladorNegativos/contadorNegativos;


		printf("\nEl promedio de los numeros positivos ingresados es %d",promedioPositivos);
		printf("\nEl promedio de los numeros negativos ingresados es %d",promedioNegativos);


	return EXIT_SUCCESS;
}
