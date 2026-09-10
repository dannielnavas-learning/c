// return-type function-name(parameters declarations, if any) {
//     declarations
//     statements
// }
// return-type es el tipo de datos que la funcion va a devolver.
// function-name es el nombre de la funcion.
// parameters declarations son las declaraciones de los parametros que la funcion va a recibir, si es que recibe alguno.
// declarations son las declaraciones de variables locales dentro de la funcion.
// statements son las instrucciones que la funcion va a ejecutar.

int powerOfInteger(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}
