#include <stdio.h>

int main()
{
    int i, j;
    printf("\n---------------IMPRIMIR VALORES DE J (de 1 a 10) A CADA ITERACAO DE I (de 1 a 5)--------------\n");
     //1� itera��o  i = 1
        //1� itera��o  j = 1, ent�o imprimir j=1
        //2� itera��o  j = 2, ent�o imprimir j=2
        //3� itera��o  j = 3, ent�o imprimir j=3
        //10� itera��o  j = 10, ent�o imprimir j=10
        //11� itera��o  j = 11, ent�o volta para o loop do i
    for(i=1; i<=5; i++)
    {
       // printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("j=%d ", j); //imprime os valores de j de 1 a 10  a cada itera��o de i
        }
        printf("\n");
    }


    printf("\n---------------IMPRIMIR 10 VEZES O VALOR DE I PARA CADA ITERACAO REALIZADA--------------\n");
    //1� itera��o de i = 1
        //1� itera��o  j = 1, ent�o imprimir o valor de i que � 1
        //2� itera��o  j = 2, ent�o imprimir o valor de i que � 1
        //3� itera��o  j = 3, ent�o imprimir o valor de i que � 1
        //10� itera��o  j = 10, ent�o imprimir o valor de i que 1
        //11� itera��o  j = 11, ent�o volta para o loop do i

    for(i=1; i<=10; i++)
    {
        //printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("%3d", i);
        }
        printf("\n");
    }

  printf("\n---------------IMPRIMIR 10 VEZES O VALOR DE I  E DE J PARA CADA ITERA��O DE I (i<=10)--------------\n");
    for(i=1; i<=10; i++)
    {
       // printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("%3d%d", i,j);
            //PRIMEIRO NUMERO IMPRESSO � O VALOR I QUE SER� SEMPRE O MESMO PARA CADA ITERA��O DE J
            //SEGUNDO NUMERO IMPRESSO � O VALOR DE J QUE � INCREMENTADO A CADA ITERA��O DE J
        }
        printf("\n");
    }
    return 0;
}





