// printf("Hello, World!\n");
// const double costoPizzas = PIZZACOST * numberOdSlices;
// printf("Total cost of pizzas: $%.2f\n", constoPizzas); // statement son lineas sueltas

// {
//     printf("Hello, World!\n");

// }  // bloques es para agrupar varias linea de codigo y se usan llaves para abrir y cerrar el bloque de codigo es una unidad de codigo no sale amenos     que se se pida explicitamente

// if (condition)
// {
//     // Bloque de código que se ejecuta si la condición es verdadera
//     printf("La condición es verdadera.\n");
// }
// else if (condition)
// {
//     printf("La condición es falsa pero cumple con la segunda condicion dentro del if.\n");
// }
// else
// {
//     // Bloque de código que se ejecuta si la condición es falsa
//     printf("La condición es falsa.\n");
// }

#include <stdio.h>

int n = 15; // Variable global para el ejemplo

int main()
{
    if (n > 10 && n <= 20)
        printf("n es mayor que 10\n");
    else if (n == 10)
        printf("n es igual a 10\n");
    else if (n > 20)
        printf("n es mayor que 20\n");
    else
        printf("n es menor que 10\n");
    // if (n > 10)
    // {
    //     printf("n es mayor que 10\n");
    // }
    // else if (n == 10)
    // {
    //     printf("n es igual a 10\n");
    // }
    // else if (n > 20)
    // {
    //     printf("n es mayor que 20\n");
    // }
    // else
    // {
    //     printf("n es menor que 10\n");
    // }
    printf("Hello, World!\n");
    return 0;
}
