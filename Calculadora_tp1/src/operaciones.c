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

float sumarNumeros(float X, float Y){
	float resultadoSuma;
	resultadoSuma = X + Y;

	return resultadoSuma;
}

void mostrarResultadoSuma(float X ,float Y ,float parametroResutadoSuma){
	printf("El resultado de la suma entre: %.2f y %.2f es: %.2f \n\n" , X, Y, parametroResutadoSuma);
}

