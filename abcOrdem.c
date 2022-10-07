#include <stdio.h>

int main()
{
    int i;
    printf("Insira os valor de i\n");
    scanf("%d", &i);
    float a, b, c;
    printf("Insira os valores de a, b e c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (i==1)
    {
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
    }
    if (i==2)
    {
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
    }
    if (i==3)
    {
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
    }
    return 0;
}
