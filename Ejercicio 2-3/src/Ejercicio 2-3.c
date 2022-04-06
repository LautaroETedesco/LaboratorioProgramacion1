/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona
 debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {



		int nroCliente;
		char respuesta;
		char estadoCivil;
		int edad;
		float temperatura;
		char genero;
		int contadorPasajeros=0;
		int contadorViudoViejo=0;
		int edadSolteraJoven;
		int banderaSoltera=1;
		int nroClienteSolteraJoven='0';
		float totalDelViaje;
		int mitadDePasajeros;
		int contadorViejos=0;
		float descuento;
		float precioConDescuento;

		setbuf(stdout,NULL);


		do
		{

			printf("\nIngrese su numero de cliente");
			fflush(stdin);
			scanf("%d",&nroCliente);

			printf("\nIngrese su estado civil s(soltero)/c(casado)/v(viudo)");
			fflush(stdin);
			scanf("%c",&estadoCivil);

			if(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v')
			{
				printf("\nerror, Ingrese estado civil nuevamente");
				fflush(stdin);
				scanf("%c",&estadoCivil);

			}


			printf("\nIngrese su edad");
			fflush(stdin);
			scanf("%d",&edad);

			if(edad<17)
			{
				printf("\nError, ingrese la edad nuevamente(Mayor a 17)");
				fflush(stdin);
				scanf("%d",&edad);

			}


			printf("\nIngrese su temperatura corporal");
			fflush(stdin);
			scanf("%f",&temperatura);

			if(temperatura>43 || temperatura<30)
			{
				printf("Ingrese una temperatura validad (Entre 30 y 43)");
				fflush(stdin);
				scanf("%f",&temperatura);
			}

			printf("\nIngrese su genero f(femenino)/m(masculino)/o(no binario)");
			fflush(stdin);
			scanf("%c",&genero);

			if(genero!='f'&& genero!='m' && genero!='o')
			{
				printf("\nError, Ingrese su genero f(femenino)/m(masculino)/o(no binario)");
				fflush(stdin);
				scanf("%c",&genero);
			}

			printf("\nDesea continuar? s o n");
			fflush(stdin);
			scanf("%c",&respuesta);

			if(respuesta!='s' && respuesta!='n')
			{
			printf("\nError, Ingrese una opcion valida s o n");
			fflush(stdin);
			scanf("%c",&respuesta);
			}

			contadorPasajeros=contadorPasajeros+1;


			if(edad>=60)
			{
				contadorViejos=contadorViejos+1;
				if(estadoCivil=='v')
				{
					contadorViudoViejo=contadorViudoViejo+1;
				}

			}
			else
			{
				if(estadoCivil=='s' && genero=='f' && banderaSoltera==1)
				{
					edadSolteraJoven=edad;
					nroClienteSolteraJoven=nroCliente;
					banderaSoltera=0;
				}
				else
				{
					if(estadoCivil=='s' && genero=='f' && edadSolteraJoven>edad)
					{
						edadSolteraJoven=edad;
						nroClienteSolteraJoven=nroCliente;
					}
				}
			}

		}while(respuesta=='s');

		totalDelViaje=600*contadorPasajeros;
		mitadDePasajeros=contadorPasajeros/2;


		printf("La cantidad de Viudos mayores de 60 es %d\n",contadorViudoViejo);
		printf("La edad de la mujer soltera mas joven es %d y su numero de cliente es %d\n",edadSolteraJoven,nroClienteSolteraJoven);
		printf("El precio del viaje total sin descuento es $ (%.2f)\n",totalDelViaje);

		if(mitadDePasajeros<contadorViejos)
		{
			descuento=(totalDelViaje*25)/100;
			precioConDescuento=totalDelViaje-descuento;

		printf("El precio total con descuento es $ (%.2f)\n",precioConDescuento);

		}

		return EXIT_SUCCESS;
}
