// faca um algoritimo que receba quatro numeros inteiros, calcule e mostre a soma desses numeros
#include<stdio.h>
int main(void)
{
    int primeiroNum, segundoNum, terceiroNum, quartoNum, soma;
    printf("Insira o primeiro numero\n");
    scanf("%d",&primeiroNum);
    printf("Insira o segundo numero\n");
    scanf("%d",&segundoNum);
    printf("Insira o terceiro numero\n");
    scanf("%d",&terceiroNum);
    printf("Insira o quarto numero\n");
    scanf("%d",&quartoNum);
    soma=(primeiroNum+segundoNum+terceiroNum+quartoNum);
    printf("A soma e %d\n", soma);
}
