#include <stdio.h>

 int main(void)
 {
     char ch1, ch2;

     printf("Insira um caractere: ");
     scanf("%c", &ch1);
     printf("Insira outro caractere: ");
     setbuf(stdin, NULL); //limpa o buffer do teclado
     scanf("%c", &ch2);

     printf("Voce digitou '%c' e '%c'\n", ch1, ch2);

     return 0;
 }
