#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, i;

    srand(time(NULL));

    for(i=1; i<=20; i++)
    {
        x = rand()%11;
        printf("Valor de x: %d\n", x);
    }

    return 0;
}
