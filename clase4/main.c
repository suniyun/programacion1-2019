#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#include "recursiva.h"

/*int main()
{
    int resultado = factorial(5);

    printf("%d", resultado);

    int edad;
    int legajo;
    int peso;

    edad = pedirEntero("Ingrese edad: ");
    legajo = pedirEntero("Ingrese legajo: ");
    peso = pedirEntero("Ingrese peso: ");

    printf("%d %d %d", edad, legajo, peso);

   return 0;
}*/

//estilo de menu

int main()
{
    int opcion;
    char seguir = 's';

    do
    {
        printf("1.Alta\n2.Baja\n3.Informe\n4.Salir\nElija una opcion:");
        scanf("%d", &opcion);

        switch(opcion)
    {
            case 1:
                printf("Estoy dando de alta!!\n");
            break;
            case 2:
                printf("Estoy dando de baja!!\n");
            break;
            case 3:
                printf("Estoy informando!!\n");
            break;
            case 4:
                printf("Estoy saliendo del programa!!\n");
                seguir = 'n';
            break;
            default:
                printf("No eligio una opcion valida!!\n");
    }
        system("pause");
        system("cls");

    }while(seguir == 's');

    return 0;
}

