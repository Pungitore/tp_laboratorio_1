/*
 * informes.h
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#ifndef INFORMES_H_
#define INFORMES_H_


/** \brief Efectua el mensaje del resultado de la operacion suma ya realizada, con dichos parametros.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroResultadoSuma tercer parametro, resultado de la suma efectuada en el programa.
*/
void mostrarResultadoSuma(float X, float Y, float parametroResutadoResta);


/** \brief Efectua el mensaje del resultado de la operacion resta ya realizada, con dichos parametros.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroResutadoResta tercer parametro, resultado de la resta efectuada en el programa.
*/
void mostrarResultadoResta(float X, float Y, float parametroResutadolResta);


/** \brief Efectua el mensaje del resultado de la operacion multiplicación ya realizada, con dichos parametros.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroResutadoResta tercer parametro, resultado de la multiplicacion efectuada en el programa.
*/
void mostrarResultadoMultiplicacion(float X, float Y, float parametroResutadoMultiplicacion);


/** \brief Efectua el mensaje del resultado de la operacion division si esta misma no da error(Segundo parametro es distinto a 0),
  	 con dichos parametros.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroResutadoResta tercer parametro, resultado de la division efectuada en el programa.
*/
void mostrarResultadoDivisionExito(float X, float Y, float parametroResutadoMultiplicacion);


/** \brief Efectua el mensaje del resultado de la operacion division si esta misma da error(Segundo parametro es igual a 0),
  	 con dichos parametros.
*/
void mostrarResultadoDivisionError();


/** \brief Efectua el mensaje del resultado de las operacioesn factoriaes de los numeros si esta misma no da error.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroNumeroUno tercer parametro, resultado del factorial del primer numero ingresado efectuado en el programa.
* \param float parametroNumeroDos cuarto parametro, resultado del factorial del segundo numero ingresado efectuado en el programa.
*/
void mostrarResultadosFactoriales(float X, float Y, float parametroNumeroUno, float parametroNumeroDos);

#endif /* INFORMES_H_ */
