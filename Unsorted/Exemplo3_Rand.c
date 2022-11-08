#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX
#include <time.h> //biblioteca necessária para time()

int main(void)
{
    int x, i;

    srand(time(NULL));

    //Gerando valores aleatórios entre 0 e 10
    for(i=1; i<=20; i++)
    {
        x = rand() % (10 + 1);
        printf("%d\n", x);
    }
    return 0;
}

