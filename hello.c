#include <stdio.h> // preprocessor commands

int main()
{
    /* main function
    First hello world in C programming language
    */
    printf("Hello, World!\n"); // printf() displays the string inside quotation
    return 0;                  // return statement close the main function retorna un entero 0 no puede ser de tipo void
}

// Basic types:
// arithmetic types: (valores enteros)
// int 4 Bytes -2,147,483,648 to 2,147,483,647
// no negativos unsigned int de 0 a 4,294,967,295 (4 bytes)

// short 2 Bytes  -32768 to 32767
// unsigned short 0 to 65535 (2 bytes)

// long 8 Bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// unsigned long 0 to 18,446,744,073,709,551,615 (8 bytes)

// char 1 byte -128 to 127
// unsigned char 0 to 255 (1 byte)

//  De punto flotante:
// float 4 Bytes 1.2E-38 to 3.4E+38 6 decimal places
// double 8 Bytes 2.3E-308 to 1.7E+308 15 decimal places
// long double 10 Bytes 3.4E-4932 to 1.1E+4932 19 decimal places

// tipo void: no devuelve ningun valor y se usa en 3 escenarios
// 1. una funcion retorna un tipo de datos VOID => cuando ese ejecuta no retorna ningun valor
// void function()
// {
//     printf("This function returns no value\n");
// }
// 2. una funcion tiene argumentos de tipo VOID => cuando se ejecuta no recibe ningun valor
// int random(void)
// {
//     return 4; // returns a random number
// }
// 3. Puntero o apuntador que va a la direccion en memoria de un objeto pero no le importa el tipo de dato que tenga
// void *ptr;
// int x = 10;
// ptr = &x; // pointer to any data type
