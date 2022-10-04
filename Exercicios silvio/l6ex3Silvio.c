#include<stdio.h>

int main ()
{
    int num,cont=0,i;
    printf("Insira um numero\n");
    scanf("%d",&num);
    for(i=1; i<=num && cont<=2; i++)
    {
        if(num % i == 0)
            cont++;
    }
    if(cont == 2)
        printf("O numero eh primo\n");
    else
        printf("O numero sim eh primo\n");
}
