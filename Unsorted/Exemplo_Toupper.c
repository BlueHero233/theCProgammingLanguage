#include <stdio.h>
   #include <ctype.h>

   int main(void)
   {
       char ch;

       printf("Digite um caractere: ");
       scanf("%c", &ch);

       ch = toupper(ch);

       printf("Caractere convertido para maiusculo: %c\n", ch);

       return 0;
   }
