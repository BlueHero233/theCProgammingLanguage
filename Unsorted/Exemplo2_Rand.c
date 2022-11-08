#include <stdio.h>
#include <stdlib.h>//biblioteca necessária para rand()e RAND_MAX
#include <time.h> //biblioteca necessária para time()

int main(void)
{
    int x, i;

    srand(time(NULL)); //usando a inicialização da rand com a hora do sistema

    //Gerando valores aleatórios entre 0 e RAND_MAX
    for(i=1; i<=20; i++)
    {
        x = rand();
        printf("%d\n", x);
    }

    return 0;
}
