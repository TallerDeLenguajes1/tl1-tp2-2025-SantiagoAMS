#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu
{
    int velocidad;        // Velocidad de procesamiento en GHz (valor entre 1 y 3)
                          // [1,3]
    int anio;             // Año de fabricación (valor entre 2015 y 2024)
                          // [2015,2024]
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
                          // [1,8]
    char *tipo_cpu;       // Tipo de procesador (apuntador a cadena de caracteres)
                          // Datos generados
};

#define N 5

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {
        "Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};


    struct compu * compus = (struct compu*)malloc(sizeof(struct compu)*N);

    for (int i = 0; i < N; i++)
    {
        int velo = 1 + rand() % 3;
        int anio = 2015 + rand() % (2024 - 2015);
        int nucleos = rand() % 8;

        compus[i].velocidad = velo;
        compus[i].anio = anio;
        compus[i].cantidad_nucleos = nucleos;
        compus[i].tipo_cpu = tipos[(rand() % 6)];
    }

    free(compus);
}
