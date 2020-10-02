/*
 * ArrayEmployees.h
 *
 *  Created on: 27 sep. 2020
 *      Author: Usuario
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define NAME_LEN 100
#define LASTNAME_LEN 100

typedef struct
{
	 int id;
	 char name[NAME_LEN];
	 char lastName[LASTNAME_LEN];
	 float salary;
	 int sector;
	 int isEmpty;
}eEmployee;



/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int emp_initEmployees(eEmployee list[], int len);


/**
 * \brief Busca la primer posición vacia en el array de empleados.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \return Retorna el indice de la posicion vacia si encontró uno y -1 si obtuvo algún error o no existen indices vacios.
 *
 */
int emp_getEmptyIndex(eEmployee list[], int len);

/** \brief print the content of employees array.
 * \param list Employee*
 * \param len int
 * \return int
 */
int emp_printEmployees(eEmployee list[], int len);

/**
 * \brief Da de alta un empleado en una posicion del array
 * \param array Array de empleado a ser actualizado
 * \param limite Limite del array de empleados
 * \param len Posicion a ser actualizada
 * \param id Identificador asignado al empleado
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 *
 */
int emp_addEmployees(eEmployee* array,int len, int indice, int* id);

/**
 * \brief Cuenta la cantidad de empleados existentes.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \return Retorna contador Retorna la cantidad de empleados encontrada y -1 si tuvo algún error.
 *
 */
int emp_contadorEmployee(eEmployee list[], int len);

/** \brief find an Employee by Id en returns the index position in array.
*
* \param list Employee*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
*
*/
int emp_findEmployeeById(eEmployee list[], int len,int id);

/**
 * \brief Modifica los datos ingresados de un empleado por ID.
 * \param list Puntero al array de empleados.
 * \param len Es la longitud del array.
 * \param id Identificacion del cliente a modificar.
 * \param option para verificar la opcion del usuario a modificar. 6= NOMBRE , 7= APELLIDO , 8 = SALARIO , 9 = SECTOR
 * \return Retorna 0 si modifico los datos del cliente correctamente y -1 si tuvo algún error.
 *
 */
int emp_modifEmployee(eEmployee list[], int len, int id, int option);

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
*
* \param list Employee*
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
*
*/
int emp_removeEmployee(eEmployee list[], int len, int id);

/** \brief //Obtiene el total de los salarios, junto con el promedio y la cantidad de empledos que superan el salario promedio.
 * \param list Puntero al array de empleados.
 * \param len Longitud del array de empleados.
 * \return int Return 0 si pudo obtener correctamente la informacion y -1 si tuvo algun error.
 *
 */
int emp_informesSalarios(eEmployee list[], int len);

/** \brief Sort the elements in the array of employees, LastName and Sector
 * \param list Employee*
 * \param len int
 * \param order ordenamiento apellido y sector
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
void emp_sortEmployees(eEmployee list[], int len);


#endif /* ARRAYEMPLOYEES_H_ */



