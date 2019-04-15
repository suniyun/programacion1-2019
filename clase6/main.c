#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pedirCadena(char[], char[], int);
void validarTamCadena(char[], char[], int);
void formatoApellidoNombre(char[], char[], char[]);

int main()
{
    char nombre[20];
    char apellido[20];
    char apellidoNombre[41]="";

    pedirCadena("nombre: ", nombre, 20);
    pedirCadena("apellido: ", apellido, 20);
    formatoApellidoNombre(nombre, apellido, apellidoNombre);

    printf("%s", apellidoNombre);

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

void formatoApellidoNombre(char nombre[], char apellido[], char apellidoNombre[])
{
    int i;

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);
    apellidoNombre[0]=toupper(apellidoNombre[0]);

    for(i=0; i<strlen(apellidoNombre); i++)
    {
        if(apellidoNombre[i] == ' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }
    }
}
