#include "ArrayEmployees.h"
#define OCUPADO 1
#define LIBRE 0

void Menu()
{
    printf("1. Ingresar un empleado\n");
    printf("2. Modificar un empleado\n");
    printf("3. Eliminar un empleado\n");
    printf("4. Informar empleados\n");
    printf("5. Salir\n");
}

int Inicializar(Employee lista[], int len)
{
    int retorno;
    retorno = -1;

    int i;

    if(lista != NULL && len > 0)
    {
        retorno = 0;
        for(i = 0; i < len; i++)
        {
            lista[i].isEmpty = LIBRE;
        }

    }



    return retorno;
}
int AnadirEmpleado(Employee lista[], int len)
{
    int retorno;
    retorno = -1;

    int i;
    int aux;

    aux = 0;

    if(lista != NULL && len > 0)
    {
        retorno = 0;
        for(i = 0; i < len && aux == 0; i++)
        {
            if(lista[i].isEmpty == LIBRE)
            {
                printf("Ingrese nombre: \n");
                fflush(stdin);
                scanf("%[^\n]", lista[i].nombre);
                printf("Ingrese apellido: \n");
                fflush(stdin);
                scanf("%[^\n]", lista[i].apellido);
                printf("Ingrese salario: \n");
                scanf("%f",&lista[i].salario);
                printf("Ingrese sector: \n");
                scanf("%d",&lista[i].sector);
                lista[i].id = i+1;

                lista[i].isEmpty = OCUPADO;
                aux = 1;
            }
        }
    }

    return retorno;
}

int MostrarEmpleados(Employee lista[], int len)
{
    int retorno;
    retorno = -1;

    int i;
    if(lista != NULL && len >= 0)
    {
        retorno = 0;
        for(i = 0; i < len; i++)
        {
            if(lista[i].isEmpty == OCUPADO)
            {
                printf("Nombre: %s \nApellido: %s \nSalario: %0.2f \nSector: %d \nID: %d \n",lista[i].nombre, lista[i].apellido, lista[i].salario, lista[i].sector, lista[i].id);
            }

        }

    }



    return retorno;
}

int EliminarEmpleado(Employee lista[], int len)
{

    int id;
    int retorno;
    int flagNoEncontrado;
    int i;
    retorno = -1;
    flagNoEncontrado = 1;

    printf("Ingrese ID del empleado a eliminar: \n");
    scanf("%d",&id);

    if(lista != NULL && len > 0)
    {
        retorno = 0;

        for(i = 0; i < len; i++)
        {
            if(lista[i].id == id && lista[i].isEmpty == OCUPADO)
            {
                lista[i].isEmpty = LIBRE;
                flagNoEncontrado = 0;
                printf("Empleado eliminado con exito.\n");
                break;
            }
        }
        if(flagNoEncontrado == 1)
        {
            printf("Error, id no encontrada\n");
            retorno = -2;
        }
    }

    return retorno;
}

int ModificarEmpleado(Employee lista[], int len)
{
    int retorno;
    int i;
    int flagNoEncontrado;
    int id;
    int op;
    char auxNombre[50];
    char auxApellido[50];
    float auxSalario;
    int auxSector;

    retorno = -1;
    flagNoEncontrado = 1;

    printf("Ingrese ID de empleado a modificar: \n");
    scanf("%d",&id);

    if(lista != NULL && len > 0)
    {
        retorno = 0;

        for(i = 0; i < len; i++)
        {
           if(lista[i].id == id && lista[i].isEmpty == OCUPADO)
           {
               flagNoEncontrado = 0;
               do
               {
                    printf("1.Modificar nombre\n");
                    printf("2.Modificar apellido\n");
                    printf("3.Modificar salario\n");
                    printf("4.Modificar sector\n");
                    printf("5.Salir\n");
                    scanf("%d",&op);
                    system("CLS");

                    switch(op)
                    {
                    case 1:
                        printf("Ingrese nombre: \n");
                        scanf("%s", auxNombre);
                        strcpy(lista[i].nombre, auxNombre);
                        break;
                    case 2:
                        printf("Ingrese apellido: \n");
                        scanf("%s", auxApellido);
                        strcpy(lista[i].apellido, auxApellido);
                        break;
                    case 3:
                        printf("Ingrese salario: \n");
                        scanf("%f",&auxSalario);
                        lista[i].salario = auxSalario;
                        break;
                    case 4:
                        printf("Ingrese sector: \n");
                        scanf("%d", &auxSector);
                        lista[i].sector = auxSector;
                        break;
                    }
               }while(op !=5);


           }

        }

        if(flagNoEncontrado == 0)
        {
            printf("Cambios guardados con exito.\n");
        }
        else
        {
            printf("Error, ID no encontrado.\n");
        }

    }



    return retorno;
}
