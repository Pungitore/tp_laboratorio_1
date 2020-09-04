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

// \n

int main(void) {
	setbuf(stdout,NULL);

	int opcion;

	do{
	    printf("1. Ingrese Primer Operando.\n"
	    	   "2. Ingrese Segundo Operando.\n"
	    	   "3. Calcular Todas Las Operaciones.\n"
	    	   "4.Informar Resultados.\n"
	    	   "5.Salir.\n"
	    		);
	    printf("Ingrese una opción: \n");
		scanf("%d",&opcion);

		/*
	      switch(opcion){
	          case 1:
	          break;
	          case 2:
	          break;
	          case 3:
	          break;
	          case 4:
	          break;
	      }*/

	}while(opcion !=5);



	return EXIT_SUCCESS;
}
