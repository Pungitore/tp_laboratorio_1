/*
 * operaciones.c
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

float getFloat(char* mensaje)
{
	float bufferFloat;

	printf("%s",mensaje);
	fflush(stdin);
	scanf("%f",&bufferFloat);

	return bufferFloat;
}


float sumarNumeros(float X, float Y,float* pResultado){
	int retorno=-1;
	float resultadoSuma;

	if(pResultado!=NULL){
		resultadoSuma = X+Y;
		*pResultado = resultadoSuma;
		retorno=0;
	}
	return retorno;
}

float restarNumeros(float X, float Y,float* pResultado){
	int retorno=-1;
	float resultadoResta;

	if(pResultado!=NULL){
		resultadoResta = X-Y;
		*pResultado = resultadoResta;
		retorno=0;
	}
	return retorno;
}

/** \brief Efectua la multiplicación entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
float multiplicarNumeros(float X, float Y, float* pResultado){
	int retorno=-1;
	float resultadoMultiplicacion;

	if(pResultado!=NULL){
		resultadoMultiplicacion = X*Y;
		*pResultado = resultadoMultiplicacion;
		retorno=0;
	}
	return retorno;
}

float dividirNumeros(float X, float Y, float* pResultado){
	int retorno=-1;
	float resultadoDivision;

	if (pResultado!=NULL && Y!=0) {
		resultadoDivision=X/Y;
		*pResultado=resultadoDivision;
		retorno=0;
	}
	return retorno;
}


int factorialNumeros(float X, float Y, float* pResultado, float* pResultado2)
{
	int retorno=-1;
	float bufferFactorialUno = 1;
	float bufferFactorialDos = 1;
	int i;

		if(X!=0){
			for (i=1;i<=X;i++){
				bufferFactorialUno *=i;
				*pResultado = bufferFactorialUno;
				retorno=0;
			}
		} else if (X==0){
			*pResultado = 1;
		}

		if(Y!=0){
			for (i=1;i<=Y;i++){
				bufferFactorialDos *=i;
				*pResultado2  = bufferFactorialDos;
				retorno=0;
			}
		} else if (Y==0){
			*pResultado2 = 1;
		}

	return retorno;
}



