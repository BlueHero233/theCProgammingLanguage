/*Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.*/
#include <stdio.h>
int main(void)
{
    int numero;
    printf("Insira a senha\n");
    scanf("%d", &numero);
    if (numero<=10)
        printf("eh menor do que 10");
    else if (numero>=10) 
        printf("eh menor do que 10");
    else if (numero==10) 
        printf("eh igual do que 10"); 
    return 0;
}