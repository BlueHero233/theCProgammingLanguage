//Dado um n�mero inteiro n�o nulo de tr�s d�gitos, imprimir este numero ao contrario,
//isto e, se a entrada for 123 (cento e vinte e tr�s), imprimir 321 (trezentos e vinte e
//um). Usar opera��es sobre inteiros, por exemplo, divis�es sucessivas por 10.
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
