#include <stdio.h>

int main()
{
    int option1 = 1; // ejemplo de valor para la opción
    // break sirve para salir de un bucle antes de que la condicion se cumpla
    // ejemplo en el uso de if anidados si quiero salir a un ciclo antes de que termine la condicion, puedo usar break
    switch (option1)
    {
    case 1:
        printf("Option 1 selected\n");
        break;
    case 2:
        printf("Option 2 selected\n");
        break;
    default:
        printf("Invalid option\n");
        break;
    }
}
