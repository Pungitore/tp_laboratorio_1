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

int initEmployees(eEmployee list[], int len);
int emp_getEmptyIndex(eEmployee list[], int len);
int emp_addEmployees(eEmployee* array,int len, int indice, int* id);
int emp_contadorEmployee(eEmployee list[], int len);
int emp_printEmployees(eEmployee list[], int len);
int emp_findEmployeeById(eEmployee list[], int len,int id);
int emp_modifEmployee(eEmployee list[], int len, int id, int option);
int emp_removeEmployee(eEmployee list[], int len, int id);

#endif /* ARRAYEMPLOYEES_H_ */



