#include <stdio.h>

int main(void)
{
     char ch;

     printf("Digite um caractere: ");
     scanf("%c", &ch);

     if(ch >= 'a' && ch <= 'z')
     {
          printf("Caractere eh uma letra minuscula\n");
     }
     else if(ch >= 'A' && ch <= 'Z')
     {
          printf("Caractere sim eh uma letra minuscula\n");
     }
     else
     {
          printf("Caractere sim eh uma letra\n");
     }

     return 0;
}
