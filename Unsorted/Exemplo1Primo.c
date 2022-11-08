//Verifica se um n�mero � ou n�o um n�mero primo
/*N�meros primos s�o somente n�meros que s�o divis�veis por eles mesmos e por 1.
Uma das maneiras de descobrir se um n�mero � primo � pela listagem dos seus divisores
o numero 1 n�o � primo porque ele � divis�vel apenas por ele mesmo
*/
#include <stdio.h>

int main(void)
{
    int num, cont=0, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++) //para contar os divisores do 1 at� o numero informado
    {
        if(num%i == 0) //se o resultado da divis�o do numero informado pelo indice for 0
            // 3/1=resto 0,  3/2=resto 1,  3/3=resto 0
            // 4/1=resto 0,  4/2=resto 0,  4/3=resto 1, 4/4=resto 0
        {
            cont++; //conta divisores, tem que ser igual a 2 para o numero ser primo
            //cont para 3 = 2
            //cont para 4 = 3
        }
    }

    if(cont == 2) //porque um numero primo TEM QUE ser divisivel por ele mesmo E por 1
    {
        printf("Eh um numero primo\n");
    }
    else
    {
        printf("Nao eh um numero primo\n");
    }

    return 0;
}
