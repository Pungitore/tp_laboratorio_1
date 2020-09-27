/*
 * ArrayEmployees.h
 *
 *  Created on: 27 sep. 2020
 *      Author: Usuario
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_



#endif /* ARRAYEMPLOYEES_H_ */



typedef struct
{
    int idAlumno; //PK
    int legajo;
    char nombre[20];
    char email[20];
    int isEmpty;
    int idCurso; //FK
}eAlumno;
