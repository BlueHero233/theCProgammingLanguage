#include <stdio.h>

int main()
{
    int i, j;
    printf("\n---------------IMPRIMIR VALORES DE J (de 1 a 10) A CADA ITERACAO DE I (de 1 a 5)--------------\n");
     //1ª iteração  i = 1
        //1ª iteração  j = 1, então imprimir j=1
        //2ª iteração  j = 2, então imprimir j=2
        //3ª iteração  j = 3, então imprimir j=3
        //10ª iteração  j = 10, então imprimir j=10
        //11ª iteração  j = 11, então volta para o loop do i
    for(i=1; i<=5; i++)
    {
       // printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("j=%d ", j); //imprime os valores de j de 1 a 10  a cada iteração de i
        }
        printf("\n");
    }


    printf("\n---------------IMPRIMIR 10 VEZES O VALOR DE I PARA CADA ITERACAO REALIZADA--------------\n");
    //1ª iteração de i = 1
        //1ª iteração  j = 1, então imprimir o valor de i que é 1
        //2ª iteração  j = 2, então imprimir o valor de i que é 1
        //3ª iteração  j = 3, então imprimir o valor de i que é 1
        //10ª iteração  j = 10, então imprimir o valor de i que 1
        //11ª iteração  j = 11, então volta para o loop do i

    for(i=1; i<=10; i++)
    {
        //printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("%3d", i);
        }
        printf("\n");
    }

  printf("\n---------------IMPRIMIR 10 VEZES O VALOR DE I  E DE J PARA CADA ITERAÇÃO DE I (i<=10)--------------\n");
    for(i=1; i<=10; i++)
    {
       // printf("\n%d%c iteracao i = %d \n", i,166, i);
        for(j=1; j<=10; j++)
        {
            printf("%3d%d", i,j);
            //PRIMEIRO NUMERO IMPRESSO É O VALOR I QUE SERÁ SEMPRE O MESMO PARA CADA ITERAÇÃO DE J
            //SEGUNDO NUMERO IMPRESSO É O VALOR DE J QUE É INCREMENTADO A CADA ITERAÇÃO DE J
        }
        printf("\n");
    }
    return 0;
}





