/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 Ejemplo:
 1   5   3     el 3 es del medio
 5   1   5     no hay numero del medio
 3   5   1     el 3 es del medio
 3   1   5     el 3 es del medio
 5   3   1     el 3 es del medio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{


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

    if(numeroUno>numeroDos && numeroUno<numeroTres)
    {
        printf("El %d es el numero del medio",numeroUno);
    }
    else
    {
        if(numeroUno<numeroDos && numeroUno>numeroTres)
        {
            printf("El %d es el numero del medio",numeroUno);
        }
        else
        {
            if(numeroDos>numeroUno && numeroDos<numeroTres)
            {
                printf("El %d es el numero del medio",numeroDos);
            }
            else
            {
                if(numeroDos<numeroUno && numeroDos>numeroTres)
                {
                    printf("El %d es el numero del medio",numeroDos);
                }
                else
                {
                    if(numeroTres<numeroUno && numeroTres>numeroDos)
                    {
                        printf("el %d es el numero del medio",numeroTres);
                    }
                    else
                    {
                        if(numeroTres>numeroUno && numeroTres<numeroDos)
                        {
                            printf("el %d es el numero del medio",numeroTres);
                        }
                        else
                        {
                            printf("No hay numero del medio");
                        }
                    }
                }
            }
        }
    }



	return EXIT_SUCCESS;
}
