#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX

int main(void)
{
    int x, i;

    printf("Intervalo da rand: [0 a %d]\n", RAND_MAX);

    //Gerando valores aleatórios entre 0 e RAND_MAX
    for(i=1; i<=20; i++)
    {
        x = rand();
        printf("%d\n", x);
    }

    return 0;
}
