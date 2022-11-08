#include <stdio.h>


int main()
{
    //declaração de variaveis
    int num1, num2, res;
    float resFloat;

    //entrada de dados
    printf("Informe o primeiro numero: "); // 5
    scanf("%d", &num1);
    printf("Informe o segundo numero:"); //7
    scanf("%d", &num2);

    //processamento
    res = num1 + num2; // 5 + 7 = 12

    /*Em C se realizar uma divisão entre variáveis inteiras, o resultado é um valor inteiro, mesmo que a variável armazenando o resultado seja float.*/
    //resFloat = num1 / num2; //O resultado é: 5/7= 0.0000000. // como 5 e 7 são valores inteiros, faz-se a divisao inteira!

    resFloat = (float)num1 / num2; //5.000000 / 7 = 0.714286
    /* se o desejado é que resFloat receba o valor 0.714286,deve-se usar um conversor de tipo (type cast),
    convertendo ou o 5 ou o 7 para float*/

    //saída
    printf("A soma de %d + %d = %d\n", num1, num2, res); // A soma de 5 = 7 = 12
    printf("\nA divisao de  %d / %d = %f", num1, num2, resFloat);

    return 0;
}
