#include <stdio.h>

// 1. Enum para los días de la semana
enum DiaSemana {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

// 2. Enum para los meses del año
enum Mes {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO,
          JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

// 3. Enum para semáforo
enum Semaforo {ROJO, AMARILLO, VERDE};

// 4. Enum para niveles de dificultad
enum Dificultad {FACIL, MEDIO, DIFICIL};

// 5. Enum para recorrer en ciclo
enum Colores {ROJO_C, VERDE_C, AZUL_C, AMARILLO_C, NEGRO_C};

int main() {
    // 1. Día de la semana
    enum DiaSemana dia = MIERCOLES;
    printf("1) Dia de la semana (valor %d): ", dia);
    switch (dia) {
        case LUNES: printf("Lunes\n\n"); break;
        case MARTES: printf("Martes\n\n"); break;
        case MIERCOLES: printf("Miercoles\n\n"); break;
        case JUEVES: printf("Jueves\n\n"); break;
        case VIERNES: printf("Viernes\n\n"); break;
        case SABADO: printf("Sabado\n\n"); break;
        case DOMINGO: printf("Domingo\n\n"); break;
    }
    //Case mira cada uno de los casos dentro de cada "grupo" para determinar cual es el correcto

    // 2. Mes del año
    enum Mes mes = 7; // Julio
    printf("2) Mes del año (numero %d): ", mes);
    switch (mes) {
        case ENERO: printf("Enero\n\n"); break;
        case FEBRERO: printf("Febrero\n\n"); break;
        case MARZO: printf("Marzo\n\n"); break;
        case ABRIL: printf("Abril\n\n"); break;
        case MAYO: printf("Mayo\n\n"); break;
        case JUNIO: printf("Junio\n\n"); break;
        case JULIO: printf("Julio\n\n"); break;
        case AGOSTO: printf("Agosto\n\n"); break;
        case SEPTIEMBRE: printf("Septiembre\n\n"); break;
        case OCTUBRE: printf("Octubre\n\n"); break;
        case NOVIEMBRE: printf("Noviembre\n\n"); break;
        case DICIEMBRE: printf("Diciembre\n\n"); break;
    }

    // 3. Semáforo
    enum Semaforo luz = VERDE;
    printf("3) Estado del semaforo: ");
    switch (luz) {
        case ROJO: printf("Rojo - Alto\n\n"); break;
        case AMARILLO: printf("Amarillo - Precaucion\n\n"); break;
        case VERDE: printf("Verde - Avanzar\n\n"); break;
    }

    // 4. Dificultad de un juego
    enum Dificultad nivel = MEDIO;
    printf("4) Nivel de dificultad: ");
    switch (nivel) {
        case FACIL: printf("Facil\n\n"); break;
        case MEDIO: printf("Medio\n\n"); break;
        case DIFICIL: printf("Dificil\n\n"); break;
    }

    // 5. Recorrer enum con un ciclo
    printf("5) Colores disponibles:\n");
    for (enum Colores c = ROJO_C; c <= NEGRO_C; c++) {
        switch (c) {
            case ROJO_C: printf("   Rojo\n"); break;
            case VERDE_C: printf("   Verde\n"); break;
            case AZUL_C: printf("   Azul\n"); break;
            case AMARILLO_C: printf("   Amarillo\n"); break;
            case NEGRO_C: printf("   Negro\n"); break;
        }
    }

    return 0;
}
