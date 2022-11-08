#include <stdio.h>

 int main(void)
 {
     char ch;

     printf("Digite um caractere alfabetico minusculo: ");
     scanf("%c", &ch);

     ch = ch - 32;

     printf("Caractere convertido para maiusculo: %c\n", ch);

     return 0;
 }
