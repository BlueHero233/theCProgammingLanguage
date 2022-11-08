#include <stdio.h>

int main(void)
{
    int x, y;

    /*Comando break:
    interromper a repetição de qualquer comando de laço (while, for ou
    do-while)

    Forma geral:
    repetição(condição1)
    {
        if(condição2)
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
