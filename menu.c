#include <stdio.h>

int option1 = 0;
int option2 = 0;

int main()
{
    // este programa genera menus segun lo que el usuario elija
    if (option1 == 0)
    {
        printf("Opcion1 0 seleccionada\n ");
        printf("Ingrese una opcion para el menu 2: ");
        scanf("%d", &option2);
        if (option2 == 0)
        {
            printf("Opcion2 0 seleccionada\n");
        }
        else if (option2 == 1)
        {
            printf("Opcion2 1 seleccionada\n");
        }
        else if (option2 == 2)
        {
            printf("Opcion2 2 seleccionada\n");
        }
        else
        {
            printf("Ninguna opcion valida seleccionada\n");
        }
    }
    else if (option1 == 1)
    {
        printf("Opcion1 1 seleccionada\n");
        printf("Ingrese una opcion para el menu 2: ");
        scanf("%d", &option2);
        if (option2 == 0)
        {
            printf("Opcion2 0 seleccionada\n");
        }
        else if (option2 == 1)
        {
            printf("Opcion2 1 seleccionada\n");
        }
        else if (option2 == 2)
        {
            printf("Opcion2 2 seleccionada\n");
        }
        else
        {
            printf("Ninguna opcion valida seleccionada\n");
        }
    }
    else
    {
        printf("Ninguna opcion valida seleccionada\n");
    }

    return 0;
}
