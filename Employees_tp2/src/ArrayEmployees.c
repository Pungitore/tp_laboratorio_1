/*
 * ArrayEmployees.c
 *
 *  Created on: 27 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "ArrayEmployees.h"

int initEmployees(eEmployee list[], int len)
{
	int retorno = -1;
	int i;

	if(list!=NULL && len>0)
		{
			for(i=0;i<len;i++)
			{
				list[i].isEmpty = 1;
			}
			retorno = 0;
		}
	return retorno;
}

int emp_getEmptyIndex(eEmployee list[], int len)
{
	int retorno = -1;
	int i;
	if(list!=NULL && len>0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 1)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int emp_addEmployees(eEmployee* array,int len, int indice, int* id)
{
	int retorno = -1;
	eEmployee auxiliar;

	if(array != NULL && len > 0 && indice <= len)
	{
		if(	utn_getNameOrSurname(auxiliar.name, NAME_LEN, "Ingrese Nombre:\n", "Nombre invalido\n",3) == 0 &&
			utn_getNameOrSurname(auxiliar.lastName, LASTNAME_LEN, "Ingrese Apellido: \n", "Apellido invalido\n",3) == 0 &&
			utn_getNumberFloat(&auxiliar.salary,"Ingrese salario:\n","Salario  invalido\n",0,250000,3) == 0 &&
			utn_getNumberInt(&auxiliar.sector, "Ingrese sector: \n" , "Sector  invalido\n", 1, 10, 3) == 0)
		{
			retorno = 0;
			array[indice] = auxiliar;
			array[indice].isEmpty = 0;
			array[indice].id = *id;
			*id = *id + 1;
		}
	}
	return retorno;
}

int emp_contadorEmployee(eEmployee list[], int len)
{
	int i;
	int contadorEmpleados = 0;

	if(list != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				contadorEmpleados++;
			}
		}
	}
	return contadorEmpleados;
}

int emp_printEmployees(eEmployee list[], int len)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				printf("%s, %s - Salario: %.2f - Sector: %d - ID: %d\n",list[i].lastName,list[i].name,list[i].salary,list[i].sector,list[i].id);
			}
		}
		retorno = 0;
	}
	return retorno;
}

int emp_findEmployeeById(eEmployee list[], int len,int id)
{
	int retorno = -1;
	int i;

		if(list != NULL && len > 0 && id > -1)
		{
			for(i=0;i<len;i++)
			{
				if( list[i].id == id &&
					list[i].isEmpty == 0)
				{
					retorno = i;
					break;
				}
			}
		}
		return retorno;
}

int emp_modifEmployee(eEmployee list[], int len, int id, int option)
{
	int retorno = -1;
	int i;
	eEmployee auxiliarEmpleado;

	if(list != NULL && len > 0 && id >= 0 && option > 5 && option < 10)
	{
		for(i=0;i<len;i++)
		{
			if( list[i].id == id &&
				list[i].isEmpty == 0)
			{
				if( option == 6 &&
					!utn_getNameOrSurname(auxiliarEmpleado.name,NAME_LEN,"Ingrese un nombre: \n","Nombre invalido.\n",2))
				{
					retorno = 0;
					strncpy(list[i].name,auxiliarEmpleado.name,NAME_LEN);
					break;
				}
				else if( option == 7 &&
						 !utn_getNameOrSurname(auxiliarEmpleado.lastName,LASTNAME_LEN,"Ingrese un apellido: \n","Apellido invalido.\n",2))
				{
					retorno = 0;
					strncpy(list[i].lastName,auxiliarEmpleado.lastName,LASTNAME_LEN);
					break;
				}
				else if( option == 8 &&
						!utn_getNumberFloat(&auxiliarEmpleado.salary,"Ingrese un salario(Hasta 250.000): \n","Salario invalido.\n",0,500000,2))
				{
					retorno = 0;
					list[i].salary = auxiliarEmpleado.salary;
					break;
				}
				else if(option == 9 &&
						!utn_getNumberInt(&auxiliarEmpleado.sector,"Ingrese un sector de 1 a 10: \n","Sector invalido.\n",1,5,2))
				{
					retorno = 0;
					list[i].sector = auxiliarEmpleado.sector;
					break;
				}
			}
		}
	}
	return retorno;
}

int emp_removeEmployee(eEmployee list[], int len, int id)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0 && id >= 0)
	{
		for(i=0;i<len;i++)
		{
			if( list[i].id == id &&
				list[i].isEmpty == 0)
			{
				retorno = 0;
				list[i].isEmpty = 1;
				break;
			}
		}
	}
	return retorno;
}

int emp_totalSalariosYCantidadQueLoSupera(eEmployee list[], int len)
{
	int retorno = -1;
	int i;
	float acumuladorSalarios;
	int contadorEmployees;
	int contadorEmpleadosSalarioSuperior;
	float promedioSalarios;

	contadorEmployees = 0;
	acumuladorSalarios = 0;
	contadorEmpleadosSalarioSuperior = 0;

	if(list != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				acumuladorSalarios += list[i].salary;
				contadorEmployees++;
			}
		}

		if(contadorEmployees > 0)
		{
			promedioSalarios = acumuladorSalarios / (float)contadorEmployees;
		}

		for(i=0;i<len;i++)
		{
			if( list[i].isEmpty == 0 &&
				list[i].salary > promedioSalarios)
			{
				contadorEmpleadosSalarioSuperior++;
			}
		}
		retorno = 0;
	}

	printf("El total de los salarios es: %.2f - Y el promedio de los mismos es: %.2f\n",acumuladorSalarios,promedioSalarios);
	printf("La cantidad de empleados que superan el salario promedio es: %d\n",contadorEmpleadosSalarioSuperior);
	return retorno;
}


/** \brief Sort the elements in the array of employees, LastName and Sector
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [2] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int info_sortEmployees(eEmployee list[], int len, int order)
{

}
