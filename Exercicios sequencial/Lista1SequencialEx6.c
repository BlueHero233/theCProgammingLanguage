#include <stdio.h>
/*Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca*/
int main (void)
{
    int a, b, c=0;
    printf("Informe o valor de A: \n");
    scanf("%d", &a);
    printf("Informe o valor de B: \n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("O valor de A eh %d \n", a);
    printf("O valor de B eh %d \n", b);
    return 0;
}
