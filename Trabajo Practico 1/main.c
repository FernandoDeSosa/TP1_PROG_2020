#include <stdio.h>
#include <stdlib.h>

int NumeroX(void);
int NumeroY(void);
int Suma(int x, int y);
int Resta(int x, int y);
int Multiplicacion(int x, int y);
float Division(float x, float y);
int Factorial(int x, int y);


int main()
{
    int opcion;
    do{
        printf(" 1. Ingresar 1er operando. \n 2.Ingresar 2do operando.  \n 3. Calcular todas las operaciones.\n 4. Salir. ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese 1er numero: ");
            NumeroX();
            break;
        case 2:
            printf("Ingrese 2do numero: ");
            NumeroY();
            break;
        case 3:
            printf("%d",Suma(NumeroX(),NumeroY()));
            printf("%d",Resta(NumeroX(),NumeroY()));
            printf("%d",Multiplicacion(NumeroX(),NumeroY()));
            printf("%f",Division(NumeroX(),NumeroY()));
            break;
        }

    }while(opcion!= 4);



/*
int main()
{
    int opcion;
    do
    {
        printf("1. Cargar\n2. Mostar\n3. Eliminar\n4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Estoy cargando...\n");
            break;
        case 2:
            printf("\nEstoy mostrando...\n");
            break;
        case 3:
            printf("\nEstoy eliminando...\n");
            break;
        case 4:
            printf("\nGracias por usar el programa...\n");
            break;
        }
    }while(opcion!= 4);

    return 0;
}

*/

    return 0;
}

int NumeroX()
{
    int numeroIngresado;

    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}

int NumeroY()
{
    int numeroIngresado;

    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}

int Suma(int x, int y)
{
    int sumaRegresada;

    sumaRegresada = x + y;
    printf("La suma es: ");

    return sumaRegresada;
}

int Resta(int x, int y)
{
    int restaRegresada;

    restaRegresada = x - y;
    printf("La resta es: ");

    return restaRegresada;
}

int Multiplicacion(int x, int y)
{
    int multiplicacionRegresada;

    multiplicacionRegresada = x * y;
    printf("La multiplicacion es: ");

    return multiplicacionRegresada;
}

float Division(float x, float y)
{
    float divisionRegresada;

    divisionRegresada = x / y;
    if(x == 0 || y == 0)
    {
        printf("Error, no es posible dividir por 0");
    }

    return divisionRegresada;
}

/*int Factorial(int x, int y)
{
    int factorialDevuelto;

    if(x == 0 || y == 0)
    {
        factorialDevuelto = 1;
    else
    {
        factorialDevuelto = numero *CalcularFactorial(numero - 1);
    }

    return factorialDevuelto;
    //n! ? n*(n-1)!

}*/






























/*
float PrecioConDescuento(float precio, int descuento);
float PedirPrecio(char* mensaje);
int PedirDescuento(char* mensaje);

int main()
{
    float resultado;
    float precioIngresado;
    int descuentoIngresado;
    float descuento;


    precioIngresado = PedirPrecio("Ingrese precio: ");
    descuentoIngresado = PedirDescuento("Ingrese descuento: ");

    descuento = descuentoIngresado / 100 * precioIngresado;

    resultado = precioIngresado - descuento;

    printf("El precio con descuento es: %f",resultado);


    return 0;
}

float PrecioConDescuento(float precio, int descuento)
{
    float resultado;

    resultado = ((PedirDescuento() * PedirPrecio()) / 100);
    resultado = PedirPrecio - resultado;

    return resultado;
}

float PedirPrecio(char* mensaje)
{
    float precio;
    printf(mensaje);
    scanf("%f",&precio);

    return precio;

}

int PedirDescuento(char* mensaje)
{
    int descuento;

    printf(mensaje);

    scanf("%d", &descuento);

    return descuento;
}

*/
