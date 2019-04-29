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
    float sueldoBruto;
    float sueldoNeto;
    int estado;
    int idsector;
    int horasTrabajadas;
    } eEmpleado;

typedef struct
{
    int sector;
    char descripcion[20];
    int horasTrabajadas;
    int sueldo;

}eSector;

void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado[], int);
void mostrarListaEmpleados(eEmpleado[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int);
void modificarLegajo(eEmpleado lista[], int, int);
int buscarLegajo(eEmpleado lista[], int, int);
void sueldoMasAlto(eEmpleado[], int);
void mostrarEmpleadoSueldoAlto(eEmpleado[], int);
int contarCarlos(eEmpleado[], int);
void calcularSueldoxHoras(eSector[], int);
#endif /* empleado_h */
