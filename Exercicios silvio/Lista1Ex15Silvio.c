//Dado um n�mero de tr�s d�gitos, construir outro numero de quatro digitos com a
//seguinte regra: a) os tr�s primeiros d�gitos, contados da esquerda para a direita, sao
//iguais aos do numero dado; b) o quarto digito e' um digito de controle calculado da
//seguinte forma: primeiro digito + 3*segundo digito + 5*terceiro digito; o digito de
//controle e igual ao resto da divis�o dessa soma por 7.
#include<stdio.h>
int main(void)
{
    int numero, controle, digitoUm, digitoDois, digitoTres;
    printf("Insira um numero de tres digitos\n");
    scanf("%d", &numero);
    // abc = abc?
    // ? = (a+3*b+5*c)%7
    digitoUm = numero / 100;
    digitoDois = numero / 10 % 10;
    digitoTres = numero % 10;
    controle = (digitoUm+3*digitoDois+5*digitoTres)%7;
    printf("O numero eh %d%d", numero, controle);
    return 0;
}
