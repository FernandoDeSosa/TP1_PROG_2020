#include "funciones.h"

/** \brief Suma dos enteros.
 *
 * \param x int recibe un entero.
 * \param y int recibe un entero.
 * \return int retorna la suma de los dos enteros.
 *
 */
int Suma(int x, int y)
{
    int sumaRegresada;

    sumaRegresada = x + y;


    return sumaRegresada;
}

/** \brief Resta dos enteros.
 *
 * \param x int recibe un entero.
 * \param y int recibe un entero,
 * \return int retorna la resta de los dos enteros.
 *
 */
int Resta(int x, int y)
{
    int restaRegresada;

    restaRegresada = x - y;

    return restaRegresada;
}

/** \brief Multiplica dos enteros.
 *
 * \param x int recibe un entero.
 * \param y int recibe un entero.
 * \return int retorna la multiplicacion de los dos enteros.
 *
 */
int Multiplicacion(int x, int y)
{
    int multiplicacionRegresada;

    multiplicacionRegresada = x * y;

    return multiplicacionRegresada;
}

/** \brief Divide dos flotantes.
 *
 * \param x float recibe un flotante.
 * \param y float recibe un flotante.
 * \return float si alguno de los dos flotante es "0" no hace la operacion, si no retorna la division de los dos flotantes.
 *
 */
float Division(float x, float y)
{
    float divisionRegresada;

    if(x == 0 || y == 0)
    {
        printf("No es posible dividir por cero.");
    }
    else
    {
        divisionRegresada =(float) x / y;
    }

    return divisionRegresada;
}




/** \brief Encuentra el factorial de un numero.
 *
 * \param numero int recibe un entero.
 * \return int retorna el factorial del entero.
 *
 */
int Factorial(int numero)
{
    int factorial;
    int i;

    factorial = 1;

    for(i = numero; i > 1; i--)
    {
        factorial = factorial * i;
    }



    return factorial;
}

/** \brief Pide un entero al usuario.
 *
 * \param void
 * \return int retorna el entero ingresado.
 *
 */
int PedirNumero(void)
{
    int retornoNumero;

    scanf("%d",&retornoNumero);

    return retornoNumero;
}
