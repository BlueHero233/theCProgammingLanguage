#include <stdio.h>
/*
É comum que a variável de controle seja impressa e/ou usada em cálculos pelas instruções que compõem a estrutura.
Contudo, essa variável  pode ser utilizada apenas para contar e controlar a quantidade de iterações.

*/
int main()
{
    int i, num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    for(i=0; i <= 10; i++)
    {
        printf("%2d * %2d = %2d\n", num, i, num*i);
    }
}
