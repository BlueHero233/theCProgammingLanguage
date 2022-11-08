#include <stdio.h>

int main(void)
{
    int num, contDiv=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            contDiv++;
            break;
        }
    }

    if(contDiv == 0 && num != 1)
    {
        printf("%d eh primo\n", num);
    }
    else
    {
        printf("%d nao eh primo\n", num);
    }

    return 0;
}
