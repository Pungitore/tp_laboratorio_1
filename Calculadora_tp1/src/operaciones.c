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


/** \brief Efectua la suma entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return resultadoSuma retorna el resultado de los dos parametros ingresados(X,Y).
*/
float sumarNumeros(float X, float Y){
	float resultadoSuma;
	resultadoSuma = X + Y;

	return resultadoSuma;
}

/** \brief Efectua la resta entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return resultadoResta retorna el resultado de los dos parametros ingresados(X,Y).
*/
float restarNumeros(float X, float Y){
	float resultadoResta;
	resultadoResta = X - Y;

	return resultadoResta;
}

