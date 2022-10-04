#include <stdio.h>
int main ()
{
    int n1,n2,aux,c=0,x;

    printf("Insira o primeiro numero\n");
    scanf("%d",&n1);

    printf("Insira o segundo numero\n");
    scanf("%d",&n2);

    x = n1;

    while(x >= 10)
    {
        aux = x % 10;
        x   = x / 10;

        c = (c + aux) * 10;
    }
    c = c + x;

    if(c == n2)
        printf("TRUE");
    else
        printf("FALSE");
}