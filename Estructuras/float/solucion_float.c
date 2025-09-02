#include <stdio.h>
#include <math.h>

int main() {
    // 1. Área de un círculo
    float radio, area;
    printf("1) Calculo del area de un circulo\n");
    printf("Ingrese el radio: ");
    scanf("%f", &radio);
    area = 3.14 * radio * radio;
    printf("El area del circulo es: %.2f\n\n", area);

    // 2. Celsius a Fahrenheit
    float celsius, fahrenheit;
    printf("2) Conversion de Celsius a Fahrenheit\n");
    printf("Ingrese los grados Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius equivalen a %.2f Fahrenheit\n\n", celsius, fahrenheit);

    // 3. Promedio de tres números
    float n1, n2, n3, promedio;
    printf("3) Promedio de tres numeros\n");
    printf("Ingrese tres numeros reales separados por espacio: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    promedio = (n1 + n2 + n3) / 3;
    printf("El promedio es: %.2f\n\n", promedio);

    // 4. Comparación de dos números decimales
    float a, b;
    printf("4) Comparacion de dos numeros\n");
    printf("Ingrese dos numeros decimales separados por espacio: ");
    scanf("%f %f", &a, &b);
    if (a > b) {
        printf("%.2f es mayor que %.2f\n\n", a, b);
    } else if (a < b) {
        printf("%.2f es mayor que %.2f\n\n", b, a);
    } else {
        printf("Ambos numeros son iguales\n\n");
    }

    // 5. Raíz cuadrada
    float num, raiz;
    printf("5) Raiz cuadrada de un numero\n");
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    if (num >= 0) {
        raiz = sqrt(num);
        printf("La raiz cuadrada de %.2f es %.2f\n", num, raiz);
    } else {
        printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");
    }

    return 0;
}
