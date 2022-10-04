#include <stdio.h>
/*
4) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.
*/
int main (void)
{
    int valorUm, valorDois, soma, sub, mult, div, resto;
    float divFloat;
    printf("Informe o primeiro valor: \n");
    scanf("%d", &valorUm);
    printf("Informe o segundo valor: \n");
    scanf("%d", &valorDois);
    soma=valorUm+valorDois;
    sub=valorUm-valorDois;
    mult=valorUm*valorDois;
    div=valorUm/valorDois;
    divFloat=(float)valorUm/valorDois;
    resto=valorUm%valorDois;
    printf("A soma desses valores: %d\n", soma);
    printf("A subtração do primeiro pelo segundo: %d\n", sub);
    printf("A multiplicacao entre eles: %d\n", mult);
    printf("A divisao inteira do primeiro pelo segundo: %d\n", div);
    printf("A divisao float do primeiro pelo segundo: %.2f\n", divFloat);
    printf("O resto da divisao do primeiro pelo segundo: %d\n", resto);
    return 0;
}
