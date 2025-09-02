#include <stdio.h>
#include <string.h>

// 1) Union con int y float
union EnteroFlotante {
    int i;
    float f;
};

// 2) Union con diferentes tipos de datos
union Datos {
    int entero;
    float flotante;
    char cadena[20];
};

// 3) Union entero o carácter
union Valor {
    int entero;
    char caracter;
};

// 4) Union con varios tipos
union Varios {
    int i;
    float f;
    double d;
    char c;
};

// 5) Union para convertir entre tipos
union Convertidor {
    int i;
    float f;
};

int main() {
    // 1. Sobrescritura int/float
    union EnteroFlotante u1;
    u1.i = 42;
    printf("1) Asignando int: %d, interpretado como float: %f\n", u1.i, u1.f);
    u1.f = 3.14f;
    printf("   Asignando float: %f, interpretado como int: %d\n\n", u1.f, u1.i);

    // 2. Union para diferentes tipos
    union Datos d;
    d.entero = 100;
    printf("2) Entero: %d\n", d.entero);
    d.flotante = 12.34f;
    printf("   Flotante: %f\n", d.flotante);
    strcpy(d.cadena, "Hola");
    printf("   Cadena: %s\n\n", d.cadena);

    // 3. Union entero o carácter
    union Valor v;
    v.entero = 65;
    printf("3) Entero: %d\n", v.entero);
    v.caracter = 'A';
    printf("   Caracter: %c\n\n", v.caracter);

    // 4. Tamaño de una union
    printf("4) Tamano de union Varios: %zu bytes\n\n", sizeof(union Varios));

    // 5. Conversion entre tipos (reinterpretación)
    union Convertidor conv;
    conv.i = 1065353216; // Representación binaria de 1.0f en IEEE 754
    printf("5) int: %d interpretado como float: %f\n", conv.i, conv.f);
    conv.f = 2.5f;
    printf("   float: %f interpretado como int: %d\n", conv.f, conv.i);

    return 0;
}
//Verdad que debo preguntarle al profe sobre Strings, Structs y Unions luego