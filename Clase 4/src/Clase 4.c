/*
 ============================================================================
 Name        : Clase.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//int Sumar1(nro1,nro2); // PROTOTIPO DE UNA FUNCION
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nro1;
	printf("Ingrese un numero");
	scanf("%d",&nro1);
	printf("%f",&nro1);
	/*int nro2;
	int resultado;

	printf("Ingresar primer numero: ");
	scanf("%d",&nro1);

	printf("Ingresar segundo numero: ");
	printf("%d",&nro2);

	resultado = Sumar1(nro1,nro2);

	printf("El resultado de la suma es %d",resultado);
*/

	return EXIT_SUCCESS;
}


//Definicion de la funcion
/*int Sumar1(nro1, nro2)
{
	int resultado;
	//Llamada a la funcion
	resultado = nro1+nro2;

	return resultado;
}*/
