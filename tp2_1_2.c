#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{

    int i;
    double *punt = (double*) malloc(sizeof(double)*N);
    

    for (i = 0; i < N; i++)
    {
        punt[i] = 1 + rand() % 100;
        printf("[%i] = %f\n",i, punt[i]);
    }
    free(punt);
    return 0;
}