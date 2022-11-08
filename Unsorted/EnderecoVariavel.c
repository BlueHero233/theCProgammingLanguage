
/*
Se a declaração já apresenta um valor inicial para a variável, o compilador o atribui à
variável antes de iniciar a execução do algoritmo.
Não existe um “valor padrão” na linguagem C para variáveis que não recebem um valor
inicial já na sua declaração.
Há um acesso bruto à memória e se o programador não inicializar a variável conterá o que tiver na memória
(lixo de memória) o que foi deixado por aplicação que tinha aquela área reservada.

O endereço de uma variável é dado pelo operador &;
Se x é uma váriável, &x é seu endereço
*/
#include <stdio.h>

int main()
{
    int a,b,c=3;

    //valor das variáveis
    printf("Valor da variavel A: %d\n", a);
    printf("Valor da variavel B: %d\n", b);
    printf("Valor da variavel C: %d\n", c); //3

    //endereços das variáveis
    printf("Endereco da variavel A: %p\n ", &a);
    printf("Endereco da variavel B: %p\n ", &b);
    printf("Endereco da variavel C: %p\n ", &b);
    return 0;
}
