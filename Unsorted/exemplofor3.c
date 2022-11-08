#include <stdio.h>
int main(void)
{
    int i, soma=0, produto=1, contPar=0, contImpar=0;
    for(i=0; i<=10; i++)
    {
        if(i%2==0)
        {
            printf("%d\t", i);
            soma=soma+1;
        }
    }
}