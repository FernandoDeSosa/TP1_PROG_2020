#include "funciones.h"

int Suma(int x, int y)
{
    int sumaRegresada;

    sumaRegresada = x + y;


    return sumaRegresada;
}

int Resta(int x, int y)
{
    int restaRegresada;

    restaRegresada = x - y;

    return restaRegresada;
}

int Multiplicacion(int x, int y)
{
    int multiplicacionRegresada;

    multiplicacionRegresada = x * y;

    return multiplicacionRegresada;
}

float Division(float x, float y, char* mensajeError, char* mensajeMostrar)
{
    float divisionRegresada;

    divisionRegresada =(float) x / y;

    if(x == 0 || y == 0)
    {
        printf("%s",mensajeError);
    }
    else
    {

        printf("%s",mensajeMostrar);
    }

    return divisionRegresada;
}




int FactorialX(int x)
{
    int factorialDevuelto;

    if(x == 0 )
    {
        factorialDevuelto = 1;
    }
    else
    {
        factorialDevuelto = x * (x - 1);
    }

    return factorialDevuelto;
    //n! ? n*(n-1)!

}

int FactorialY(int y)
{
    int factorialDevuelto;

    if(y == 0 )
    {
        factorialDevuelto = 1;
    }
    else
    {
        factorialDevuelto = y * (y - 1);
    }

    return factorialDevuelto;

}
