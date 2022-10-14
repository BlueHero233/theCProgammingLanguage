/*Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.*/
#include <stdio.h>
int main(void)
{
    int num=1, i;
    float media, j;
    for (i=500;i>=num;--i)
    {
        if (i%4==0||i%10==0)
        {
            printf("%d\t", i);
            media=media+i;
            j++;
        }
    }
    media=media/j;
    printf("A media eh: %.2f\n", media);
    return 0;
}