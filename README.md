# Curso de C - Documentación de Aprendizaje

Este repositorio contiene los conceptos fundamentales aprendidos en el curso de programación en C.

## Tabla de Contenidos

1. [Introducción a C](#introducción-a-c)
2. [Tipos de Datos](#tipos-de-datos)
3. [Variables](#variables)
4. [Constantes](#constantes)
5. [Enumeraciones](#enumeraciones)

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

## Notas Importantes

1. **Strings en C:** C no tiene un tipo `string` nativo. Los strings se representan como arrays de caracteres terminados con un carácter nulo (`\0`).

2. **Retorno de main():** La función `main()` siempre debe retornar un `int`, nunca `void`.

3. **Convenciones de nombres:**
   - Variables y funciones: `camelCase` o `snake_case`
   - Constantes con `#define`: `UPPER_SNAKE_CASE`
   - Enumeraciones: `PascalCase`

4. **Precisión de flotantes:** Los números flotantes tienen precisión limitada. Usar `%.2f` para redondear a 2 decimales.

5. **sizeof() operator:** Devuelve el tamaño en bytes de un tipo de dato o variable.

---

## Archivos del Proyecto

- `hello.c` - Programa "Hello World" y tipos de datos
- `variables.c` - Declaración y uso de variables
- `constants.c` - Constantes con `const` y `#define`
- `enums.c` - Enumeraciones

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
