#include <stdio.h>

int main(void)
{
    char ch;
    int x, y, opcao;

    //Comando switch case
    /*Permite fazer sele��es m�ltilplas com base no valor de uma vari�vel.

    //Forma Geral
    switch(vari�vel)
    {
        case valor1:
            conjunto de instru��es;
            break;
        case valor2:
            conjunto de instru��es;
            break;
        case valorn:
            conjunto de instru��es;
            break;
        default:
            conjunto de instru��es;
    }
    */

    //Exemplo 1
    printf("Digite uma vogal: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
            printf("Vogal a ou A\n");
            break;
        case 'e':
        case 'E':
            printf("Vogal e ou E\n");
            break;
        case 'i':
        case 'I':
            printf("Vogal i ou I\n");
            break;
        case 'o':
        case 'O':
            printf("Vogal o ou O\n");
            break;
        case 'u':
        case 'U':
            printf("Vogal u ou U\n");
            break;
        default:
            printf("sim eh vogal\n");
    }

    //Exemplo 2
    printf("Informe um valor inteiro: ");
    scanf("%d", &x);
    printf("Informe outro valor inteiro: ");
    scanf("%d", &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("%d + %d = %d", x, y, x+y);
            break;
        case 2:
            printf("%d - %d = %d", x, y, x-y);
            break;
        case 3:
            printf("%d * %d = %d", x, y, x*y);
            break;
        case 4:
            printf("%d / %d = %d", x, y, x/y);
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
