#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // 1. Mostrar código ASCII de un carácter
    char c;
    printf("1. Mostrar código ASCII de un carácter\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);
    printf("El código ASCII de '%c' es %d\n\n", c, c);
    //lee un carácter, el espacio antes de %c evita problemas con caracteres previos (como el Enter).
    //%d imprime el valor numérico (ASCII) del carácter.

    // 2. Determinar si una letra es vocal o consonante
    printf("2. Determinar si una letra es vocal o consonante\n");
    printf("Ingrese una letra: ");
    scanf(" %c", &c);
    c = tolower(c);

    if (!isalpha(c)) {
        printf("No es una letra.\n\n");
    } else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("Es una vocal.\n\n");
    } else {
        printf("Es una consonante.\n\n");
    }
    // tolower(c) convierte cualquier letra a minúscula (por ejemplo, 'A' → 'a').
    // isalpha(c) devuelve true (1) si c es una letra (a-z o A-Z), si no, false (0).
    // Se coloca cada una de las letras para comparar.

    // 3. Convertir una letra minúscula a mayúscula
    printf("3. Convertir una letra minúscula a mayúscula\n");
    printf("Ingrese una letra minúscula: ");
    scanf(" %c", &c);

    if (islower(c)) {
        printf("La letra mayúscula es: %c\n\n", toupper(c));
    } else {
        printf("No ingresó una letra minúscula.\n\n");
    }
    // islower(c) verifica si la letra es minuscula
    // toupper(c) convierte la letra minuscula a mayuscula

    // 4. Contar cuántas veces aparece una letra en una palabra
    char palabra[100], letra;
    int contador = 0;
    printf("4. Contar cuántas veces aparece una letra en una palabra\n");
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    printf("Ingrese la letra a buscar: ");
    scanf(" %c", &letra);

    letra = tolower(letra);
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (tolower(palabra[i]) == letra) {
            contador++;
        }
    }
    printf("La letra '%c' aparece %d veces en la palabra '%s'.\n\n", letra, contador, palabra);
    //char palabra[100] crea una cadena para almacenar la palabra (hasta 99)
    //scanf("%s", palabra); lee una palabra (hasta espacio o enter).
    //El bucle for recorre cada carácter de la palabra. '\0' marca el final de una cadena en C.
    //contador++ suma 1 cada vez que hay coincidencia.

    // 5. Verificar si un carácter es un dígito numérico
    printf("5. Verificar si un carácter es un dígito numérico\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("'%c' es un dígito numérico.\n", c);
    } else {
        printf("'%c' no es un dígito numérico.\n", c);
    }

    return 0;
    // isdigit(c) devuelve true si c es un número del 0 al 9 (ej: '3'), no si es el número 3 como valor entero.
}

