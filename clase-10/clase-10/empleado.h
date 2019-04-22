//
//  empleado.h
//  clase-10
//
//  Created by Suni Yun on 22/4/19.
//  Copyright © 2019 Suni Yun. All rights reserved.
//

#ifndef empleado_h
#define empleado_h
#include <stdio.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    float sueldoNeto;
    int estado;
} eEmpleado;

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificarLegajo(eEmpleado lista[], int, int);
int buscarLegajo(eEmpleado lista[], int, int);
void sueldoMasAlto(eEmpleado[], int);
#endif /* empleado_h */
