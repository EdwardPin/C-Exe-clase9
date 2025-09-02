#include <stdio.h>
#include <string.h>

// 1) Struct estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// 2) Struct libro
struct Libro {
    char titulo[100];
    char autor[50];
    int anio;
};

// 3 y 5) Struct persona
struct Persona {
    char nombre[50];
    int edad;
};

// 4) Struct notas
struct Nota {
    char nombre[50];
    float calificacion;
};

int main() {
    // 1. Estudiante
    struct Estudiante est = {"Juan Perez", 20, 8.7};
    printf("1) Estudiante:\nNombre: %s\nEdad: %d\nPromedio: %.2f\n\n",
           est.nombre, est.edad, est.promedio);

    // 2. Arreglo de libros
    struct Libro libros[5] = {
        {"Cien anios de soledad", "Gabriel Garcia Marquez", 1967},
        {"Don Quijote", "Miguel de Cervantes", 1605},
        {"La sombra del viento", "Carlos Ruiz Zafon", 2001},
        {"El principito", "Antoine de Saint-Exupery", 1943},
        {"Rayuela", "Julio Cortazar", 1963}
    };

    printf("2) Lista de libros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Libro %d: %s, Autor: %s, Anio: %d\n",
               i + 1, libros[i].titulo, libros[i].autor, libros[i].anio);
    }
    printf("\n");

    // 3. Datos de una persona ingresados por el usuario
    struct Persona p1;
    printf("3) Ingrese nombre de la persona: ");
    fgets(p1.nombre, sizeof(p1.nombre), stdin);
    p1.nombre[strcspn(p1.nombre, "\n")] = 0; // quitar salto de línea
    printf("Ingrese edad: ");
    scanf("%d", &p1.edad);
    getchar(); // limpiar buffer
    printf("Persona: Nombre = %s, Edad = %d\n\n", p1.nombre, p1.edad);

    // 4. Promedio de notas
    int n;
    printf("4) Calculo del promedio de estudiantes\n");
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &n);
    struct Nota notas[n];
    float suma = 0;
    for (int i = 0; i < n; i++) {
        printf("Nombre del estudiante %d: ", i + 1);
        getchar(); // limpiar buffer
        fgets(notas[i].nombre, sizeof(notas[i].nombre), stdin);
        notas[i].nombre[strcspn(notas[i].nombre, "\n")] = 0;
        printf("Calificacion: ");
        scanf("%f", &notas[i].calificacion);
        suma += notas[i].calificacion;
    }
    printf("El promedio de calificaciones es: %.2f\n\n", suma / n);

    // 5. Comparar dos personas
    struct Persona p2;
    printf("5) Comparar dos personas\n");
    printf("Ingrese nombre de la segunda persona: ");
    getchar(); // limpiar buffer
    fgets(p2.nombre, sizeof(p2.nombre), stdin);
    p2.nombre[strcspn(p2.nombre, "\n")] = 0;
    printf("Ingrese edad: ");
    scanf("%d", &p2.edad);

    if (strcmp(p1.nombre, p2.nombre) == 0 && p1.edad == p2.edad) {
        printf("Las dos personas son iguales.\n");
    } else {
        printf("Las dos personas son diferentes.\n");
    }

    return 0;
}
