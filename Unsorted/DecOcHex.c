#include <stdio.h>

/*
%d assume a base 10, representa somente os n�meros decimais
%i detecta automaticamente a base, representa n�meros decimais, octais e hexadecimais
%o n�mero na base octadecimal
%x n�mero na base hexadecimal

decimal, assume os seguintes d�gitos: 0,1,2,3,4,5,6,7,8,9
octal, assume os seguintes d�gitos: 0,1,2,3,4,5,6,7
hexadecimmal, assume os seguintes d�gitos: 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

Exemplo: representa��o do n�mero 79 em:
- decimal: 7*10 + 9 = 79
- octal (117): 1*8� + 1*8� + 7*8� =64+8+7=79
- hexadecimal (4F): 4*16� + F =  64 + F => 64 + 15 = 79

A linguagem C adota a seguinte conven��o:
- na representa��o decimal, o primeiro d�gito � diferente de 0,
- na representa��o octal, o primeiro d�gito � 0,
- na representa��o hexadecimal, os dois primeiros caracteres s�o 0x.

Exemplo: representa��o do n�mero 123
- 123 decimal
- 0123 octal = 83 decimal
- 0x123 hexadecimal = 291 decimal

123 (hexadecimal) => 1 x 16� = 256  +  2 x 16� = 32 + 3 x 16� = 3 => 291 em decimal

123 (octal) => 1 x 8� = 64 +  2 x 8� = 16 + 3 x 8� = 3 => 83 em decimal

https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
*/

int main()
{
    //declara��o de vari�veis
    int a,b,c;

    //entrada de dados
    printf("Informe o valor de a em decimal: ");        //123
    scanf("%d", &a);
    printf("Informe o valor de b em octal: ");          //0123
    scanf("%i", &b);
    printf("Informe o valor de c em hexadecimal: ");    //0x123
    scanf("%i", &c);

    //sa�da de dados
    printf("Valor de a: %d\n", a); //123
    printf("Valor de b: %i\n", b); //83
    printf("Valor de c: %i\n", c); //291

    //imprime o valor 123
    printf("Valor de b: %o\n", b); //123 na base octal
    printf("Valor de c: %x\n", c); //123 na base hexadecimal


    return 0;
}


