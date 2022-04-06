/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones. (Apunta a que entiendan el concepto de independencia del código)
 int Sumar1(int, int);
 int Sumar2(void);
 void  Sumar3(int, int);
 void Sumar4(void);

 */

#include <stdio.h>
#include <stdlib.h>
int Sumar1(int nro1,int nro2);
int Sumar2(void);
void  Sumar3(int nro1,int nro2);
void Sumar4(void);

int main(void) {
	int nro1;
	int nro2;
	int resultado1;
	int resultado2;

	setbuf(stdout,NULL);

	printf("\nIngrese el primer numero");
	scanf("%d",&nro1);
	printf("\nIngrese el segundo numero");
	scanf("%d",&nro2);

	resultado1=Sumar1(nro1,nro2);
	resultado2=Sumar2();
	Sumar3(nro1,nro2);
	Sumar4();

	printf("\nEl resultado de la Suma 1 es %d",resultado1);
	printf("\nEl resultado de la suma 2 es %d",resultado2);

	return EXIT_SUCCESS;
}

int Sumar1(int nro1,int nro2)
{
	int resultado;

	resultado = nro1+nro2;
	return resultado;
}
int Sumar2(void)
{
	int nro1;
	int nro2;
	int resultado;

	printf("\nIngrese el primer numero");
	fflush(stdin);
	scanf("%d",&nro1);

	printf("\nIngrese el segundo numero");
	fflush(stdin);
	scanf("%d",&nro2);

	resultado = nro1+nro2;
	return resultado;
}
void  Sumar3(int nro1,int nro2)
{
	int resultado;

	resultado=nro1+nro2;

	printf("\nEl resultado de la suma 3 es %d",resultado);
}
void Sumar4(void)
{
	int nro1;
	int nro2;
	int resultado;

	printf("\nIngrese un numero");
	fflush(stdin);
	scanf("%d",&nro1);

	printf("\nIngrese otro numero");
	fflush(stdin);
	scanf("%d",&nro2);

	resultado = nro1+nro2;

	printf("\nEl resultado de la suma 4 es %d",resultado);
}
