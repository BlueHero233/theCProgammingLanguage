#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        printf("Voce digitou a letra %c\n", ch);
    }
    else
    {
        printf("Voce sim digitou uma letra\n");
    }

    return 0;
}
