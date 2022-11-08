#include <stdio.h>
#include <stdlib.h>//biblioteca necessaria para rand()e RAND_MAX
#include <time.h> //biblioteca necessaria para time()

int main(void)
{
    int x, i, limPositivo=10, limNegativo=10;
    float y;

    srand(time(NULL));

    printf("Intervalo da rand: [0 a %d]\n", RAND_MAX);

    printf("\nGerando valores aleatorios entre 0 e RAND_MAX\n");
    for(i=1; i<=10; i++)
    {
        x = rand();
        printf("%d\n", x);
    }

    printf("\nGerando valores aleatorios entre 0 e 10\n");
    for(i=1; i<=10; i++)
    {
        x = rand() % 11;
        printf("%d\n", x);
    }

    printf("\nGerando valores aleatorios entre 1 e 10\n");
    for(i=1; i<=10; i++)
    {
        x = rand() % 10 + 1;
        printf("%d\n", x);
    }

    printf("\nGerando valores aleatorios entre 5 e 15\n");
    for(i=1; i<=10; i++)
    {
        x = rand() % 11 + 5;
        printf("%d\n", x);
    }

    printf("\nGerando valores aleatorios entre 1 e -1\n");
    for(i=1; i<=10; i++)
    {
        x = rand() % 3 - 1;
        printf("%d\n", x);
    }

    printf("\nGerando valores aleatorios entre 0 e 1\n");
    for(i=1; i<=10; i++)
    {
        y = (float)(rand()) / RAND_MAX;
        printf("%.1f\n", y);
    }

    printf("\nGerando valores aleatorios entre positivos e negativos\n");
    for(i=1; i<=10; i++)
    {
        x = rand() % (limPositivo + limNegativo + 1) - limNegativo;
        printf("%d\n", x);
    }

    return 0;
}
