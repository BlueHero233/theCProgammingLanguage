#include <stdio.h>
#include <stdlib.h>//biblioteca necess�ria para rand()e RAND_MAX
#include <time.h> //biblioteca necess�ria para time()

int main(void)
{
    int x, i;

    srand(time(NULL));

    //Para gerar valores entre 1 e -1
    for(i=1; i<=20; i++)
    {
        x = rand() % 3 - 1;
     	printf("%d\n", x);
    }

    return 0;
}



