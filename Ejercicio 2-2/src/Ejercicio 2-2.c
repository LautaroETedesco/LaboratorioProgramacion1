/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 2-2:
 Ingresar 10 números enteros, distintos de cero. Mostrar:
 Cantidad de pares e impares.
 El menor número ingresado.
 De los pares el mayor número ingresado.
 Suma de los positivos.
 Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

		int numero;
		int contador=0;
		int contadorPares=0;
		int contadorInpares=0;
		int numeroChiquito=0;
		int banderaChiquito=0;
		int numeroParMayor=0;
		int resultadoSumaPositivos=0;
		float resultadoMultiplicacionNegativos=0;
		int banderaNegativos=0;

	 	setbuf(stdout,NULL);
    	fflush(stdin);




			while(contador<10)
			{
				printf("Ingrese un numero");
				scanf("%d",&numero);

				if(numero!=0)
				{
					if(numero %2==0)
					{
						contadorPares=contadorPares+1;
						if(numeroParMayor<numero)
						{
							numeroParMayor=numero;
						}
					}
					else
					{
						contadorInpares=contadorInpares+1;
					}

						if(numero>0)
						{
							resultadoSumaPositivos=resultadoSumaPositivos+numero;

						}
						else
						{
							if(banderaNegativos==0)
							{
								banderaNegativos=1,
								resultadoMultiplicacionNegativos=numero;
							}
							else
							{
								resultadoMultiplicacionNegativos=resultadoMultiplicacionNegativos * numero;
							}

						}

						contador=contador+1;

							if(numeroChiquito==0 && banderaChiquito==0)
							{

								numeroChiquito=numero;
								banderaChiquito=1;

							}
							else
							{
								if(numeroChiquito>numero)
								{
									numeroChiquito=numero;
								}
							}
				}

				else
				{
					printf("El numero ingresado no es distinto de 0\n");
				}
		}

		printf("La cantidad de numeros impares es %d y la cantidad de numeros pares es %d\n",contadorInpares,contadorPares);
		printf("El menor numero ingresado es el numero %d\n",numeroChiquito);
		printf("El mayor numero par ingresado es el numero %d\n",numeroParMayor);
		printf("La suma de los positivos da como resultado %d\n",resultadoSumaPositivos);
		printf("El producto de los numeros negativos da como resultado %.2f\n",resultadoMultiplicacionNegativos);




		return EXIT_SUCCESS;
}
