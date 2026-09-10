#include <stdio.h>

// void demo();

// int main()
// {
//     demo();
//     return 0;
// }

// void demo()
// {
//     printf("This is a demo function with no arguments and no return value.\n");
//     int a, b, sum;
//     a = 5;
//     b = 10;
//     sum = a + b;

//     printf("The sum of a and b is: %d\n", sum);
// }

int a, b;

int add(int a, int b);

int main()
{
    int result = add(5, 10);
    printf("The result of adding 5 and 10 is: %d\n", result);
    return 0;
}

int add(int a, int b)
{
    printf("This is a demo function with no arguments and no return value.\n");
    int add;
    add = a + b;

    return add;
}
