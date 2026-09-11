#include <string.h>
#include <stdio.h>

int main()
{
    char str1[60];

    printf("Enter a string: ");
    gets(str1);   // Obtiene la cadena ingresada por el usuario
    strrev(str1); // Le cambia el sentido a la cadena
    printf("You entered: %s\n", str1);
    return 0;
}
