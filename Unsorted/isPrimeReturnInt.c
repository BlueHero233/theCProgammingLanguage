#include <stdio.h>
int primo(int num);
int main(void)
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(primo(num) == 0 && num != 1)
    {
        printf("%d eh primo\n", num);
    }
    else
    {
        printf("%d nao eh primo\n", num);
    }
    return 0;
}
int primo(int num)
{
    int contDiv=0, i;
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            contDiv++;
            break;
        }
    }
    return(contDiv);
}
