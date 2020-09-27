/*
 * menu.c
 *
 *  Created on: 27 sep. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"

 int menu(){
    int opcion;

      printf("1.Cargar un Empleado.\n");
      printf("2.Modificar un Empleado.\n");
      printf("3.Dar de baja un Empleado.\n");
      printf("4.Informes.\n");

      scanf("%d",&opcion);
    return opcion;
}
