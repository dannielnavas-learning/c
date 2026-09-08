#include <stdio.h>

int main()
{
    int variable;
    printf("Ingrese un número (1-3): ");
    switch (variable)
    {
    case 1:
        printf("Opción 1 seleccionada\n");
        break;
    case 2:
        printf("Opción 2 seleccionada\n");
        break;
    case 3:
        printf("Opción 3 seleccionada\n");
        break;
    default:
        printf("Ninguna opción válida seleccionada\n");
        break;
    }
    return 0;
}
