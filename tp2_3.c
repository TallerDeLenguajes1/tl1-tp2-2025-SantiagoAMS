#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main()
{

    srand(time(NULL));
    int i, j;
    int **pu = (int **)malloc(sizeof(int*) * N);

    for (i = 0; i < N; i++)
    {
        pu[i] = (int *)malloc(sizeof(int) * M);

        for (j = 0; j < M; j++)
        {
            pu[i][j] = 1 + rand() % 100;
            printf("%d\t", pu[i][j]); 
        }
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        free(pu[i]);
    }
}