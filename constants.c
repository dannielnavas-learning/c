#include <stdio.h>

// "este es un mensaje" en c no existe el string lo que hace es dejarlo en un array de caracteres cada letra y espacio y termina con ul null

const int costHotdog = 5u; // se puede usar 100u unsigned o l long tambien sie puede guardar palabras como "hola"
const float iva = 0.16;    // seis espacios despues del punto por el tipo float
const char moneda = '$';   // se puede dejar a un char un salto de linea  con la convecion backslash (\) + n

// otra forma de declarar constantes es usando #define no se usa el = ni punto y coma
#define COST_HOTDOG 5u
#define IVA 0.16
#define COIN '$'

#define PIZZA_COST 1.5
const char NEW_LINE = '\n';

int main()
{
    printf("Cost of hotdog: %d\n", costHotdog);
    printf("IVA: %.2f\n", iva);
    printf("Moneda: %c\n", moneda);
    printf("Cost of hotdog (define): %d\n", COST_HOTDOG);
    printf("IVA (define): %.2f\n", IVA);
    printf("Moneda (define): %c\n", COIN);

    printf("Cost of hotdog (sum with IVA): %.2f\n", costHotdog * (1 + iva));
    printf("Cost of hotdog (define sum with IVA): %.2f\n", COST_HOTDOG * (1 + IVA));

    float costoPizza;
    float numberOfSlices = 3;

    costoPizza = PIZZA_COST * numberOfSlices;
    printf("Cost of pizza for %.0f slices: %.2f%c", numberOfSlices, costoPizza, NEW_LINE);

    return 0;
}
