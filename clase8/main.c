#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include "library2.h"
#define CANT_EMPLEADOS 1000

int main()
{
    Empleado empleados[CANT_EMPLEADOS];
    int opcion;
    int indiceVacio;
    int bandera=0;
    int salir=0;
    do
    {
        system("cls");
        fflush(stdin);
        getEntero(&opcion,3,"1)Cargar empleados:\n2)Mostrar lista de empleados\n3)Salir\n","\nError\n",3,0);
        switch(opcion)
        {
                case 1:
                        cargarIndice(empleados,indiceVacio,CANT_EMPLEADOS);
                    break;
                    case 2:
                    if(bandera == 1)
                    {
                        mostrarEmpleadosOrdenados(empleados,CANT_EMPLEADOS);
                    }
                    else
                    {
                        printf("\nNo hay datos cargados\n");
                    }
                    system("pause");
                    break;
                    case 4:
                salir = 1;
        }
    }while(salir==0);

    return 0;
}




