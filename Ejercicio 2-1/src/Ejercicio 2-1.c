/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 -1 - 2

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define INTENTOS 5

int main(void) {

		setbuf(stdout,NULL);
		fflush(stdin);

		int numero;
		int contador = 0;
		int resultado = 0;
		float resultadoPromedio = 0;

		while(contador<INTENTOS)
		{
			printf("Ingrese un numero");
			scanf("%d",&numero);
			resultado=resultado+numero;
			contador=contador+1;
		}

		resultadoPromedio=(float)resultado/contador;
		printf("El el promedio de los numeros ingresados es %.2f",resultadoPromedio);//El %.2f muestra solamente 2 decimales

		return EXIT_SUCCESS;
}
