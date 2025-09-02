#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1) Imprimir cadena al revés
void imprimirReves(char str[]) {
    int len = strlen(str);
    printf("Cadena al reves: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n\n");
}

// 2) Contar vocales
int contarVocales(char str[]) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            contador++;
        }
    }
    return contador;
}

// 5) Contar palabras
int contarPalabras(char str[]) {
    int contador = 0, enPalabra = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && enPalabra == 0) {
            enPalabra = 1;
            contador++;
        } else if (isspace(str[i])) {
            enPalabra = 0;
        }
    }
    return contador;
}

int main() {
    char cad1[200], cad2[200];

    // 1. Leer cadena e imprimirla al revés
    printf("1) Ingrese una cadena: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = 0; // quitar salto de línea
    imprimirReves(cad1);

    // 2. Contar vocales
    printf("2) La cadena tiene %d vocales.\n\n", contarVocales(cad1));

    // 3. Comparar dos cadenas
    printf("3) Ingrese otra cadena para comparar: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = 0;
    if (strcmp(cad1, cad2) == 0) {
        printf("Las cadenas son iguales.\n\n");
    } else {
        printf("Las cadenas son diferentes.\n\n");
    }

    // 4. Concatenar dos cadenas
    char resultado[400];
    strcpy(resultado, cad1);
    strcat(resultado, " ");
    strcat(resultado, cad2);
    printf("4) Concatenacion: %s\n\n", resultado);

    // 5. Contar palabras
    printf("5) La frase \"%s\" tiene %d palabras.\n", cad1, contarPalabras(cad1));

    return 0;
}
//Esto si lo debo preguntar porque no entiendo NADA :D