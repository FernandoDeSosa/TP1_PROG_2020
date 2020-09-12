#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int a;
    int b;
    int opcion;

    a = 0;
    b = 0;

    do{
        printf("\nEl valor de A es: %d\n",a);
        printf("\nEl valor de B es: %d\n",b);
        printf("\n 1. Ingresar 1er operando A . \n 2. Ingresar 2do operando B .  \n 3. Calcular todas las operaciones.\n 4. Informar resultados.\n 5. Salir. ");
        scanf("%d",&opcion);
        system("CLS");

        switch(opcion)
        {
        case 1:
            printf("Ingrese 1er numero: ");
            a = PedirNumero();
            break;
        case 2:
            printf("Ingrese 2do numero: ");
            b = PedirNumero();
            break;
        case 3:
            Suma(a, b);
            Resta(a, b);
            Division(a, b);
            Multiplicacion(a, b);
            Factorial(a);
            Factorial(b);

            break;
        case 4:
            printf("El resultado de A+B es: %d\n",Suma(a, b));
            printf("El resultado de A-B es: %d\n",Resta(a, b));
            printf("El resultado de A/B es: %f\n",Division(a, b));
            printf("El resultado de A*B es: %d\n",Multiplicacion(a, b));
            printf("El factorial de A es: %d\n",Factorial(a));
            printf("El factorial de B es: %d\n",Factorial(b));


        }

    }while(opcion!= 5);


    return 0;
}


