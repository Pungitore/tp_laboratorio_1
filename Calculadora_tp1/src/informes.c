/*
 * informes.c
 *
 *  Created on: 4 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>


/** \brief Efectua el mensaje del resultado de la operacion suma ya realizada, con dichos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro.
*/
void mostrarResultadoSuma(float X ,float Y ,float parametroResultadoSuma){
	printf("El resultado de la suma entre: %.2f y %.2f es: %.2f \n\n" , X, Y, parametroResultadoSuma);
}


/** \brief Efectua el mensaje del resultado de la operacion resta ya realizada, con dichos parametros.
* \param float X Primer parametro.
* \param float Y Segundo parametro.
*/

void mostrarResultadoResta(float X, float Y, float parametroResutadoResta){
	printf("El resultado de la resta entre: %.2f y %.2f es: %.2f \n\n" , X, Y, parametroResutadoResta);
}
