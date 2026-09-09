#include <stdio.h>

// en la vida practica no se usa y puede caer en muy malas practicas al utilizarlo porque permite ir a cualquier parte del codigo sin importan donde este  la idea es que sea secuencial y facil de seguir
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        goto negative; // el goto permite saltar a la etiqueta negative
    }
    else
    {
        goto positive; // el goto permite saltar a la etiqueta positive
    }

negative:
    printf("The number is negative.\n");
    return 0;

positive:
    printf("The number is positive.\n");
    return 0;
}
