/*
 ============================================================================
 Name        : Calculadora_tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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
	        	  printf("Operaciones Realizadas con Exito.\n\n");
	          break;
	          case 4:
	        	  mostrarResultadoSuma(A,B,resultadoSuma);
	        	  mostrarResultadoResta(A,B,resultadoResta);
	          break;
	      }

	}while(opcion !=5);



	return EXIT_SUCCESS;
}
