/*1) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série de
Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc.
*/
#include <stdio.h>
int main(void)
{
    int n, a=0, b=1, c, i;
    printf("Insira o n numero de fibonacci\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        {
            if (i==0)
                printf("%d ",b);
            c=a+b;
            a=b;
            b=c;
            printf("%d ", c);
        }
    return 0;
}