#include <stdio.h>

int main()
{

    int entrada[10], saida[10];
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &entrada[i]);
    }

    printf("Entrada: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", entrada[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {

        saida[i] = entrada[i] + entrada[i + 1];

        for (j = i; j < 9; j++)
        {
            entrada[j] = entrada[j + 1];
        }

        printf("Saída: ");
        for (k = 0; k <= i; k++)
        {
            printf("%d ", saida[k]);
        }
        printf("\n");
    }

    return 0;
}