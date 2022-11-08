#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    /* int var=4 inteiro com nome var assume valor de quatro
        int* ponteiroVar=&var ponteiro inteiro com nome ponteiroVar assume o valor do endereco de memoria da variavel var */
    int* var, n=16;
    var=(int*)malloc(sizeof(int)*n);
    for (int i=0; i=n; i++)
    {
        var[i]=i;
        printf("%d\t", var[i]);
    }
    free(var);
    return 0;
}