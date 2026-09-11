#include <stdio.h>

// int power(int base, int n);

// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//     {
//         printf("n = %d el resultado de la potencia = %d\n", i, power(2, i));
//     }

//     return 0;
// }

// int power(int base, int n)
// {
//     int p;
//     for (p = 1; n > 0; n--) // se trabaja con una copia de n
//     {
//         p = p * base;
//     }
//     return p;
// }

int power(int base, int n);

int main()
{
    int n = 3;
    printf("n = %d el resultado de la potencia = %d\n", n, power(2, n));
    return 0;
}

int power(int base, int n)
{
    int p;
    for (p = 1; n > 0; n--) // se trabaja con una copia de n
    {
        p = p * base;
        printf("El valor temporal de n es: %d\n", n);
    }
    return p;
}
