#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIO 5
#define MES 12
int main()
{
    int empresa[ANIO][MES];
    int suma = 0;
    float promedio = 0;
    int elementos = ANIO * MES;
    int min = 51000;
    int max = 0;
    int mesMax = 0, mesMin = 0, anioMax = 0, anioMin = 0;
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
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            suma = suma + empresa[i][j];
        }
        promedio = suma / elementos;
        printf("\nPromedio de ganancia por anio %d: %.2f ", i + 1, promedio);
        suma = 0;
    }

    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            if (empresa[i][j] < min)
            {
                min = empresa[i][j];
                mesMin = i + 1;
                anioMin = j + 1;
            }
            if (empresa[i][j] > max)
            {
                max = empresa[i][j];
                mesMax = i + 1;
                anioMax = j + 1;
            }
        }
    }
    printf("\nEl valor maximo obtenido fue de %d, el mes %d, año %d", max, mesMax, anioMax);
    printf("\nEl valor minimo obtenido fue de %d, el mes %d, año %d", min, mesMin, anioMin);
    return 0;
}