#include <stdio.h>

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty;
}Employee;


void Menu();
int Inicializar(Employee lista[], int len);
int AnadirEmpleado(Employee lista[], int len);
int MostrarEmpleados(Employee lista[], int len);
int EliminarEmpleado(Employee lista[], int len);
int ModificarEmpleado(Employee lista[], int len);

