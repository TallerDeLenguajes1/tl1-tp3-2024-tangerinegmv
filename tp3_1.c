#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANIO 5
#define MES 12
void cargarMatriz(int matriz[ANIO][MES]);
void mostrarMatriz(int matriz[ANIO][MES]);
void calcularPromedioAnual(int matriz[ANIO][MES]);
void maximoMinimo(int matriz[ANIO][MES]);
int main()
{
    int empresa[ANIO][MES];

    cargarMatriz(empresa);
    mostrarMatriz(empresa);
    calcularPromedioAnual(empresa);
    maximoMinimo(empresa);
    return 0;
}
void cargarMatriz(int matriz[ANIO][MES])
{
    srand(time(NULL));
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            matriz[i][j] = rand() % 50000 + 10000;
        }
    }
}

void mostrarMatriz(int matriz[ANIO][MES])
{
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularPromedioAnual(int matriz[ANIO][MES])
{
    int suma = 0;
    float promedio = 0;
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            suma = suma + matriz[i][j];
        }
        promedio = suma / 12;
        printf("\nPromedio de ganancia por anio %d: %.2f ", i + 1, promedio);
        suma = 0;
    }
}

void maximoMinimo(int matriz[ANIO][MES])
{
    int min = 51000;
    int max = 0;
    int mesMax = 0, mesMin = 0, anioMax = 0, anioMin = 0;
    for (int i = 0; i < ANIO; i++)
    {
        for (int j = 0; j < MES; j++)
        {
            if (matriz[i][j] < min)
            {
                min = matriz[i][j];
                mesMin = i + 1;
                anioMin = j + 1;
            }
            if (matriz[i][j] > max)
            {
                max = matriz[i][j];
                mesMax = i + 1;
                anioMax = j + 1;
            }
        }
    }
    printf("\nEl valor maximo obtenido fue de %d, el mes %d, año %d", max, mesMax, anioMax);
    printf("\nEl valor minimo obtenido fue de %d, el mes %d, año %d", min, mesMin, anioMin);
}