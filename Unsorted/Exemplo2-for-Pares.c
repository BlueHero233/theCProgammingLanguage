#include <stdio.h>

/*
� comum que a vari�vel de controle seja impressa e/ou usada em c�lculos pelas instru��es que comp�em a estrutura.
Contudo, essa vari�vel  pode ser utilizada apenas para contar e controlar a quantidade de itera��es.

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
