#include <stdio.h>
int main(void)
{
    char tipo;
    printf("Informe o sabor da pizza\n");
    scanf("%c", &tipo);
    switch (tipo)
    {
    case 'm':
    case 'M':
        printf("Mussarela");
        break;
    default:
        printf("Incorreto");
    }
    return 0;
}