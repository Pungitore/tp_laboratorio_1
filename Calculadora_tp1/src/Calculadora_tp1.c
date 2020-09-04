/*
 ============================================================================
 Name        : Calculadora_tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "informes.h"
// \n

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	float A;
	float B;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;

	do{
	    printf("\n1.Ingrese Primer Operando."
	    	   "\n2.Ingrese Segundo Operando."
	    	   "\n3.Calcular Todas Las Operaciones."
	    	   "\n4.Informar Resultados."
	    	   "\n5.Salir.\n"
	    		);
	    printf("\nIngrese una opcion: ");
		scanf("%d",&opcion);


	      switch(opcion){
	          case 1:
	        	  A = getFloat("Ingrese el Primer Operando: ");
	          break;
	          case 2:
	        	  B = getFloat("Ingrese el Segundo Operando: ");
	          break;
	          case 3:
	        	  resultadoSuma = sumarNumeros(A,B);
	        	  resultadoResta = restarNumeros(A,B);
	        	  resultadoMultiplicacion = multiplicarNumeros(A,B);
	        	  printf("Operaciones Realizadas con Exito.\n");
	          break;
	          case 4:
	        	  mostrarResultadoSuma(A,B,resultadoSuma);
	        	  mostrarResultadoResta(A,B,resultadoResta);
	        	  mostrarResultadoMultiplicacion(A,B,resultadoMultiplicacion);
	          break;
	      }

	}while(opcion !=5);



	return EXIT_SUCCESS;
}
