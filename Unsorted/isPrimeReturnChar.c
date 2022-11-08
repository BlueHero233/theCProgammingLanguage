#include <stdio.h>

char primo(int num);

int main(void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(primo(num) == 's')
    {
        printf("%d eh primo\n", num);
    }
    else
    {
        printf("%d nao eh primo\n", num);
    }

    return 0;
}

char primo(int num)
{
    int contDiv=0, i;
    char resultado;

    for(i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
            contDiv++;
        }
    }

    if(contDiv == 2)
    {
        resultado = 's';
    }
    else
    {
        resultado = 'n';
    }

    return(resultado);
}
