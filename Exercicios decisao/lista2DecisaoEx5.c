/*A função toupper() transforma um caractere para maiúsculo. Para usar esta função é necessário incluir no cabeçalho
a biblioteca ctype.h. Veja o exemplo a seguir:

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    printf("Digite um caracter: ");
    scanf("%c", &ch);
    ch = toupper(ch));
    printf("Maiusculo: %c", ch);
    return 0;
}

Faça um programa que receba um caractere via teclado, transforme esse caractere em maiúsculo e verifique se ele
pertence ou não ao alfabeto (A, B, ..., Z). Caso ele pertença, o programa deve gerar a saída
printf("O caracter digitado pertence ao albafeto\n") e, com o uso da estrutura switch
- case, verificar se o caractere é uma vogal (neste caso, a saída deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a saída deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
não pertença ao alfabeto, o programa deverá gerar a saída printf("O caracter digitado não
pertence ao albafeto\n").*/