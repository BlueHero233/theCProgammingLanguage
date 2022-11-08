#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX
#include <time.h> //biblioteca necessária para time()

int main(void)
{
    int i;
    float x;

    srand(time(NULL));

    //Para gerar valores float entre 0 e 1
    for(i=1; i<=20; i++)
    {
        x = (float)(rand()) / RAND_MAX;
        printf("%.1f\n", x);

    }

    return 0;
}



