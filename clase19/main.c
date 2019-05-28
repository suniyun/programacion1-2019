#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[51];
    int id;
    int precio;
} eProducto;

int main()
{
    FILE* pArchivo;
    pArchivo = fopen("misdatos.csv", "r");

    char auxNombre[51];
    int auxId;
    int auxPrecio;

    fscanf(pArchivo, ("%[^,], %[^,], %[^,], %[^\n]", auxNombre, auxId, auxPrecio);

    while( != feof(pArchivo))
    {
        fscanf(pArchivo, ("%[^,], %[^,], %[^,], %[^\n]"), auxNombre->nombre, auxId->id, auxPrecio->precio);
    }
    return 0;
}
