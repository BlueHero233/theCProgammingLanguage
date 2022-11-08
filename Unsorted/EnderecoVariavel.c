
/*
Se a declara��o j� apresenta um valor inicial para a vari�vel, o compilador o atribui �
vari�vel antes de iniciar a execu��o do algoritmo.
N�o existe um �valor padr�o� na linguagem C para vari�veis que n�o recebem um valor
inicial j� na sua declara��o.
H� um acesso bruto � mem�ria e se o programador n�o inicializar a vari�vel conter� o que tiver na mem�ria
(lixo de mem�ria) o que foi deixado por aplica��o que tinha aquela �rea reservada.

O endere�o de uma vari�vel � dado pelo operador &;
Se x � uma v�ri�vel, &x � seu endere�o
*/
#include <stdio.h>

int main()
{
    int a,b,c=3;

    //valor das vari�veis
    printf("Valor da variavel A: %d\n", a);
    printf("Valor da variavel B: %d\n", b);
    printf("Valor da variavel C: %d\n", c); //3

    //endere�os das vari�veis
    printf("Endereco da variavel A: %p\n ", &a);
    printf("Endereco da variavel B: %p\n ", &b);
    printf("Endereco da variavel C: %p\n ", &b);
    return 0;
}
