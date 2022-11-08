//para caso 1, ordem crescente, para caso 2, ordem decrescente, para caso 3, menor maior medio
#include <stdio.h>
#include <ctype.h>
int main()
{
    char opcao;
    int a, b, c;
    printf("Insira a opcao (A, B ou C)\n");
    scanf("%c", &opcao);
    toupper(opcao);
    printf("Insira os valores de a, b e c\n");
    scanf("%d%d%d", &a, &b, &c);
    switch (opcao)
    {
    case 'A':
        if (a<b&&a<c)
        {
            if(b<c)
            printf("%d %d %d", a, b, c);
            else
            printf("%d %d %d", a, c, b);
        }
        if (b<a&&b<c)
        {
            if(a<c)
            printf("%d %d %d", b, a, c);
            else
            printf("%d %d %d", b, c, a);
        }
        if (c<a&&c<b)
        {
            if (a<b)
            printf("%d %d %d", c, a, b);
            else
            printf("%d %d %d", c, b, a);
        }
        break;
    case 'B':
        if (a>b&&a>c)
        {
            if(b>c)
            printf("%d %d %d", a, b, c);
            else
            printf("%d %d %d", a, c, b);
        }
        if (b>a&&b>c)
        {
            if(a>c)
            printf("%d %d %d", b, a, c);
            else
            printf("%d %d %d", b, c, a);
        }
        if (c>a&&c>b)
        {
            if (a>b)
            printf("%d %d %d", c, a, b);
            else
            printf("%d %d %d", c, b, a);
        }
        break;
    case 'C':
        if (a<b&&a<c)
        {
            if(b<c)
            printf("%d %d %d", a, c, b);
            else
            printf("%d %d %d", a, b, c);
        }
        if (b<a&&b<c)
        {
            if(a<c)
            printf("%d %d %d", b, c, a);
            else
            printf("%d %d %d", b, a, c);
        }
        if (c<a&&c<b)
        {
            if (a<b)
            printf("%d %d %d", c, b, a);
            else
            printf("%d %d %d", c, a, b);
        }
        break;
    default:
        break;
    return 0;
}
