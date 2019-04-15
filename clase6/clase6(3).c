#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2

void pedirCadena(char[], char[], int);
void validarTamCadena(char[], char[], int);

typedef struct{
    int legajo[T];
    float sueldo[T];
    char sexo[T];
    char nombre[T][20];

}sEmpleado;

int main()
{
    sEmpleado unEmpleado;
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &unEmpleado.legajo[i]);
        printf("Ingrese sueldo: ");
        scanf("%f", &unEmpleado.sueldo[i]);
        printf("Ingrese sexo (M o F): ");
        fflush(stdin);
        scanf("%c", &unEmpleado.sexo[i]);
        pedirCadena("nombre: ", unEmpleado.nombre[i], 20);
    }

    for(i=0; i<T; i++)
    {
        printf("%d -- %f -- %c -- %s\n0", unEmpleado.legajo[i], unEmpleado.sueldo[i], unEmpleado.sexo[i],
                                        unEmpleado.nombre[i]);
    }

    return 0;
}

void pedirCadena(char mensaje[], char cadena[], int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    validarTamCadena(mensaje, cadena, tam);
}

void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
}
