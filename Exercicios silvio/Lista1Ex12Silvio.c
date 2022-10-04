//Um eletricista precisa comprar fio que irá passar pela diagonal de uma casa de
//formato retangular. Como ele não tem condições de medir a diagonal com precisão,
//a solução alternativa que ele encontrou foi medir os lados da casa. A diagonal pode
//ser calculada a partir dos lados pelo Teorema de Pitágoras (a^2= b^2+ c2). Faça um
//algoritmo que calcule a quantidade mínima necessária de fio a ser comprada.
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
