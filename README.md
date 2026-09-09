# Curso de C - Documentación de Aprendizaje

Este repositorio contiene los conceptos fundamentales aprendidos en el curso de programación en C.

## Tabla de Contenidos

1. [Introducción a C](#introducción-a-c)
2. [Tipos de Datos](#tipos-de-datos)
3. [Variables](#variables)
4. [Constantes](#constantes)
5. [Enumeraciones](#enumeraciones)
6. [Control de Flujo - Condicionales](#control-de-flujo---condicionales)
7. [Control de Flujo - Bucles](#control-de-flujo---bucles)
8. [Sentencias de Control de Bucles](#sentencias-de-control-de-bucles)
9. [Switch](#switch)
10. [Goto](#goto)
11. [Entrada de Datos](#entrada-de-datos)
12. [Ejemplos Prácticos](#ejemplos-prácticos)

---

## Introducción a C

C es un lenguaje de programación de propósito general, eficiente y poderoso. Los programas en C comienzan con la función `main()`.

### Estructura Básica

```c
#include <stdio.h>  // Inclusión de bibliotecas (preprocessor directive)

int main()
{
    printf("Hello, World!\n");
    return 0;  // Retorna un entero (no puede ser void)
}
```

### Puntos Clave

- `#include <stdio.h>` es una directiva del preprocesador para incluir la biblioteca estándar de entrada/salida
- La función `main()` siempre retorna un `int` (0 indica ejecución exitosa)
- `printf()` imprime texto en la consola
- `\n` representa un salto de línea

---

## Tipos de Datos

C proporciona varios tipos de datos primitivos:

### Tipos Aritméticos (Enteros)

| Tipo             | Bytes | Rango                                                  | Uso                        |
| ---------------- | ----- | ------------------------------------------------------ | -------------------------- |
| `int`            | 4     | -2,147,483,648 a 2,147,483,647                         | Números enteros normales   |
| `unsigned int`   | 4     | 0 a 4,294,967,295                                      | Solo valores positivos     |
| `short`          | 2     | -32,768 a 32,767                                       | Números pequeños           |
| `unsigned short` | 2     | 0 a 65,535                                             | Valores pequeños positivos |
| `long`           | 8     | -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807 | Números muy grandes        |
| `unsigned long`  | 8     | 0 a 18,446,744,073,709,551,615                         | Números grandes positivos  |
| `char`           | 1     | -128 a 127                                             | Caracteres individuales    |
| `unsigned char`  | 1     | 0 a 255                                                | Caracteres sin signo       |

**Modificadores:**

- `unsigned` (u): No admite números negativos
- `long` (l): Para números más grandes

### Tipos de Punto Flotante

| Tipo          | Bytes | Rango                 | Precisión    |
| ------------- | ----- | --------------------- | ------------ |
| `float`       | 4     | 1.2E-38 a 3.4E+38     | 6 decimales  |
| `double`      | 8     | 2.3E-308 a 1.7E+308   | 15 decimales |
| `long double` | 10    | 3.4E-4932 a 1.1E+4932 | 19 decimales |

### Tipo Especial: void

El tipo `void` se usa en tres escenarios:

1. **Función sin retorno:**

   ```c
   void function()
   {
       printf("Esta función no retorna valor\n");
   }
   ```

2. **Función sin argumentos:**

   ```c
   int random(void)
   {
       return 4;  // Retorna un número
   }
   ```

3. **Puntero genérico:**

   ```c
   void *ptr;
   int x = 10;
   ptr = &x;  // Apuntador a cualquier tipo de dato
   ```

---

## Variables

Las variables son espacios en memoria que almacenan valores y pueden cambiar durante la ejecución del programa.

### Declaración de Variables

```c
int parking;              // Permite valores positivos y negativos
unsigned int totalCard;   // Solo permite valores positivos
char initial = 'A';       // Declaración con inicialización
float salary = 1500.50;   // Variable flotante
```

### Declaración Múltiple

```c
int a, b, c;
float f, g, h;
```

### Variables Externas

Se declaran fuera de funciones y son accesibles desde múltiples archivos:

```c
extern int usoExterno;  // Declaración de variable externa
```

### Ejemplo de Uso

```c
int a = 5, b = 10, c;
c = a + b;
printf("a = %d, b = %d, c = %d\n", a, b, c);
```

### Especificadores de Formato en printf()

| Especificador | Tipo                     | Ejemplo                         |
| ------------- | ------------------------ | ------------------------------- |
| `%d`          | Entero                   | `printf("%d\n", 42);`           |
| `%f`          | Flotante (6 decimales)   | `printf("%f\n", 3.14);`         |
| `%.1f`        | Flotante (1 decimal)     | `printf("%.1f\n", 3.1);`        |
| `%.2f`        | Flotante (2 decimales)   | `printf("%.2f\n", 3.14);`       |
| `%c`          | Carácter                 | `printf("%c\n", 'A');`          |
| `%s`          | String                   | `printf("%s\n", "Hola");`       |
| `%zu`         | Tamaño en bytes (sizeof) | `printf("%zu\n", sizeof(int));` |

---

## Constantes

Las constantes son valores que no pueden cambiar durante la ejecución del programa. Se pueden declarar de dos formas:

### 1. Usando `const`

```c
const int costHotdog = 5u;
const float iva = 0.16;
const char moneda = '$';
const char NEW_LINE = '\n';
```

**Características:**

- Se declara con la palabra clave `const`
- Requiere inicialización
- El tipo de dato es explícito
- Se pueden usar en operaciones matemáticas

### 2. Usando `#define`

```c
#define COST_HOTDOG 5u
#define IVA 0.16
#define COIN '$'
#define PIZZA_COST 1.5
```

**Características:**

- Es una directiva del preprocesador
- No requiere `=` ni punto y coma
- Se usa convencionalmente con MAYÚSCULAS
- Se reemplaza directamente en el código antes de la compilación
- Ideal para valores usados globalmente

### Comparación

| Característica | `const`                   | `#define`           |
| -------------- | ------------------------- | ------------------- |
| Tipo de dato   | Explícito                 | Genérico            |
| Compilación    | En tiempo de compilación  | En preprocesamiento |
| Inicialización | Requerida                 | No                  |
| Scope          | Tiene alcance             | Global              |
| Sintaxis       | `const tipo var = valor;` | `#define VAR valor` |

### Ejemplo Práctico

```c
const float costHotdog = 5;
const float iva = 0.16;

// Operación matemática con constantes
float total = costHotdog * (1 + iva);
printf("Total: %.2f\n", total);
```

---

## Enumeraciones

Una enumeración es un tipo de dato que permite definir un conjunto de constantes enteras con nombres significativos.

### Declaración Básica

```c
enum weekDays
{
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};
```

### Enumeración con Valores Personalizados

```c
enum deck
{
    club = 0,
    diamond = 1,
    heart = 2,
    spade = 3
} card;  // Declaración de variable de tipo enum
```

### Uso de Enumeraciones

```c
// Declaración de variable
enum deck card;

// Asignación de valor
card = heart;

// Impresión del valor
printf("Card is %d\n", card);  // Output: Card is 2

// Obtener tamaño en bytes
printf("Size of card is %zu\n", sizeof(card));  // Output: Size of card is 4
```

### Ventajas de las Enumeraciones

1. **Legibilidad:** Los nombres son más descriptivos que números
2. **Mantenibilidad:** Fácil de cambiar valores
3. **Seguridad de tipos:** El compilador valida los valores
4. **Claridad del código:** El propósito es evidente

---

## Modificadores de Tipo

Se pueden combinar modificadores con los tipos básicos:

- `unsigned` - Solo valores positivos (sin signo)
- `signed` - Permite negativos y positivos (por defecto)
- `short` - Tipo entero pequeño (2 bytes)
- `long` - Tipo entero grande (8 bytes)

Ejemplos:

```c
unsigned int count = 100u;
long bigNumber = 999999999999l;
short smallNumber = 100;
```

---

## Compilación

Los programas C se compilan usando GCC:

```bash
gcc -Wall -Wextra -g3 archivo.c -o output/ejecutable
```

- `-Wall` - Mostrar todas las advertencias
- `-Wextra` - Mostrar advertencias adicionales
- `-g3` - Incluir información de depuración

---

## Control de Flujo - Condicionales

Las condicionales permiten ejecutar diferentes bloques de código según se cumplan o no determinadas condiciones.

### Estructura if-else if-else

```c
int n = 15;

if (n > 10 && n <= 20)
{
    printf("n es mayor que 10\n");
}
else if (n == 10)
{
    printf("n es igual a 10\n");
}
else if (n > 20)
{
    printf("n es mayor que 20\n");
}
else
{
    printf("n es menor que 10\n");
}
```


- `if` evalúa si la condición es verdadera
- `else if` permite múltiples condiciones
- `else` ejecuta si ninguna condición anterior es verdadera
- Se pueden usar operadores lógicos: `&&` (AND), `||` (OR), `!` (NOT)

### Comparadores

| Operador | Significado       | Ejemplo   |
| -------- | ----------------- | --------- |
| `==`     | Igual a           | `n == 10` |
| `!=`     | No igual a        | `n != 10` |
| `>`      | Mayor que         | `n > 10`  |
| `<`      | Menor que         | `n < 10`  |
| `>=`     | Mayor o igual que | `n >= 10` |
| `<=`     | Menor o igual que | `n <= 10` |

---

## Control de Flujo - Bucles

Los bucles permiten repetir un bloque de código múltiples veces.

### Bucle while

El bucle `while` se ejecuta mientras la condición sea verdadera.

```c
int n = 20;

while (n > 10)
{
    printf("n es igual a %d\n", n);
    n = n - 1;
}

printf("Hemos salido del bucle porque n es igual o menor que diez.\n");
```

**Características:**

- Se evalúa la condición ANTES de ejecutar el bloque
- Si la condición es falsa desde el inicio, el bloque nunca se ejecuta
- Ideal cuando no conocemos el número exacto de iteraciones

### Bucle do-while

El bucle `do-while` se ejecuta al menos una vez, luego evalúa la condición.

```c
int i = 0;

do
{
    printf("i = %d\n", i);
    i++;
} while (i < 5);
```

**Características:**

- El bloque se ejecuta primero, después se verifica la condición
- Se ejecuta mínimo una vez, incluso si la condición es falsa
- Útil para menús o validaciones

### Bucle for

El bucle `for` es ideal cuando se conoce el número de iteraciones.

```c
for (int i = 0; i < 5; i++)
{
    printf("i = %d\n", i);
}
```

**Estructura:**

```
for (inicialización; condición; incremento)
{
    // Bloque de código
}
```

**Características:**

- Inicialización: se ejecuta una sola vez al principio
- Condición: se evalúa antes de cada iteración
- Incremento: se ejecuta después de cada iteración
- Ideal para iterar arrays y cuando se conoce el número de repeticiones

---

## Sentencias de Control de Bucles

### break

La sentencia `break` sale del bucle inmediatamente.

```c
int option = 1;

switch (option)
{
case 1:
    printf("Option 1 selected\n");
    break;  // Sale del switch
case 2:
    printf("Option 2 selected\n");
    break;
default:
    printf("Invalid option\n");
    break;
}
```

**Usos:**

- Salir de un bucle antes de que la condición se cumpla
- Muy importante en `switch` para evitar "caídas" entre casos
- Se usa en bucles `for`, `while` y `do-while`

### continue

La sentencia `continue` salta la iteración actual y continúa con la siguiente.

```c
for (int i = 0; i < 5; i++)
{
    if (i == 2)
    {
        continue;  // Salta cuando i es 2
    }
    printf("i = %d\n", i);  // Imprime: 0, 1, 3, 4
}
```

**Características:**

- Salta el resto del código en la iteración actual
- Continúa con la siguiente iteración
- **No se puede usar en `switch`**
- Válido en bucles `for`, `while` y `do-while`

---

## Switch

La sentencia `switch` permite seleccionar entre múltiples opciones basadas en el valor de una variable.

```c
int variable;
printf("Ingrese un número (1-3): ");

switch (variable)
{
case 1:
    printf("Opción 1 seleccionada\n");
    break;
case 2:
    printf("Opción 2 seleccionada\n");
    break;
case 3:
    printf("Opción 3 seleccionada\n");
    break;
default:
    printf("Ninguna opción válida seleccionada\n");
    break;
}
```

**Puntos importantes:**

- Cada `case` debe terminar con `break` (excepto si se quiere "caída" intencional)
- `default` es opcional y se ejecuta si ningún caso coincide
- Es más legible que múltiples `if-else if` para muchas opciones
- Solo compara valores exactos

---

## Goto

La sentencia `goto` permite saltar a una etiqueta específica en el código.

```c
int number;
printf("Enter a number: ");
scanf("%d", &number);

if (number < 0)
{
    goto negative;
}
else
{
    goto positive;
}

negative:
    printf("The number is negative.\n");
    return 0;

positive:
    printf("The number is positive.\n");
    return 0;
```

**⚠️ Advertencia importante:**

- `goto` **NO se recomienda usar** en la práctica
- Puede llevar a código confuso y difícil de seguir ("spaghetti code")
- Rompe la estructura secuencial del código
- Prefiere usar estructuras de control como `if`, `switch`, bucles y funciones

---

## Entrada de Datos

Para leer entrada del usuario se utiliza la función `scanf()`.

### scanf()

```c
int variable;
printf("Ingrese un número: ");
scanf("%d", &variable);  // &variable es la dirección de memoria
```

### Especificadores de Formato para scanf()

| Especificador | Tipo     |
| ------------- | -------- |
| `%d`          | Entero   |
| `%f`          | Flotante |
| `%lf`         | Double   |
| `%c`          | Carácter |
| `%s`          | String   |

**Puntos importantes:**

- El `&` antes del nombre de variable indica su dirección en memoria
- Sin `&`, scanf no sabría dónde guardar el valor
- Para strings (`%s`), no se usa `&`

---

## Ejemplos Prácticos

### Menú Interactivo

```c
int option1 = 0;
int option2 = 0;

int main()
{
    if (option1 == 0)
    {
        printf("Opción 1 seleccionada\n");
        printf("Ingrese una opción para el menú 2: ");
        scanf("%d", &option2);

int option1 = 0;
int option2 = 0;

int main()
{
    if (option1 == 0)
    {
        printf("Opción 1 seleccionada\n");
        printf("Ingrese una opción para el menú 2: ");
        scanf("%d", &option2);
        
        if (option2 == 0)
        {
            printf("Opción 2.0 seleccionada\n");
        }
        else if (option2 == 1)
        {
            printf("Opción 2.1 seleccionada\n");
        }
        else if (option2 == 2)
        {
            printf("Opción 2.2 seleccionada\n");
        }
        else
        {
            printf("Ninguna opción válida seleccionada\n");
        }
    }
    else if (option1 == 1)
    {
        printf("Opción 1.1 seleccionada\n");
    }
    else
    {
        printf("Ninguna opción válida seleccionada\n");
    }

    return 0;
}
```

---

## Notas Importantes

1. **Strings en C:** C no tiene un tipo `string` nativo. Los strings se representan como arrays de caracteres terminados con un carácter nulo (`\0`).

2. **Retorno de main():** La función `main()` siempre debe retornar un `int`, nunca `void`.

3. **Convenciones de nombres:**
   - Variables y funciones: `camelCase` o `snake_case`
   - Constantes con `#define`: `UPPER_SNAKE_CASE`
   - Enumeraciones: `PascalCase`

4. **Precisión de flotantes:** Los números flotantes tienen precisión limitada. Usar `%.2f` para redondear a 2 decimales.

5. **sizeof() operator:** Devuelve el tamaño en bytes de un tipo de dato o variable.

6. **Break en switch:** **Siempre** termina cada case con `break`, excepto que quieras que continúe al siguiente case.

7. **Evita goto:** Es una mala práctica. Usa en su lugar: `if-else`, `switch`, bucles y funciones.

---

## Archivos del Proyecto

- `hello.c` - Programa "Hello World" y tipos de datos
- `variables.c` - Declaración y uso de variables
- `constants.c` - Constantes con `const` y `#define`
- `enums.c` - Enumeraciones
- `if.c` - Condicionales con `if`, `else if` y `else`
- `while.c` - Bucles `while`
- `do-while.c` - Bucles `do-while`
- `for.c` - Bucles `for`
- `break.c` - Sentencia `break` en bucles y `switch`
- `continue.c` - Sentencia `continue` en bucles
- `switch.c` - Sentencia `switch` para múltiples opciones
- `goto.c` - Sentencia `goto` (no recomendado)
- `menu.c` - Ejemplo práctico de menú interactivo

---

## Recursos de Aprendizaje

Este curso cubre los fundamentos de C necesarios para:

- `constants.c` - Constantes con `const` y `#define`
- `enums.c` - Enumeraciones

---

## Recursos de Aprendizaje

Este curso cubre los fundamentos de C necesarios para:

- Entender la programación procedural
- Trabajar con tipos de datos
- Gestionar variables y constantes
- Crear programas básicos

---

**Última actualización:** 2026-09-04  
**Curso:** Platzi - Curso de C
