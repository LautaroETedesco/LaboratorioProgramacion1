/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 1-2: ingresar 3 n�meros y mostrar cu�l de los tres es el mayor.
 Ejemplo:
 Si ingresamos 5, 9 y 3 el programa mostrar�: �El mayor de los n�meros es el segundo�

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numeroUno;
    int numeroDos;
    int numeroTres;

    setbuf(stdout,NULL);
    fflush(stdin);

    printf("Ingrese el primer numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&numeroDos);

    printf("ingrese el tercer numero: ");
    scanf("%d",&numeroTres);

    if(numeroUno>numeroDos && numeroUno>numeroTres)
    {
        printf("El primer numero ingresado es el mayor");
    }
    else
    {
        if(numeroDos>numeroUno && numeroDos>numeroTres)
        {
            printf("El segundo numero ingresado es el mayor");
        }
        else
        {
            printf("El tercer numero ingresado es el mayor");
        }
    }

    return 0;
}
