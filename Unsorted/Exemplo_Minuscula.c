#include <stdio.h>

 int main(void)
 {
     char ch;

     printf("Digite um caractere alfabetico maiusculo: ");
     scanf("%c", &ch);

     ch = ch + 32;

     printf("Caractere convertido para minusculo: %c\n", ch);

     return 0;
 }
