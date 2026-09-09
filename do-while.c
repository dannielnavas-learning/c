#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("i = %d\n", i);
        i++;
    } while (i < 5); // se ejecuta al menos una vez en el while si no cumple la condicion no se ejecuta
    // el do while se aplica cuando necesitamos que algo se compruebe al menos una vez antes de evaluar la condicion
    return 0;
}
