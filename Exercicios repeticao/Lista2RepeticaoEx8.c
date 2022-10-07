/* Um número abundante é aquele cuja soma dos seus divisores (excluído o próprio número) é maior do que ele
mesmo. Por exemplo, o número 12 é abundante, pois se somarmos os seus divisores (1, 2, 3, 4 e 6) obteremos o valor
16 e este é maior do que o próprio número. Já o número 10 não é abundante, pois a somatória dos seus divisores (1, 2
e 5) é menor do que 10. Também o número 6 não é abundante, pois a soma de seus divisores (1, 2 e 3) é igual a 6.
Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma mensagem informando se o
número digitado é ou não abundante.
Exemplo:
Digite um numero: 12
Divisores: 
1
2
3
4
6
----
16
12 eh abundante porque a soma dos divisores eh maior que 12
*/
#include <stdio.h>
int main(void)
{
    int soma=0, numero, i;
    if (numero%i==0)
    {
        soma=soma+i
        printf("%d",i);
    }
    
    if (soma>numero)
    {
        printf("%d eh abundante porque a soma dos divisores eh maior que %d", numero, numero);
    }
    else
    {
        printf("%d nao eh abundante porque a soma dos divisores eh menor que %d", numero, numero);
    }
    return 0;
}