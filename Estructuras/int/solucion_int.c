#include <stdio.h>

int main() {
    // 1. Suma de dos enteros
    int x, y, suma;
    printf("1) Suma de dos enteros\n");
    printf("Ingrese dos numeros enteros separados por espacio: ");
    scanf("%d %d", &x, &y);
    suma = x + y;
    printf("La suma de %d y %d es: %d\n\n", x, y, suma);

    // 2. Par o impar
    int n;
    printf("2) Determinar si un numero es par o impar\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d es par\n\n", n);
    } else {
        printf("%d es impar\n\n", n);
    }

    // 3. Factorial de un número
    int num, i;
    unsigned long long factorial = 1; // soporta factoriales más grandes
    //unsigned le quita el signo, es decir solo usa positivos
    //long long se usa para numeros demasiado grandes
    printf("3) Factorial de un numero\n");
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("No existe factorial de un numero negativo.\n\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %llu\n\n", num, factorial);
    }

    // 4. Mayor de tres enteros
    int a, b, c, mayor;
    printf("4) Mayor de tres numeros enteros\n");
    printf("Ingrese tres numeros enteros separados por espacio: ");
    scanf("%d %d %d", &a, &b, &c);
    mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    printf("El mayor de los tres numeros es: %d\n\n", mayor);

    // 5. Contar del 1 al 100
    printf("5) Conteo del 1 al 100:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
