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

/*int Factorial(int x, int y)
{
    int factorialDevuelto;

    if(x == 0 || y == 0)
    {
        factorialDevuelto = 1;
    }
    else
    {
        factorialDevuelto = x *CalcularFactorial(numero - 1);
    }

    return factorialDevuelto;
    //n! ? n*(n-1)!

}*/
