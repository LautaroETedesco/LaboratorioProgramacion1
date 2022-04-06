/*
 ============================================================================
 Name        : Clase.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Clase 1	 :"Introducción al lenguaje C Diferencias con JavaScript Presentación Eclipse"
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	fflush(stdin);

	int unNumero;
	float otroNumero;

	printf("Ingrese un numero: "); //Para imprimir un dato en la consola
	scanf("%d",&unNumero); //Para ingresar un dato por consola

	printf("Ingrese otro numero "); //
	scanf("%f",&otroNumero);

	printf("Su numero es %d y el otro numero es %f",unNumero, otroNumero); //Para imprimir un dato con numero en la consola



}
