#include <stdio.h>
/*Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo usu�rio. Calcule e
mostre o resultado de cada express�o. Reutilize vari�veis, ou seja, ter� apenas uma vari�vel para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira opera��o e j�
imprime o resultado e assim para todas as demais opera��es. Aten��o para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as express�es e depois
implementar o algoritmo para calcular os resultados.*/
int main (void)
{
    /*
    5 2
    ((x+y)/y)*x^2
    (x+y)/(x-y)
    (x^2+y^3)/2
    x^3/x^2
    Resto da divis�o de x por y
    Resto da divis�o de x por 3
    Resto da divis�o de y por 5
    */
    float resFloat;
    int x, y, res;
    printf("Informe o valor de X: \n");
    scanf("%d", &x);
    printf("Informe o valor de Y: \n");
    scanf("%d", &y);
    resFloat=((float)(x+y)/y)*(x*x);
    //funcao exponencial em C eh pow()
    //ex: double pow(double base, double exp)
    //x = (int)pow(2,3);
    //x = 8
    //incluida em math.h
    printf("a)%.2f \n", resFloat);
    resFloat=(float)(x+y)/(x-y);
    printf("b)%.2f \n", resFloat);
    resFloat=(float)(x*x+y*y*y)/2;
    printf("c)%.2f \n", resFloat);
    resFloat=(x*x*x)/(x*x);
    printf("d)%.2f \n", resFloat);
    res=x%y;
    printf("e1)%d \n", res);
    res=x%3;
    printf("e2)%d \n", res);
    res=y%5;
    printf("e3)%d \n", res);
    return 0;
}
