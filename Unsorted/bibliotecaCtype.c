#include <stdio.h>
#include <ctype.h> //biblioteca que contem funcoes para manipulacao de caracteres

int main(void)
{
    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    printf("\nConverte para maiusculo usando toupper\n");
    printf("%c\n", toupper(ch));

    //A biblioteca ctype.h contem funcoes para manipulacao de caracteres.
    //Outros exemplos de funcoes  ctype:
    //tolower() - Converte o caractere em letra minuscula.
    //Isalpha() - Verifica se o caractere faz parte do alfabeto.
    //Islower() - Verifica se o caractere eh uma letra minuscula.
    //Isupper() - Verifica se o caractere eh uma letra maiuscula.

    printf("\nConverte para maiuscula sem usar funcao\n");
    //Basta subtrair 32 da variavel char.
    //Exemplo: 'a' = 97 (ASCII)
    //97 - 32 = 65, assim 'A' = 65(ASCII)
    printf("%c\n", ch - 32);

    printf("\nVerifica se caractere faz parte do alfabeto sem usar funcao\n");
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Caractere \"%c\" faz parte do alfabeto\n", ch);
    }
    else
    {
        printf("Caractere \"%c\" sim faz parte do alfabeto\n", ch);
    }

    printf("\nVerifica se caractere eh uma letra maiuscula sem usar funcao\n");
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Caractere \"%c\" eh uma letra maiuscula\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Caractere \"%c\" sim eh uma letra maiuscula\n", ch);
    }
    else
    {
       printf("Caractere \"%c\" sim eh uma letra\n", ch);
    }
    return 0;
}