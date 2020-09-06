#include <stdio.h>
#include <stdlib.h>

int NumeroX(char* mensaje);
int NumeroY(char* mensaje);
int Suma(int x, int y);
int Resta(int x, int y);
int Multiplicacion(int x, int y);


int main()
{
    printf("%d",Suma(NumeroX("Ingrese numero X: "),NumeroY("Ingrese numero Y: ")));
    printf("%d",Resta(NumeroX("Ingrese numero X: "),NumeroY("Ingrese numero Y: ")));
    printf("%d",Multiplicacion(NumeroX("Ingrese numero X: "),NumeroY("Ingrese numero Y: ")));


    return 0;
}

int NumeroX(char* mensaje)
{
    int numeroIngresado;

    printf("%s",mensaje);
    scanf("%d",&numeroIngresado);

    return numeroIngresado;
}

int NumeroY(char* mensaje)
{
    int numeroIngresado;

    printf("%s",mensaje);
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
