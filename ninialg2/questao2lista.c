#include <stdio.h>
#include <stdlib.h>

struct jogador
{
    char nome[30];
    char posicao;
    int forca;
};

float calcularForca(struct jogador *jogadores, int n)
{
    float forca = 0;
    int i;

    forca += 8 * jogadores[0].forca;

    forca += 10 * (jogadores[1].forca + jogadores[2].forca);

    forca += 5 * (jogadores[3].forca + jogadores[4].forca);

    forca += 8 * (jogadores[5].forca + jogadores[6].forca);

    forca += 11 * (jogadores[7].forca + jogadores[8].forca);

    forca += 12 * (jogadores[9].forca + jogadores[10].forca);

    return forca;
}

int main()
{

    struct jogador time1[12], time2[12];
    char nomeTime1[30], nomeTime2[30];
    int i;

    printf("Nome do primeiro time: ");
    scanf("%s", nomeTime1);

    for (i = 0; i < 12; i++)
    {
        printf("Nome do jogador %d: ", i + 1);
        scanf("%s;%c;%d", time1[i].nome, &time1[i].posicao, &time1[i].forca);
    }

    printf("Nome do segundo time: ");
    scanf("%s", nomeTime2);

    for (i = 0; i < 12; i++)
    {
        printf("Nome do jogador %d: ", i + 1);
        scanf("%s;%c;%d", time2[i].nome, &time2[i].posicao, &time2[i].forca);
    }

    if (n != 12)
    {
        printf("Erro: número de jogadores inválido.\n");
        exit(1);
    }

    float forcaTime1 = calcularForca(time1, 12);

    float forcaTime2 = calcularForca(time2, 12);

    printf("Força do %s: %.2f\n", nomeTime1, forcaTime1);
    printf("Força do %s: %.2f\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2)
    {
        printf("%s é o mais forte.\n", nomeTime1);
    }
    else
    {
        printf("%s é o mais forte.\n", nomeTime2);
    }

    return 0;
}