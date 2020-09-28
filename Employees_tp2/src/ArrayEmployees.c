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

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
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



/**
 * \brief Busca la primer posición vacia en el array de empleados.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \return Retorna el indice de la posicion vacia si encontró uno y -1 si obtuvo algún error o no existen indices vacios.
 *
 */
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


/**
 * \brief Da de alta un empleado en una posicion del array
 * \param array Array de empleado a ser actualizado
 * \param limite Limite del array de empleados
 * \param len Posicion a ser actualizada
 * \param id Identificador asignado al empleado
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 *
 */
int emp_addEmployees(eEmployee* array,int len, int indice, int* id)
{
	int retorno = -1;
	eEmployee auxiliar;

	if(array != NULL && len > 0 && indice <= len)
	{
		if(	utn_getNameOrSurname(auxiliar.name, NAME_LEN, "Ingrese Nombre:\n", "Nombre invalido\n",2) == 0 &&
			utn_getNameOrSurname(auxiliar.lastName, LASTNAME_LEN, "Ingrese Apellido: \n", "Apellido invalido\n",2) == 0 &&
			utn_getNumberFloat(&auxiliar.salary,"Ingrese salario:\n","Salario  invalido\n",0,500000,2) == 0 &&
			utn_getNumberInt(&auxiliar.sector, "Ingrese sector: \n" , "Sector  invalido\n", 1, 5, 2) == 0)
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

/**
 * \brief Cuenta la cantidad de empleados existentes.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \return Retorna contador Retorna la cantidad de empleados encontrada y -1 si tuvo algún error.
 *
 */
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




/** \brief print the content of employees array.
 * \param list Employee*
 * \param len int
 * \return int
 *
 */
int emp_printEmployees(eEmployee list[], int len)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)//Valida que los datos de la funcion sean correctos.
	{
		for(i=0;i<len;i++)//Recorre el array para buscar empleados cargados.
		{
			if(list[i].isEmpty == 0)//Verifica que el indice se encuentre cargado.
			{
				printf("%s, %s - Salario: %.2f - Sector: %d - ID: %d\n",list[i].lastName,list[i].name,list[i].salary,list[i].sector,list[i].id);
			}
		}
		retorno = 0;
	}
	return retorno;
}

/** \brief find an Employee by Id en returns the index position in array.
*
* \param list Employee*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
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

/**
 * \brief Modifica los datos ingresados de un empleado por ID.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \param id Identificacion del cliente a modificar.
 * \param option para verificar que campo desea modificar. 6 = Nombre; 7 = Apellido; 8 = Salario; 9 = Sector.
 * \return Retorna 0 si modifico los datos del cliente correctamente y -1 si tuvo algún error.
 *
 */
int emp_modifEmployee(eEmployee list[], int len, int id, int option)
{
	int retorno = -1;
	int i;
	eEmployee auxiliarEmpleado;

	if(list != NULL && len > 0 && id > -1 && option > 5 && option < 10)//Valida que los datos de la funcion sean correctos.
	{
		for(i=0;i<len;i++)//Recorre el array para buscar el ID del empleado a modificar.
		{
			if( list[i].id == id &&
				list[i].isEmpty == 0)//Busca el id, indicado como dato en la funcion y verifica que este "cargado".
			{
				if( option == 6 && //Modifica el nombre.
					!utn_getNameOrSurname(auxiliarEmpleado.name,NAME_LEN,"Ingrese un nombre: \n","Nombre invalido.\n",2))
				{
					retorno = 0;
					strncpy(list[i].name,auxiliarEmpleado.name,NAME_LEN);//Copia la informacion pasada en la funcion, al indice obtenido.
					break;
				}
				else if( option == 7 && //Modifica el apellido.
						 !utn_getNameOrSurname(auxiliarEmpleado.lastName,LASTNAME_LEN,"Ingrese un apellido: \n","Apellido invalido.\n",2))
				{
					retorno = 0;
					strncpy(list[i].lastName,auxiliarEmpleado.lastName,NAME_LEN);//Copia la informacion pasada en la funcion, al indice obtenido.
					break;
				}
				else if( option == 8 && //Modifica el salario.
						!utn_getNumberFloat(&auxiliarEmpleado.salary,"Ingrese un salario Limite de 500.000: \n","Salario invalido.\n",0,500000,2))
				{
					retorno = 0;
					list[i].salary = auxiliarEmpleado.salary;//Copia la informacion pasada en la funcion, al indice obtenido.
					break;
				}
				else if(option == 9 && //Modifica el sector.
						!utn_getNumberInt(&auxiliarEmpleado.sector,"Ingrese un sector (1 a 5): \n","Sector invalido.\n",1,5,2))
				{
					retorno = 0;
					list[i].sector = auxiliarEmpleado.sector;//Copia la informacion pasada en la funcion, al indice obtenido.
					break;
				}
			}
		}
	}
	return retorno;
}
