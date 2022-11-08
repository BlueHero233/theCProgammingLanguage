#include <stdio.h>

/*
É comum que a variável de controle seja impressa e/ou usada em cálculos pelas instruções que compõem a estrutura.
Contudo, essa variável  pode ser utilizada apenas para contar e controlar a quantidade de iterações.

*/
int main()
{
    int i;

    for(i=0; i<10; i++)
    {
        printf("Informe um numero: ");
        scanf("%d",&num);

        if(num%2 == 0)
        {
            printf("O numero eh par\n");
        }
        else
        {
            printf("O numero eh impar\n");
        }
    }
}
