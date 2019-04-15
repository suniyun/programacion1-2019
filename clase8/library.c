#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "library2.h"
#define T 10


int indicesVacios(Empleado* sEmpleados,int limite,int* indiceVacio)
{
    int i = 0;
    int retorno = -1;
    while(i < limite)
    {
        if(sEmpleados[i].isEmpty == -1)
        {
            *indiceVacio = i;
            retorno = 0;
            break;
        }
        i++;
    }
    return retorno;
}

int cargarIndice(Empleado* sEmpleados,int indice,int limite)
{
    char auxNombre[32];
    char auxApellido[32];
    int auxSector;
    float auxSalario;
    printf("Nombre:\n");
    if(getString(auxNombre,32)==0)
    {

                printf("Apellido: \n");
                if(getString(auxApellido,128)==0)
                {
                    if(getEntero(&auxSector,2,"Sector: \n", "\nError\n",6,0) == 0)
                    {
                        if(getNumeroDecimal(&auxSalario, 2, "Salario: \n", "\nError\n",15000,0)== 0)
                        {
                                strncpy(sEmpleados[indice].nombre,auxNombre,32);
                                strncpy(sEmpleados[indice].apellido,auxApellido,128);
                                sEmpleados[indice].sector = auxSector;
                                sEmpleados[indice].salario = auxSalario;
                                sEmpleados[indice].isEmpty = 0;
                        }
                    }
                }

    }
    return 0;
}

int mostrarEmpleadosOrdenados(Empleado* sEmpleados,int limite)
{
    int retorno=-1;
    int i;
    if(sEmpleados != NULL && limite > 0)
    {
            for(i=0;i<limite;i++)
            {
                if(sEmpleados[i].isEmpty==0)
                {
                    printf("\nEl nombre del empleado es: %s", sEmpleados[i].nombre);
                    printf("\nEl apellido del empleado es: %s", sEmpleados[i].apellido);
                    printf("\nEl sector del empleado es: %d", sEmpleados[i].sector);
                    printf("\nEl salario del empleado es: %.2f\n", sEmpleados[i].salario);
                    printf("El ID del empleado es: %d\n", sEmpleados[i].ID);
                    retorno=0;
                }
            }
        }


    return retorno;
}
