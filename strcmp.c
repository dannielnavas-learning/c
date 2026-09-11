#include <string.h>
#include <stdio.h>

int main()
{
    char str1[60];
    char str2[60];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin); // Obtiene la cadena ingresada por el usuario
    printf("Enter a string: ");
    fgets(str2, sizeof(str2), stdin); // Obtiene la cadena ingresada por el usuario
    printf("Enter another string: ");

    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        strcat(str1, str2);
        printf("The strings are not equal.\n");
        printf("Concatenated string: %s\n", str1);
    }
    return 0;
}
