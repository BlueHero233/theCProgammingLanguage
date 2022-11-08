#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX
#include <time.h> //biblioteca necessária para time()

int main(void)
{
    int x, i;

    srand(time(NULL));

    //Para gerar valores entre 5 e 15
    for(i=1; i<=20; i++)
    {
        x = rand() % (10 + 1) + 5;
        printf("%d\n", x);
    }

    return 0;
}



