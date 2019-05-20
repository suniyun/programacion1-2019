#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numero;
    char letra;

} eDato;

void mostrarDato(eDato* miDato, int tam);
int mostrarTodosLosDatos(eDato* losDatos, int tam);
int ordenarDato(eDato* losDatos, int tam);

int main()
{
    eDato unDato = {1, 'c'};
    eDato muchosDatos[3] = {{1,'c'},{1,'b'},{1,'a'}};

    eDato* pDato;
    eDato* pMuchosDatos;

    pMuchosDatos = muchosDatos;
    pDato = &unDato;

    mostrarTodosLosDatos(muchosDatos, 3);

    return 0;
}

void mostrarDato(eDato* miDato)
{
    printf("%d--%c", miDato->numero, miDato->letra);
}
int mostrarTodosLosDatos(eDato* losDatos, int tam)
{
    int i;
    if(losDatos != NULL && tam > 0)
    {
        for(i=0; i < tam; i++)
        {
            mostrarDato(*losDatos+i);
        }
    }
    return 0;
}

int ordenarDato(eDato* losDatos, int tam)
{
    int retorno = -1;
    int i;
    int j;
    int auxNumero;
    char auxLetra;

    if(losDatos != NULL && tam > 0)
    {
        for(i=0; i < tam; i++)
        {
            auxNumero = losDatos[i].numero;
            auxLetra = losDatos[i].letra;

            j = i-1;

            while(j>=0 && auxLetra = losDatos[j].letra)
            {
                losDatos[j+1].numero = auxNumero;
                losDatos[j+1].letra = auxLetra;
            }
            retorno = 0;
        }
    }
    return retorno;
}
