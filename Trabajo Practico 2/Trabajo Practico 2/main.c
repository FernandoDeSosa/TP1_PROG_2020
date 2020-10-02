#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <string.h>
#define TAM 1000

int main()
{
    Employee empleado[TAM];
    Inicializar(empleado, TAM);
    int opcion;
    do
    {
        Menu();

        scanf("%d",&opcion);

        system("CLS");

        switch(opcion)
        {
        case 1:
            AnadirEmpleado(empleado, TAM);
            break;
        case 2:
            ModificarEmpleado(empleado, TAM);
            break;
        case 3:
            EliminarEmpleado(empleado, TAM);
            break;
        case 4:
            MostrarEmpleados(empleado, TAM);
            break;

        }
    }while(opcion != 5);





    return 0;
}
