#include <stdio.h>

int main(void)
{
    int a=5, b=3, resultado;

    //Forma Geral
    //expressao operador logico expressao

    //Resultado da operacao
    //0: quando a operacao eh falsa
    //1: quando a operacao eh verdadeira

    //Operadores logicos
    //&&  operador "e"
    //||  operador "ou"
    //!   operador de negacao


    printf("Exemplos do uso do operador &&\n");
    //a=5 e b=3
    resultado = a > 2 && b < 5; //V com V resulta V
    printf("Resultado = %d\n", resultado);

    resultado = a > 2 && b < 1; //V com F resulta F
    printf("Resultado = %d\n", resultado);

    resultado = a > 6 && b < 5; //F com V resulta F
    printf("Resultado = %d\n", resultado);

    resultado = a > 6 && b < 1; //F com F resulta F
    printf("Resultado = %d\n", resultado);


    printf("\nExemplos do uso do operador ||\n");
    //a=5 e b=3
    resultado = a > 2 || b < 5; //V com V resulta V
    printf("Resultado = %d\n", resultado);

    resultado = a > 2 || b < 1; //V com F resulta V
    printf("Resultado = %d\n", resultado);

    resultado = a > 6 || b < 5; //F com V resulta V
    printf("Resultado = %d\n", resultado);

    resultado = a > 6 || b < 1; //F com F resulta F
    printf("Resultado = %d\n", resultado);


    printf("\nExemplos do uso do operador !\n");
    //a=5 e b=3
    resultado = !(a > 2 || b < 5); //V com V resulta V mas como tem negacao fica F
    printf("Resultado = %d\n", resultado);

    resultado = !(a > 6); //a empressao eh F mas como tem negacao fica V
    printf("Resultado = %d\n", resultado);

    return 0;
}
