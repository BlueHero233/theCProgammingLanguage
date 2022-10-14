/* 7) Em um intervalo de 0 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada listagem de maneira a
identificar o conteúdo da mesma. Em cada listagem separar os números por uma tabulação. A raiz quadrada
pode ser obtida pela função sqrt() que está na biblioteca math.h
Exemplo:*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num=100, i;
    float raiz;
    printf("=== DIVISIVEIS POR 3 ===\n");
    for (i=1;i<=num;i++)
    {
        if (i%3==0)
            printf("%d\t", i);  
    }
    printf("\n");
    printf("=== QUADRADO DOS DIVISIVEIS POR 3 ===\n");
    for (i=1;i<=num;i++)
    {
        if (i%3==0)
            printf("%.0f\t", pow(i,2));  
    }
    printf("\n");
    printf("=== DIVISIVEIS POR 5 ou 7 ===\n");
    for (i=1;i<=num;i++)
    {
        if (i%5==0||i%7==0)
            printf("%d\t", i);
    }
    printf("\n");
    printf("=== RAIZ QUADRADA DOS DIVISIVEIS POR 5 ou 7 ===\n");
    for (i=1;i<=num;i++)
    {
        if (i%5==0||i%7==0)
        {
            raiz=sqrt(i);
            printf("%.2f\t", raiz);  
        }
    }
    return 0;
}