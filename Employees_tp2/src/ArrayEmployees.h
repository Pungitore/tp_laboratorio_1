/*
 * ArrayEmployees.h
 *
 *  Created on: 27 sep. 2020
 *      Author: Usuario
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define QTY_NAME 100
#define QTY_SURNAME 100

typedef struct
{
	 int id;
	 char name[QTY_NAME];
	 char lastName[QTY_SURNAME];
	 float salary;
	 int sector;
	 int isEmpty;
}eEmployee;



#endif /* ARRAYEMPLOYEES_H_ */



