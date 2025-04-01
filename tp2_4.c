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

int main()
{
    char tipos[6][10] = {
        "Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

        
}