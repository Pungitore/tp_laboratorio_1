/*
 ============================================================================
 Name        : Employees_tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "ArrayEmployees.h"
#include "menu.h"

// \n

#define QTY_EMPLOYEES 1000

int main(void) {
	setbuf(stdout,NULL);

	eEmployee arrayEmployees[QTY_EMPLOYEES];
	int opcionMenu;
	int auxiliarIndiceVacio;

	//Contador ID de Employees
	int idEmployees = 0;

	 if(initEmployees(arrayEmployees,QTY_EMPLOYEES)==0){
		 printf("Array inicializado Correctamente.\n");
	 }

	 do{
	        opcionMenu = menu();

	        switch(opcionMenu){
	        case 1:
	        	auxiliarIndiceVacio = emp_getEmptyIndex(arrayEmployees,QTY_EMPLOYEES);
	        	if(auxiliarIndiceVacio >= 0)
	        		{
	        		if(emp_addEmployees(arrayEmployees,QTY_EMPLOYEES,auxiliarIndiceVacio,&idEmployees)==0)
	        		{
	        		printf("Carga realizada con exito.\n");
	        		}
	        		else
	        		{
	        		printf("No hay mas lugares libres!!!\n");
	        	    }
	        	}
	        break;
	        case 2:
	        	if(emp_contadorEmployee(arrayEmployees,QTY_EMPLOYEES)>0)
	        	{
	        		emp_printEmployees(arrayEmployees,QTY_EMPLOYEES);
	        	}
	        	else{
	        		printf("NO HAY EMPLEADOS CARGADOS!!!");
	        	}
	        break;
	        	}
	 	 	 }while(opcionMenu != 5);




	return EXIT_SUCCESS;
}


