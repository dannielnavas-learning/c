#include <stdio.h>

// int i, j, k;
// int parking;             // permite tanto positivo como negativo
// int minutesParked = 10;  // con inicialización
// unsigned int totalCard;  // solo permite valores positivos
// char initial = 'A';      // variable de tipo caracter con inicialización
// char dailyWorkHours = 0; // variable de tipo caracter con inicialización

// int main()
// {
//     return 0;
// }

// Variable declarations
// extern int  cuando se usan varios archivos
extern int usoExterno;
int a, b, c;

float f, g, h;

int main()
{
    // variable definition
    int usoExterno; // variable externa definida en otro archivo
    // Assign values to integer variables
    a = 5;
    b = 10;
    c = a + b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("La suma es: %d\n", c); // el %d se usa para imprimir enteros es la posicion donde se coloca la variable correspondiente

    f = 1.1;
    g = 2.2;
    h = f + g;
    printf("f = %.1f, g = %.1f, h = %.1f\n", f, g, h); // el %.1f se usa para imprimir flotantes
    printf("La suma de flotantes es: %.1f\n", h);      // el %.1f se usa para imprimir flotantes

    usoExterno = a + b;
    printf("usoExterno = %d\n", usoExterno);
    return 0;
}
