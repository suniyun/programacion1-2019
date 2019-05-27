#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char nombre[50] = "Suni";

    pArchivo = fopen("misDatos.txt", "w");

    if(pArchivo != NULL)
    {
       /*fprintf(pArchivo,"Su nombre es: \n%s", nombre);*/
       fgets(nombre, 30, pArchivo);
       fgets(nombre, 30, pArchivo);

       fclose(pArchivo);
       printf("%s", nombre);
    }

    /*FILE* pArchivo;
    char nombre[50] = "Suni";
    pArchivo = fopen("D:\\misDatos.txt", "r");
    if(pArchivo != NULL)
    {
        fgets(nombre, 30, pArchivo);

        fclose(pArchivo);

        printf("%s", nombre);
    } */

    return 0;
}
