#include <stdio.h>
#include <stdlib.h>//biblioteca necess�ria para rand()e RAND_MAX
#include <time.h> //biblioteca necess�ria para time()

int main(void)
{
    int i, x, limPositivo=5, limNegativo=5;

    srand(time(NULL));

    //Para gerar valores float entre 0 e 1
    for(i=1; i<=20; i++)
    {
        x = rand() % (limPositivo + limNegativo + 1) - limNegativo;
        printf("%d\n", x);

    }

    return 0;
}



