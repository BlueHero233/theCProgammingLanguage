/* 7) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.
Exemplo:
Informe o valor da base: 2
Informe o valor do expoente: 5
2*2*2*2*2=32
*/
#include <stdio.h>
int main(void)
{
    int base, expoente, resultado, i;
    for (i=1;i<expoente;i++)
    {
        resultado=resultado*base;
        printf("%d*", base);
    }
    printf("%d=%d\n", base, resultado);
    return 0;
}