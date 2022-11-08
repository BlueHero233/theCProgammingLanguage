#include <stdio.h>

/*
%d assume a base 10, representa somente os números decimais
%i detecta automaticamente a base, representa números decimais, octais e hexadecimais
%o número na base octadecimal
%x número na base hexadecimal

decimal, assume os seguintes dígitos: 0,1,2,3,4,5,6,7,8,9
octal, assume os seguintes dígitos: 0,1,2,3,4,5,6,7
hexadecimmal, assume os seguintes dígitos: 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F

Exemplo: representação do número 79 em:
- decimal: 7*10 + 9 = 79
- octal (117): 1*8² + 1*8¹ + 7*8º =64+8+7=79
- hexadecimal (4F): 4*16¹ + F =  64 + F => 64 + 15 = 79

A linguagem C adota a seguinte convenção:
- na representação decimal, o primeiro dígito é diferente de 0,
- na representação octal, o primeiro dígito é 0,
- na representação hexadecimal, os dois primeiros caracteres são 0x.

Exemplo: representação do número 123
- 123 decimal
- 0123 octal = 83 decimal
- 0x123 hexadecimal = 291 decimal

123 (hexadecimal) => 1 x 16² = 256  +  2 x 16¹ = 32 + 3 x 16º = 3 => 291 em decimal

123 (octal) => 1 x 8² = 64 +  2 x 8¹ = 16 + 3 x 8º = 3 => 83 em decimal

https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm
*/

int main()
{
    //declaração de variáveis
    int a,b,c;

    //entrada de dados
    printf("Informe o valor de a em decimal: ");        //123
    scanf("%d", &a);
    printf("Informe o valor de b em octal: ");          //0123
    scanf("%i", &b);
    printf("Informe o valor de c em hexadecimal: ");    //0x123
    scanf("%i", &c);

    //saída de dados
    printf("Valor de a: %d\n", a); //123
    printf("Valor de b: %i\n", b); //83
    printf("Valor de c: %i\n", c); //291

    //imprime o valor 123
    printf("Valor de b: %o\n", b); //123 na base octal
    printf("Valor de c: %x\n", c); //123 na base hexadecimal


    return 0;
}


