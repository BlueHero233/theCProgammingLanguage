/*O número 3025 possui a seguinte característica: 30 + 25 = 55 e 55^2 = 3 025.
Faça um programa que escreva
todos os números com quatro algarismos que possuem a citada característica.
exemplo 
2025 3025 9801*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    int n=9999, primeiraMetade, segundaMetade, y, soma1, soma2, i;
    for (i=1000;i<=n;i++)
    {
        primeiraMetade=i/100;
        segundaMetade=i%100;
        y=primeiraMetade+segundaMetade;
	    if(pow(y,2)==i)
	        printf("%d\t", i);
    }
    return 0;
}