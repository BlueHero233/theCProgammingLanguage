#include <stdio.h>

int main(void)
{
    int x, y;

    /*Comando break:
    interromper a repeti��o de qualquer comando de la�o (while, for ou
    do-while)

    Forma geral:
    repeti��o(condi��o1)
    {
        if(condi��o2)
        {
            break;
        }
    }
    */

    printf("Exemplo 1\n");

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    while(x <= y)
    {
        if(x == 8)
        {
            break;
        }
        printf("x: %d\n", x);
        x++;
    }

    return 0;
}
