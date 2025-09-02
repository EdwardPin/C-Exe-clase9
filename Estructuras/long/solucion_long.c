#include <stdio.h>

// Función para calcular el factorial de un número usando long
long factorial(long n) {
    long resultado = 1;
    for (long i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función para determinar si un número es primo
int esPrimo(long n) {
    if (n <= 1) return 0; // No es primo
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Encontró divisor
    }
    return 1; // Es primo
}

int main() {
    // 1. Factorial de un número
    long num;
    printf("1) Factorial de un numero usando long\n");
    printf("Ingrese un numero: ");
    scanf("%ld", &num);
    if (num < 0) {
        printf("No existe factorial de un numero negativo.\n\n");
    } else {
        printf("El factorial de %ld es: %ld\n\n", num, factorial(num));
    }

    // 2. Suma de dos números long
    long a, b, suma;
    printf("2) Suma de dos numeros long\n");
    printf("Ingrese dos numeros: ");
    scanf("%ld %ld", &a, &b);
    suma = a + b;
    printf("La suma de %ld y %ld es: %ld\n\n", a, b, suma);

    // 3. Contar impares en un arreglo
    int n;
    printf("3) Contar numeros impares en un arreglo\n");
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    long arreglo[n];
    int contador = 0;
    printf("Ingrese %d numeros long:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &arreglo[i]);
        if (arreglo[i] % 2 != 0) contador++;
    }
    printf("La cantidad de numeros impares en el arreglo es: %d\n\n", contador);

    // 4. Determinar si un número long es primo
    long p;
    printf("4) Verificar si un numero es primo\n");
    printf("Ingrese un numero: ");
    scanf("%ld", &p);
    if (esPrimo(p)) {
        printf("%ld es primo\n\n", p);
    } else {
        printf("%ld no es primo\n\n", p);
    }

    // 5. Multiplicación de dos números long
    long x, y, producto;
    printf("5) Multiplicacion de dos numeros long\n");
    printf("Ingrese dos numeros: ");
    scanf("%ld %ld", &x, &y);
    producto = x * y;
    printf("El producto de %ld y %ld es: %ld\n", x, y, producto);

    return 0;
}
