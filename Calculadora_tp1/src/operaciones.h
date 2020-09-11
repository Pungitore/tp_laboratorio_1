/*
 * operaciones.h
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_


/** \brief Solicita al usuario e inicializa una variable de tipo "float".
* \param Mensaje impreso al usuario.
* \return Numero ingresado por el usuario.
*
*/
float getFloat(char* mensaje);


/** \brief Efectua la suma entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
float sumarNumeros(float X, float Y,float* pResultado);


/** \brief Efectua la resta entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
float restarNumeros(float X, float Y,float* pResultado);


/** \brief Efectua la multiplicación entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
float multiplicarNumeros(float X, float Y,float* pResultado);


/** \brief Efectua la división entre dos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro .
* \return retorno si la operacion posee errores o no mediante -1/0.
*/
float dividirNumeros(float X, float Y,float* pResultado);


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
int factorialNumeros(float X, float Y, float* pResultado, float* pResultado2);
#endif /* OPERACIONES_H_ */
