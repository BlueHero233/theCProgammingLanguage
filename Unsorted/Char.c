/*
As variáveis que armazenam um caracter são declaradas do tipo char.
*/

/*
 Ler um caracter digitado pelo usuario.
 Imprima o caracter digitado e o codigo ASCII correspondente a este caracter.
*/

#include <stdio.h>

int main()
{
    char letra;

    printf("Informe um caractere: "); //A
    scanf("%c", &letra);
    printf("O caractere informado e: %c", letra); //O caractere informado e: A
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", letra, letra); //Caracter digitado A, Codigo ASCII: 65
    //O %c foi utilizado para imprimir o caracter como caracter
    //O %d foi utilizado para imprimir o código ASCII

    return 0;
}
