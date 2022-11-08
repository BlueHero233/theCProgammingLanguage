#include <stdio.h>
int quadrado(int a);
int main(void)
{
    int num, soma, i;
    printf("Informe um numero\n");
    scanf("%d", &num);
    printf("Quadrado do numero %d eh: %d\n", num, quadrado(num));
    soma=quadrado(num)+num;
    printf("A soma do quadrado mais o numero eh: %d\n", soma);
    printf("Quadrado do numero de 1 ate 15\n");
    for (i=1;i<=15;i++)
    {
        printf("%d\t%d\n", i, quadrado(i));
    }
    return 0;
}
int quadrado(int a)
{
    return a*a;
}