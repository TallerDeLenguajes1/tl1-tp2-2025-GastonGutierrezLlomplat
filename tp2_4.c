#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
};

void listarPCs(struct compu pcs[], int cantidad)
{

    for (int i = 0; i <= cantidad; i++)
    {
        printf("-- COMPUTADORA %d --\n", i + 1);

        int aleatorioVelocidad = rand() % (3 - 1 + 1) + 1;
        pcs[i].velocidad = aleatorioVelocidad;
        printf("Velocidad: %dGHz\n", pcs[i].velocidad);

        int aleatorioAnio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].anio = aleatorioAnio;
        printf("Fecha: %d\n", pcs[i].anio);

        int aleatorioNucleos = rand() % (8 - 1 + 1) + 1;
        pcs[i].cantidad_nucleos = aleatorioNucleos;
        printf("Nucleos: %d\n", pcs[i].cantidad_nucleos);

        char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
        pcs[i].tipo_cpu = tipos[rand() % 6];
        printf("Procesador: %s\n\n", pcs[i].tipo_cpu);
    }
}

int main()
{

    srand(time(NULL));

    int cantidad = 4;
    struct compu computadoras[cantidad];

    listarPCs(computadoras, cantidad);

    return 0;
}