#include <stdio.h>
#include <stdlib.h>//biblioteca necess�ria para rand()e RAND_MAX
#include <time.h> //biblioteca necess�ria para time()

int main(void)
{
    int x, i;

    srand(time(NULL));

    //Gerando valores aleat�rios entre 0 e 10
    for(i=1; i<=20; i++)
    {
        x = rand() % (10 + 1);
        printf("%d\n", x);
    }
    return 0;
}

