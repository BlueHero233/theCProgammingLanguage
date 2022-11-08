#include <stdio.h>


int main()
{
    //declara��o de variaveis
    int num1, num2, res;
    float resFloat;

    //entrada de dados
    printf("Informe o primeiro numero: "); // 5
    scanf("%d", &num1);
    printf("Informe o segundo numero:"); //7
    scanf("%d", &num2);

    //processamento
    res = num1 + num2; // 5 + 7 = 12

    /*Em C se realizar uma divis�o entre vari�veis inteiras, o resultado � um valor inteiro, mesmo que a vari�vel armazenando o resultado seja float.*/
    //resFloat = num1 / num2; //O resultado �: 5/7= 0.0000000. // como 5 e 7 s�o valores inteiros, faz-se a divisao inteira!

    resFloat = (float)num1 / num2; //5.000000 / 7 = 0.714286
    /* se o desejado � que resFloat receba o valor 0.714286,deve-se usar um conversor de tipo (type cast),
    convertendo ou o 5 ou o 7 para float*/

    //sa�da
    printf("A soma de %d + %d = %d\n", num1, num2, res); // A soma de 5 = 7 = 12
    printf("\nA divisao de  %d / %d = %f", num1, num2, resFloat);

    return 0;
}
