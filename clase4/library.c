#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int pedirEntero(char texto[])
{
    int unEntero;

    printf("%s", texto);
    scanf("%d", &unEntero);

    return unEntero;
}
