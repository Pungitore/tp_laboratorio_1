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
	int auxliarModificacionDeEmpleados;
	int auxiliarId;
	int auxiliarDeInformes;

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
	        	  !utn_getNumberInt(&auxiliarId,"Ingrese el ID del Empleado a modificar:\n","ID INVALIDO!!!\n",0,idEmployees,2) &&
	        	  emp_findEmployeeById(arrayEmployees,QTY_EMPLOYEES,auxiliarId) > -1 &&
	        	  !utn_getNumberInt(&auxliarModificacionDeEmpleados,"Ingrese el campo que desea modificar: \n"
	        													"6.Modificar Nombre.\n"
	        													"7.Modificar Apellido.\n"
	        													"8.Modificar Salario.\n"
	        													"9.Modificar Sector.\n","Opcion invalida.\n",6,9,5) &&
	        	!emp_modifEmployee(arrayEmployees,QTY_EMPLOYEES,auxiliarId,auxliarModificacionDeEmpleados))
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
					!utn_getNumberInt(&auxiliarId,"Ingrese el ID del empleado a dar de baja:\n","ID INVALIDO!!!\n",0,idEmployees,5) &&
					emp_findEmployeeById(arrayEmployees,QTY_EMPLOYEES,auxiliarId) > -1 &&
					!emp_removeEmployee(arrayEmployees,QTY_EMPLOYEES,auxiliarId))
				{
					printf("Baja de empleado exitosa.\n");
				}
				else
				{
					printf("NO HAY EMPLEADOS CARGADOS!!!\n");
				}
			break;
	        case 4:
	        	if(emp_contadorEmployee(arrayEmployees,QTY_EMPLOYEES) > 0 &&
	        	  !utn_getNumberInt(&auxiliarDeInformes,"Informes: \n"
	        				        							  "10.Listado de los empleados ordenados alfabéticamente por Apellido y Sector.\n"
	        				        							  "11.Listado del total de los salarios y los empleados que superan este promedio.\n","Opcion Invalida!",10,11,5))
	        	{
	        	if(auxiliarDeInformes == 10)
	        	{

	        	}
	        	else {
	        		if(auxiliarDeInformes == 11)
	        		{
	        			info_totalAndAverageSalaryEmployees(arrayEmployees,QTY_EMPLOYEES);
	        		}
	        	}
	        	}
	        	else{
	        		printf("NO HAY EMPLEADOS CARGADOS!!!\n");
	        	}
	        break;
	        	}
	 	 	 }while(opcionMenu != 5);




	return EXIT_SUCCESS;
}


