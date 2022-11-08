#include <stdio.h>

int main(void)
{
    int x;

    for(x=0; x<=255; x++)
    {
        printf("%d: %c\t", x, x);
    }

    return 0;
}
