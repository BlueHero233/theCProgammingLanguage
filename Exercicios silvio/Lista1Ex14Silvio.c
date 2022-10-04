//Dado um número inteiro não nulo de três dígitos, imprimir este numero ao contrario,
//isto e, se a entrada for 123 (cento e vinte e três), imprimir 321 (trezentos e vinte e
//um). Usar operações sobre inteiros, por exemplo, divisões sucessivas por 10.
#include<stdio.h>
int main (void)
{
    int numero,digitoUm,digitoDois,digitoTres,digitoQuatro;
    printf("Insira um valor inteiro de tres digitos");
    scanf("%d",&numero);
    digitoUm = numero % 10;
    digitoDois = numero / 10;
    digitoTres = digitoDois % 10;
    digitoQuatro = digitoDois / 10;
    printf("%d invertido eh %d%d%d",numero,digitoUm,digitoTres,digitoQuatro);
    return 0;
}
