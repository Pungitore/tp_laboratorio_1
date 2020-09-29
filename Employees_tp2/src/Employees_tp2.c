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
	int auxModificacion;
	int auxiliarId;

	//Contador ID de Employees
	int idEmployees;
	idEmployees = 0;

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
	        	if(emp_contadorEmployee(arrayEmployees,QTY_EMPLOYEES) > 0 &&
	        	  !emp_printEmployees(arrayEmployees,QTY_EMPLOYEES) &&
	        	  !utn_getNumberInt(&auxiliarId,"Por favor, ingrese el ID del cliente:\n","ID invalido\n",0,idEmployees,2) &&
	        	  emp_findEmployeeById(arrayEmployees,QTY_EMPLOYEES,auxiliarId) > -1 &&
	        	  !utn_getNumberInt(&auxModificacion,"Por favor, ingrese el campo que desea modificar: \n"
	        													"1.-Nombre.\n"
	        													"2.-Apellido.\n"
	        													"3.-Salario.\n"
	        													"4.-Sector.\n","Opcion invalida.\n",1,4,2) &&
	        	!emp_modifEmployee(arrayEmployees,QTY_EMPLOYEES,auxiliarId,auxModificacion))
	        	{
	        		printf("Modificacion exitosa.\n");
	        	}
	        	else
	        	{
	        	  printf("NO HAY EMPLEADOS CARGADOS!!!\n");
	        	}
	        break;
	        case 3:
				if(	emp_contadorEmployee(arrayEmployees,QTY_EMPLOYEES) > 0 &&
					!emp_printEmployees(arrayEmployees,QTY_EMPLOYEES) &&
					!utn_getNumberInt(&auxiliarId,"Ingrese el ID del cliente a dar de baja:\n","ID invalido\n",0,idEmployees,2) &&
					emp_findEmployeeById(arrayEmployees,QTY_EMPLOYEES,auxiliarId) > -1 &&
					!emp_removeEmployee(arrayEmployees,QTY_EMPLOYEES,auxiliarId))
				{
					printf("Baja de exitosa.\n");
				}
				else
				{
					printf("NO HAY EMPLEADOS CARGADOS!!!\n");
				}
				break;
	        	}
	 	 	 }while(opcionMenu != 5);




	return EXIT_SUCCESS;
}


