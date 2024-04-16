#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIO 5
#define MES 12
int main()
{
    int empresa[ANIO][MES];
    srand(time(NULL));
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            empresa[i][j] = rand() % 50000 + 10000;
        }
    }

    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            printf("%d \t", empresa[i][j]);
        }
        printf("\n");
    }
    return 0;
}