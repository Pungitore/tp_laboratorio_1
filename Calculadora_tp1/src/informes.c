/*
 * informes.c
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarResultadoSuma(float X ,float Y ,float parametroResultadoSuma){
	printf("El resultado de la suma entre %.2f y %.2f es: %.2f \n" , X, Y, parametroResultadoSuma);
}

void mostrarResultadoResta(float X, float Y, float parametroResultadoResta){
	printf("El resultado de la resta entre %.2f y %.2f es: %.2f \n" , X, Y, parametroResultadoResta);
}

void mostrarResultadoMultiplicacion(float X, float Y, float parametroResutadoMultiplicacion){
	printf("El resultado de la multiplicacion entre %.2f y %.2f es: %.2f \n" , X, Y, parametroResutadoMultiplicacion);
}

void mostrarResultadoDivisionExito(float X, float Y, float parametroResutadoMultiplicacion){
	printf("El resultado de la division entre %.2f y %.2f es: %.2f \n" , X, Y, parametroResutadoMultiplicacion);
}

/** \brief Efectua el mensaje del resultado de la operacion division si esta misma da error(Segundo parametro es igual a 0),
  	 con dichos parametros.
*/
void mostrarResultadoDivisionError(){
	printf("ERROR!!! No se puede dividir por 0 !!! \n");
}


/** \brief Efectua el mensaje del resultado de la operacion division si esta misma da error(Segundo parametro es igual a 0),
  	 con dichos parametros.
* \param float X Primer parametro ,primer numero ingresado por el usuario.
* \param float Y Segundo parametro, segundo numero ingresado por el usuario.
* \param float parametroNumeroUno tercer parametro, resultado del factorial del primer numero ingresado efectuado en el programa.
* \param float parametroNumeroDos cuarto parametro, resultado del factorial del segundo numero ingresado efectuado en el programa.
*/
void mostrarResultadosFactoriales(float X, float Y, float parametroNumeroUno, float parametroNumeroDos){
	printf("El Factorial de %.2f es: %.2f\n"
		   "El factorial de %.2f es: %.2f\n\n",X,parametroNumeroUno,Y,parametroNumeroDos);
}
