/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.
 Ejemplo:
 Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	{
		setbuf(stdout,NULL);
		fflush(stdin);

	    int numeroUno;
		int numeroDos;
		int resultadoSuma;

		printf("Ingrese un numero: \n");
		scanf("%d",&numeroUno);

		printf("Ingrese otro numero \n");
		scanf("%d",&numeroDos);
		printf("PRINT DE PRUEBA");

	    resultadoSuma=numeroUno + numeroDos;

		printf("La suma entre %d y %d da como resultado %d\n",numeroUno, numeroDos, resultadoSuma);
	}
	return EXIT_SUCCESS;
}
