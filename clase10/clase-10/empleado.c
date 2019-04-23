//
//  empleado.c
//  clase-10
//
//  Created by Suni Yun on 22/4/19.
//  Copyright © 2019 Suni Yun. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "empleado.h"

void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    
    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldo);
        
        lista[i].sueldoNeto =lista[i].sueldo*0.85;
        
        lista[i].estado = OCUPADO;
        
    }
    else
    {
        printf("No hay espacio");
    }
    
}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }
        
    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldo,unEmpleado.sueldoNeto);
    
}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Maria","Pedro","Jose","Pedro","Pablo","Mateo"};
    char sexo[]={'F','M','M','M','M','M'};
    float sueldosBruto[]={1000,2000,3000,4000,5000,6000};
    
    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldo = sueldo[i];
        lista[i].sueldoNeto = sueldo[i] * 0.85;
        lista[i].estado = OCUPADO;
    }
    
}

void modificarLegajo(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int loEncontro = 0;
    
    printf("Escriba legajo: \n");
    scanf("%d", &legajo);
    
    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            printf("Ingrese un nuevo sueldo bruto: \n");
            scanf("%f", &lista[i].sueldo);
            
            lista[i].sueldoNeto = lista[i].sueldo * 0.85;
            
            loEncontro = 1;
            break;
        }
    }
    if(loEncontro ==0)
    {
        printf("El dato no existe.\n");
    }
}
int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{
    int i;
    
    printf("Escriba el legajo que busca: \n");
    scanf("%d", &legajo);
    
    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {
            printf("El legajo ingresado es; %d\n", legajo);
        }
        else{
            printf("El legajo ingresado no existe.");
        }
    }
    return 0;
}

void sueldoMasAlto(eEmpleado lista[], int tam)
{
    int i;
    int empleadoSueldoMax = 0;
    
    for(i = 0; i < tam; i++)
        
    {
        if(lista[i].estado == OCUPADO && empleadoSueldoMax < lista[i].sueldo)
        {
            empleadoSueldoMax = lista[i].sueldo;
        }
    }
}

void mostrarEmpleadoSueldoAlto(eEmpleado lista[], int tam)
{
    float maximo;
    int i;
    
    maximo = sueldoMasAlto(lista, tam);
    
    for(i=0; i < tam; i++)
    {
        if(lista[i].estado == OCUPADO && maximo == lista[i].sueldo)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}

int contarCarlos (eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;
    
    for(i=0; i < tam; i++)
    {
        if(lista[i].estado == OCUPADO && (strcmp(lista[i].nombre, "Carlos") == 0 && lista[i].sueldo > 20000))
        {
            contadorCarlos++;
        }
    }
    return contadorCarlos;
}

//crear una funcion
// calcular el sueldo x hora, cuando se paga la hora, sector, depende el sector la paga es diferente, cant horas, valor horas, sector: contabilidad valorhora" 100. horas: 10 sector sistemas, valorhora 200, horas 20, luis m sector contabilidad, 10hsx100/hs
