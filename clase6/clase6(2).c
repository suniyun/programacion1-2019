#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

}sEmpleado;

int main()
{
    sEmpleado unEmpleado={100, "Juan", 'M', 15000, 12000};


    return 0;
}
