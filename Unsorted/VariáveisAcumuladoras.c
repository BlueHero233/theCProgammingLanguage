#include <stdio.h>

int main(void)
{
    int i, soma=0, produto=1;

    //Variáveis acumuladoras são utilizadas em dois tipos de situações:
    //- Para a realização de somatórios (normalmente iniciadas em 0).
    //- Para a realização de produtórios (normalmente iniciadas em 1).

    printf("=== Exemplo de Somatorio ===\n");
    for(i=0; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
            soma = soma + i; //soma é uma variável acumuladora
        }
    }
    printf("A soma dos numeros pares eh: %d\n", soma);

    printf("\n=== Exemplo de Produtorio ===\n");
    for(i=1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
            produto = produto * i;
        }
    }
    printf("O produto dos numeros pares eh: %d\n", produto);

    return 0;
}
