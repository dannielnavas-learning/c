#include <stdio.h>

// continue se puede usar en un for while y do while
// continue no se puede usar en switch
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue; // salta la iteración cuando i es igual a 2
        }
        printf("i = %d\n", i);
    }
    return 0;
}
