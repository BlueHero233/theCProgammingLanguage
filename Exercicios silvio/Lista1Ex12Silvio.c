//Um eletricista precisa comprar fio que ir� passar pela diagonal de uma casa de
//formato retangular. Como ele n�o tem condi��es de medir a diagonal com precis�o,
//a solu��o alternativa que ele encontrou foi medir os lados da casa. A diagonal pode
//ser calculada a partir dos lados pelo Teorema de Pit�goras (a^2= b^2+ c2). Fa�a um
//algoritmo que calcule a quantidade m�nima necess�ria de fio a ser comprada.
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Insira os lados a e b\n");
    scanf("%f%f", &a,&b);
    c=(sqrt(a*a+b*b));
    printf("A diagonal mede %.2f\n", c);
    return 0;
}
