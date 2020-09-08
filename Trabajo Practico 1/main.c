#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int a;
    int b;
    int opcion;
    do{
        printf(" 1. Ingresar 1er operando (A = x). \n 2. Ingresar 2do operando (B = y).  \n 3. Calcular todas las operaciones.\n 4. Informar resultados.\n 5. Salir. ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese 1er numero: ");
            scanf("%d",&a);
            break;
        case 2:
            printf("Ingrese 2do numero: ");
            scanf("%d",&b);
            break;
        case 3:
            Suma(a, b);
            Resta(a, b);
            Division(a, b, "", " ");
            Multiplicacion(a, b);

            break;
        case 4:
            printf("El resultado de A+B es: %d\n",Suma(a, b));
            printf("El resultado de A-B es: %d\n",Resta(a, b));
            printf("%f",Division(a, b, "No es posible dividir por cero.\n", "El resultado de A/B es: "));
            printf("\nEl resultado de A*B es: %d",Multiplicacion(a, b));

        }

    }while(opcion!= 4);


    return 0;
}


