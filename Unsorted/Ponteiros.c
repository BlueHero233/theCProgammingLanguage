#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* var, n=16;
    var=(int*)malloc(sizeof(int)*n); //bruh
    for (int i=0; i=n; i++)
    {
        var[i]=i;
        printf("%d \t", var[i]);
    }
    free(var);
    return 0;
}