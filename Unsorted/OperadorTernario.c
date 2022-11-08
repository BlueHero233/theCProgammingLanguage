#include <stdio.h>

int main(void)
{
    int x, y, maior;

    /*//Operador ?:
    eh tipicamente usado para fazer atribuicoes condicionais

    //Forma Geral
    variavel = condicao ? expressao1 : expressao2;
    */
    //Exemplo 1
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    maior = x > y ? x : y;
    printf("Maior = %d\n", maior);

    //Exemplo 2
    x > y ? printf("Maior = %d\n", x) : printf("Maior = %d\n", y);

    return 0;
}
