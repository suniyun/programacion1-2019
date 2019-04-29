#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#define T 10

    int menuDeOpciones(char[]);

    int main()
    {
        int opcion;
        eEmpleado lista[T];
        eEmpleado id[T];
        inicializarEmpleados(lista,T);
        hardcodearDatosEmpleados(lista,4);

        do
        {
            opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Mostrar\n4.Modificiar Legajo\n5.Buscar Legajo\n6.Mostrar sueldo mas alto\n"
                                    "7.Mostrar empleado con el sueldo mas alto\n8.Contar Carlos\n9.Calcular sueldo x horas\n10.Salir\nElija una opcion: ");
            switch(opcion)
            {
                case 1:
                    cargarEmpleado(lista,  T);
                    break;
                case 2:

                    break;
                case 3:
                    mostrarListaEmpleados(lista, T);
                    break;
                case 4:
                    modificarLegajo(lista, T, id);
                    break;
                case 5:
                    buscarLegajo(lista, T, id);
                    break;
                case 6:
                    sueldoMasAlto(lista, T);
                    break;
                case 7:
                    mostrarEmpleadoSueldoAlto(lista, T);
                    break;
                case 8:
                    contarCarlos(lista, T);
                    break;
                case 9:
                    calcularSueldoxHoras(lista, T);
                    break;

            }
        }while(opcion!=10);

        return 0;
    }

    int menuDeOpciones(char mensaje[])
    {
        int opcion;
        printf("%s", mensaje);
        scanf("%d", &opcion);

        return opcion;
    }
