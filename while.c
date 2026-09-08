#include <stdio.h>

int main()
{
    int n = 20;

    while (n > 10)
    {
        printf("n es igual a %d\n", n);
        n = n - 1;
    }

    printf("Hemos salido del bucle porque n es igual o menor que diez.\n");
    return 0;
}
