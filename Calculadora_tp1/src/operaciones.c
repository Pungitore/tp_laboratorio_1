/*
 * operaciones.c
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

/** \brief Solicita al usuario  e inicializa una variable de tipo "float".
* \param Mensaje impreso al usuario.
* \return Numero ingresado por el usuario.
*
*/
float getFloat(char* mensaje)
{
	float bufferFloat;

	printf("%s",mensaje);
	fflush(stdin);
	scanf("%f",&bufferFloat);

	return bufferFloat;
}

