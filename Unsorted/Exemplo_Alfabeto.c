#include <stdio.h>

int main(void)
{
    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Caractere faz parte do alfabeto\n");
    }
    else
    {
        printf("Caractere sim faz parte do alfabeto\n");
    }

    return 0;
}
