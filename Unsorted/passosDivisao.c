#include <stdio.h>
int main()
{
  int p=0;
  float v=1;
    while (v>=0.0001)
    {
        v=v/2;
        ++p;
        printf("%d passos\n", p);
    }
    printf("Quantos vezes temos que dividir 1 por 2 para chegarmos a um valor menor que 0.0001/n ");
  return 0;
}
