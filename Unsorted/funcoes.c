#include <stdio.h>
int quadrado(int a);
int main(void)
{
    int num, soma;
    printf("Informe um numero\n");
    scanf("%d", &num);
    printf("Quadrado do numero %d eh: %d\n", num, quadrado(num));
    soma=quadrado(num)+num;
    printf("A soma do quadrado mais o numero eh: %d\n", soma);
    return 0;
}
int quadrado(int a)
{
    return a*a;
}