#include <stdio.h>

int main(void)
{
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    if(c >= 'a' && c <= 'z')
    {
        printf("Caractere eh uma letra minuscula\n");
    }
    else if(c >= 'A' && c <= 'Z')
    {
        printf("Caractere eh uma letra minuscula\n");
    }
    else if(c >= '0' && c <= '9')
    {
        printf("Caractere eh um numero\n");
    }
    else
    {
       printf("Caractere nao eh letra ou numero\n");
    }

    return 0;
}
