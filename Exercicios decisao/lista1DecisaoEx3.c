/*Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20 ou fora
do fora do intervalo entre 5 e 20 exemplo 
Informe um numero: 4
4 sim esta no intervalo entre 5 e 20
Informe um numero: 5
5 esta no intervalo entre 5 e 20*/
#include <stdio.h>
int main(void)
{
    int numero;
    printf("Insira um numero\n");
    scanf("%d", &numero);
    if (numero>=5&&numero<=20)
        printf("%d esta dentro do intervalo\n", numero);
    else
        printf("%d esta fora do intervalo\n", numero);
    return 0;
}