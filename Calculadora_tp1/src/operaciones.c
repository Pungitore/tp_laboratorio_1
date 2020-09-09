/*
 * operaciones.c
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

/** \brief Solicita al usuario e inicializa una variable de tipo "float".
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
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
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

/** \brief Efectua la resta entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
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

/** \brief Efectua la división entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
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

/**
* \brief Evalua que los operandos ingresados por el usuario que sean diferentes a 0  para poder realizar el factorial
* de dichos parametros.
* \param float X primer operando del usuario.
* \param float Y segundo operando del usuario.
* \param float* pResultado puntero que guarda el valor del primer factorial.
* * \param float* pResultado2 puntero que guarda el valor del segundo factorial.
* \return -1 o 0, si retorna -1 retorna un error ya que el operando es a 0 y no se podra realizar su factorial,
*  si devuelve un 0 la operacion puede ser realizada con exito y ejecuta el factorial de ambos parametros.
*
*/
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



