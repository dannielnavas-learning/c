#include <math.h>  // sin cosh floor ceil sqrt
#include <stdio.h> //input y output teclado, para imprimir pantalla printf

int x;
double result;

int main()
{
    printf("Ingrese el valor de x: ");

    scanf("%d", &x); // se le asigna el valor a la variable x

    // result = sin(x);

    result = cos(x);

    printf("El valor ingresado de x es: %d\n", x);
    // printf("El resultado de sin(x) es: %f\n", result);
    printf("El resultado de cos(x) es: %f\n", result);
    return 0;
}
