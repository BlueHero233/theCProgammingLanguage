//algoritmo que receba o ano de nascimento de uma pessoa e o ano atual,
//calcule e mostre:
//- a idade dessa pessoa
//- quantos anos essa pessoa terá em 2035
#include <stdio.h>
int main()
{
    int anoNascimento, anoAtual, idade, idadeFinal;
    printf("Insira o ano que voce nasceu\n");
    scanf("%d", &anoNascimento);
    printf("Insira o ano atual\n");
    scanf("%d", &anoAtual);
    idade=(anoAtual-anoNascimento);
    idadeFinal=(2035-anoNascimento);
    printf("Voce tem %d anos\n", idade);
    printf("Voce tera %d anos em 2035\n", idadeFinal);
    return 0;
}
