/* Na matemática, o fatorial de um número é o produto de todos os inteiros positivos menores ou iguais ao
número. Exemplo: Fatorial de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
de um número informado pelo usuário. Validar esse número para que esteja em um intervalo de 1 a 20.
Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.
Obs.: Use uma variável de tipo de dado unsigned long long (%llu) para armazenar o fatorial. */
#include <stdio.h>
int main(void)
{
    int num, i;
    unsigned long long fatorial=1;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    if (num<0&&num>20)
        printf("Numero invalido\n");
    else
    {
        for (i=1;i<=num;i++)
            fatorial=fatorial*i;
        printf("%d! = %llu\n", num, fatorial);
    }
    return 0;
}