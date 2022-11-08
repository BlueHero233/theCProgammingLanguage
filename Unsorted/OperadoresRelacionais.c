#include <stdio.h>

int main(void)
{
    int a=5, b=3;

    //Forma Geral
    valor1 operador relacional valor2

    //Resultado da comparação
    0: quando a comparação é falsa
    1: quando a comparação é verdadeira

    //Operadores Relacionais
    >  maior que
    >= maior ou igual
    <  menor que
    <= menor ou igual
    == igual a
    != diferente de

    //Exemplos
    printf("%d > %d = %d\n", a, b, a > b);
    printf("%d >= %d = %d\n", a, b, a >= b);
    printf("%d < %d = %d\n", a, b, a < b);
    printf("%d <= %d = %d\n", a, b, a <= b);
    printf("%d == %d = %d\n", a, b, a == b);
    printf("%d != %d = %d\n", a, b, a != b);

    return 0;
}
