#include <stdio.h>
#include <math.h>

int main() {
    // 1. Calcular pi con la serie de Leibniz (1000 términos)
    //La serie es suma infinita donde los términos alternan entre suma y resta y tienen denominadores impares
    double pi = 0.0;
    int n; //n es int porque es el contador del for
    for (n = 0; n < 1000; n++) {
        if (n % 2 == 0) {
            pi += 1.0 / (2.0 * n + 1.0);
        } else {
            pi -= 1.0 / (2.0 * n + 1.0);
        }
    }
    pi *= 4.0;
    printf("1) Valor aproximado de pi con 1000 terminos: %.15f\n\n", pi);
    //%.15f es para especificar con 15 valores decimales

    // 2. Sumar dos números double
    double a, b;
    printf("2) Ingrese dos numeros (double) para sumar: ");
    scanf("%lf %lf", &a, &b);
    printf("   La suma es: %.6lf\n\n", a + b);
    //Primero se debe especificar el tipo de dato antes de usar scan
    //el orden de ingreso de los valores importa

    // 3. Calcular promedio de 5 números
    double num, suma = 0.0; 
    //Suma = 0.0 porque ya se sabe el valor "inicial" para luego calcular el promedio
    printf("3) Ingrese 5 numeros (double) para calcular el promedio:\n");
    for (int i = 0; i < 5; i++) {
        printf("   Numero %d: ", i + 1);
        scanf("%lf", &num);
        suma += num;
        //bucle para cada uno de los datos
    }
    printf("   El promedio es: %.6lf\n\n", suma / 5.0);
    //Se hace la division de forma directa en el propio texto en vez de guardarlo en otra variable

    // 4. Determinar si un número es positivo, negativo o cero
    double x;
    printf("4) Ingrese un numero (double) para evaluar: ");
    scanf("%lf", &x);
    if (x > 0) {
        printf("   El numero es POSITIVO.\n\n");
    } else if (x < 0) {
        printf("   El numero es NEGATIVO.\n\n");
    } else {
        printf("   El numero es CERO.\n\n");
    }

    // 5. Calcular potencia (base^exponente)
    double base, exponente, potencia= 1.0;
    printf("5) Ingrese la base y el exponente (double): ");
    scanf("%lf %lf", &base, &exponente);
    //double potencia = pow(base, exponente);
    for (int i = 0; i < exponente; i++) {
        potencia *= base;
    }
    printf("   Resultado: %.6lf ^ %.6lf = %.6lf\n", base, exponente, potencia);

    return 0;
}