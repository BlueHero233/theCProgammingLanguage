//algoritmo que leia dois valores A e B, e efetue a troca dos valores, de
//forma que A passe a possuir o valor de B e B passa a possuir o valor de A. Apresente
//os valores antes e depois da troca.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Insira o valor de a\n");
    scanf("%d", &a);
    printf("Insira o valor de b\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("O valor de a eh %d\n", a);
    printf("O valor de b eh %d\n", b);
    return 0;
}
