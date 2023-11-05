#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int matriz[][4], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[][4], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%*d", 4, matriz[i][j]);
        }
        printf("\n");
    }
}

int **somarMatriz(int matrizA[][4], int matrizB[][4], int n)
{
    int **matrizC = malloc(n * sizeof(int *));
    int i, j;

    for (i = 0; i < n; i++)
    {
        matrizC[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    return matrizC;
}

int **subtrairMatriz(int matrizA[][4], int matrizB[][4], int n)
{
    int **matrizC = malloc(n * sizeof(int *));
    int i, j;

    for (i = 0; i < n; i++)
    {
        matrizC[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    return matrizC;
}

int **multiplicarMatriz(int matrizA[][4], int matrizB[][4], int n)
{
    int **matrizC = malloc(n * sizeof(int *));
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        matrizC[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++)
        {
            matrizC[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    return matrizC;
}

int main()
{

    int matrizA[4][4], matrizB[4][4], matrizC[4][4];
    char operacao[10];
    int i, j;

    lerMatriz(matrizA, 4);
    lerMatriz(matrizB, 4);

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0)
    {
        matrizC = somarMatriz(matrizA, matrizB, 4);
    }
    else if (strcmp(operacao, "sub") == 0)
    {
        matrizC = subtrairMatriz(matrizA, matrizB, 4);
    }
    else if (strcmp(operacao, "mult") == 0)
    {
        matrizC = multiplicarMatriz(matrizA, matrizB, 4);
    }
    else
    {
        printf("Operação inválida.\n");
        return 1;
    }

    imprimirMatriz(matrizC, 4);

    return 0;
}