#include <stdlib.h>
#include <stdio.h>
#include "empleado.h"

void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    int j;

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
        scanf("%f", &lista[i].sueldoBruto);

        for(j=0; j<tam; j++)
        {
            calcularSueldoxHoras(eSector lista[j], int tam);
        }

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

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
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

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
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Maria","Pedro","Jose","Pedro","Pablo","Mateo"};
    char sexo[]= {'F','M','M','M','M','M'};
    float sueldosBruto[]= {1000,2000,3000,4000,5000,6000};
    int sector[]= {1,2,3,1,2,3};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        ,.[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idsector = sector[i];
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
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto * 0.85;

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
        else
        {
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
        if(lista[i].estado == OCUPADO && empleadoSueldoMax < lista[i].sueldoBruto)
        {
            empleadoSueldoMax = lista[i].sueldoBruto;
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
        if(lista[i].estado == OCUPADO && maximo == lista[i].sueldoBruto)
        {
            mostrarEmpleado(lista[i]);
        }
    }
}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i < tam; i++)
    {
        if(lista[i].estado == OCUPADO && (strcmp(lista[i].nombre, "Carlos") == 0 && lista[i].sueldoBruto > 20000))
        {
            contadorCarlos++;
        }
    }
    return contadorCarlos;
}

void calcularSueldoxHoras(eSector lista[], int tam)
{
    int sector;
    int j;

    for(j=0; j<tam; j++)
    {
        printf("Ingrese sector: \n");
        scanf("%d", &lista[j].sector);

        printf("Ingrese la cantidad de horas trabajadas: \n");
        scanf("%d", &lista[j].horasTrabajadas);

        do
        {
            switch(sector)
            {
            case 1:
                lista[j].sueldo = lista[j].horasTrabajadas * 100;
                break;
            case 2:
                lista[j].sueldo = lista[j].horasTrabajadas * 200;
                break;
            case 3:
                lista[j].sueldo = lista[j].horasTrabajadas * 300;
                break;
            }
        }
        while (sector != 4);
    }


}
