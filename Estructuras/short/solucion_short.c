#include <stdio.h>

// Función para convertir un número short a binario
void shortToBinary(short num) {
    int bits = sizeof(short) * 8; // cantidad de bits de short (16 normalmente)
    printf("El numero %d en binario es: ", num);
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    // 1. Almacenar edades en short
    int n;
    printf("1) Almacenar edades usando short\n");
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &n);
    short edades[n];
    printf("Ingrese las edades:\n");
    for (int i = 0; i < n; i++) {
        scanf("%hd", &edades[i]);
    }
    printf("Edades almacenadas: ");
    for (int i = 0; i < n; i++) {
        printf("%hd ", edades[i]);
    }
    printf("\n\n");

    // 2. Suma de dos números short
    short a, b, suma;
    printf("2) Suma de dos numeros short\n");
    printf("Ingrese dos numeros: ");
    scanf("%hd %hd", &a, &b);
    suma = a + b;
    printf("La suma de %hd y %hd es: %hd\n\n", a, b, suma);

    // 3. Verificar múltiplo de 5
    short num;
    printf("3) Verificar si un numero short es multiplo de 5\n");
    printf("Ingrese un numero: ");
    scanf("%hd", &num);
    if (num % 5 == 0) {
        printf("%hd es multiplo de 5\n\n", num);
    } else {
        printf("%hd no es multiplo de 5\n\n", num);
    }

    // 4. Contar pares en un arreglo short
    int m;
    printf("4) Contar numeros pares en un arreglo\n");
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &m);
    short arreglo[m];
    int pares = 0;
    printf("Ingrese %d numeros short:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%hd", &arreglo[i]);
        if (arreglo[i] % 2 == 0) pares++;
    }
    printf("Cantidad de numeros pares en el arreglo: %d\n\n", pares);

    // 5. Convertir un short a binario
    short valor;
    printf("5) Convertir un numero short a binario\n");
    printf("Ingrese un numero: ");
    scanf("%hd", &valor);
    shortToBinary(valor);
    //%hd se usa para half digit, o short. Se puede colocar PERO puede que no funcione

    return 0;
}
