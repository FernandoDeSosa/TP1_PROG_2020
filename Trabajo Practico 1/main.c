#include <stdio.h>
#include <stdlib.h>

int NumeroX(char* mensaje);
int NumeroY(char* mensaje);
int Suma();
int Resta();
int Multiplicacion();


int main()
{
    printf("%d",Suma());
    printf("%d",Resta());
    printf("%d",Multiplicacion());


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

int Suma()
{
    int sumaRegresada;
    int numeroXIngresado;
    int numeroYIngresado;

    numeroXIngresado = NumeroX("Ingrese numero x: ");
    numeroYIngresado = NumeroY("Ingrese numero y: ");
    sumaRegresada = numeroXIngresado + numeroYIngresado;

    printf("La suma es: ");





    return sumaRegresada;
}

int Resta()
{
    int restaRegresada;
    int numeroXIngresado;
    int numeroYIngresado;

    numeroXIngresado = NumeroX("\nIngrese numero x: ");
    numeroYIngresado = NumeroY("Ingrese numero y: ");
    restaRegresada = numeroXIngresado - numeroYIngresado;

    printf("La resta es: ");

    return restaRegresada;
}

int Multiplicacion()
{
    int multiplicacionRegresada;
    int numeroXIngresado;
    int numeroYIngresado;

    numeroXIngresado = NumeroX("\nIngrese numero x: ");
    numeroYIngresado = NumeroY("Ingrese numero y: ");
    multiplicacionRegresada = numeroXIngresado * numeroYIngresado;

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
