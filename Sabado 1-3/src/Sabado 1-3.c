/*
 ============================================================================
 Name        : Sabado.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-3:
 Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de la UTN FRA, los datos solicitados son:
 Legajo
 Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
 Cantidad de materias( mas de cero y menos de 8)
 Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
 Nota promedio (entre 0 y 10)
 Edad (validar)
 Se debe informar de existir, o informar que no existe , en el caso que corresponda.
 a) El Legajo del mejor promedio femenino.
 b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
 c) El promedio de nota por sexo.
 d) La edad y legajo del que cursa más materias. (Sin importar su género)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char respuesta;
	int legajo;
	char cursada;
	int materias;
	char sexo;
	int notaPromedio;
	int edad;
	int legajoMejorFemenino;
	int promedioMejorFemenino;
	int banderaMejorFemenino=1;
	int legajoJovenMasculinoLibre;
	int banderaMasculinoMasJoven=1;
	int edadMasculinoMasJoven;
	int promedioNotaMasculino;
	int promedioNotaFemenino;
	int promedioNotaNoBinario;
	int contadorMasculino=0;
	int contadorFemenino=0;
	int contadorNoBinario=0;
	int acumuladorMasculino=0;
	int acumuladorFemenino=0;
	int acumuladorNoBinario=0;
	int edadMasCursa;
	int legajoMasCursa;
	int banderaMasCursa=1;
	int mayorCantidadMaterias;


	setbuf(stdout,NULL);

	do{
	printf("\nIngrese el numero de legajo");
	scanf("%d",&legajo);

	printf("\nIngrese el tipo de cursada Libre(l)/Presencial(p)/Remota(r)");
	fflush(stdin);
	scanf("%c",&cursada);
	if(cursada!='l' && cursada!='p'&& cursada!='r')
	{
		printf("\nError,Ingrese el tipo de cursada Libre(l)/Presencial(p)/Remota(r)");
		fflush(stdin);
		scanf("%c",&cursada);
	}

	printf("\ningrese la cantidad de materias a cursar 1 a 8");
	scanf("%d",&materias);
	if(materias<1 || materias>8)
	{
		printf("\nError,Ingrese la cantidad de materias a cursar 1 a 8");
		scanf("%d",&materias);
	}

	printf("\nIngrese el sexo del estudiante Masculino(m)/Femenino(f)/No binario(o)");
	fflush(stdin);
	scanf("%c",&sexo);

	if(sexo!='m' && sexo!='f' && sexo!='o')
	{
		printf("\nError,Ingrese el sexo del estudiante Masculino(m)/Femenino(f)/No binario(o)");
		fflush(stdin);
		scanf("%c",&sexo);
	}

	printf("\nIngrese la nota promedio entre 0 y 10");
	scanf("%d",&notaPromedio);

	if(notaPromedio<0 || notaPromedio>10)
	{
		printf("\nError,Ingrese la nota promedio entre 0 y 10");
		scanf("%d",&notaPromedio);
	}

	printf("Ingrese la edad del estudiante entre 18 y 99");
	scanf("%d",&edad);

	if(edad<18 || edad>99)
	{
		printf("\nError,Ingrese la edad del estudiante entre 18 y 99");
		scanf("%d",&edad);
	}

	printf("\nDesea seguir ingresando estudiantes");
	fflush(stdin);
	scanf("%c",&respuesta);

	if(respuesta!='s' && respuesta!='n')
	{
		printf("\nError,Desea seguir ingresando estudiantes s o n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}


	if(banderaMejorFemenino==1 && sexo=='f')
	{
		banderaMejorFemenino=0;
		legajoMejorFemenino=legajo;
		promedioMejorFemenino=notaPromedio;
	}
	else
	{
		if(sexo=='f' && promedioMejorFemenino<notaPromedio)
		{
			legajoMejorFemenino=legajo;
			promedioMejorFemenino=notaPromedio;
		}
	}

	if(banderaMasculinoMasJoven==1 && sexo=='m' && cursada=='l')
	{
		banderaMasculinoMasJoven=0;
		legajoJovenMasculinoLibre=legajo;
		edadMasculinoMasJoven=edad;

	}
	else
	{
		if(sexo=='m' && edadMasculinoMasJoven>edad && cursada=='l')
		{
			legajoJovenMasculinoLibre=legajo;
			edadMasculinoMasJoven=edad;

		}
	}

	if(sexo=='m')
	{
		contadorMasculino=contadorMasculino+1;
		acumuladorMasculino=acumuladorMasculino+notaPromedio;
	}
	else
	{
		if(sexo=='f')
		{
			contadorFemenino=contadorFemenino+1;
			acumuladorFemenino=acumuladorFemenino+notaPromedio;
		}
		else
		{
			contadorNoBinario=contadorNoBinario+1;
			acumuladorNoBinario=acumuladorNoBinario+notaPromedio;
		}
	}

	if(banderaMasCursa==1)
	{
		banderaMasCursa=0;
		edadMasCursa=edad;
		legajoMasCursa=legajo;
		mayorCantidadMaterias=materias;
	}
	else
	{
		if(mayorCantidadMaterias<materias)
		{
			edadMasCursa=edad;
			legajoMasCursa=legajo;
			mayorCantidadMaterias=materias;
		}
	}

	}while(respuesta=='s');





	if(banderaMejorFemenino==1)
	{printf("\nEl legajo del mejor promedio femenino no existe");
	}
	else
	{
		printf("\nEl legajo del mejor promedio femenino es el numero %d",legajoMejorFemenino);
	}

	if(banderaMasculinoMasJoven==1)
	{
		printf("\nEl legajo del masculino mas joven que cursa libre no existe");
	}
	else
	{
		printf("\nEl legajo del masculino mas joven que cursa libre es el numero %d",legajoJovenMasculinoLibre);
	}

	if(contadorMasculino>0)
	{
		promedioNotaMasculino=acumuladorMasculino/contadorMasculino;
		printf("\nEl promedio de nota de las personas de sexo masculino es %d ",promedioNotaMasculino);
	}
	else
	{
		printf("\nEl promedio de nota de las personas de sexo masculino no existe");
	}

	if(contadorFemenino>0)
	{
		promedioNotaFemenino=acumuladorFemenino/contadorFemenino;
		printf("\nEl promedio de nota de las personas de sexo femenino es %d ",promedioNotaFemenino);
	}
	else
	{
		printf("\nEl promedio de nota de las personas de sexo femenino no existe");
	}

	if(contadorNoBinario>0)
	{
		promedioNotaNoBinario=acumuladorNoBinario/contadorNoBinario;
		printf("\nEl promedio de nota de las personas de sexo no binario es %d",promedioNotaNoBinario);
	}
	else
	{
		printf("\nEl promedio de nota de las personas de sexo no binario no existe");
	}


	printf("\nLa edad del estudiante que mas cursa es %d y el legajo es el %d",edadMasCursa,legajoMasCursa);

	return EXIT_SUCCESS;
}
