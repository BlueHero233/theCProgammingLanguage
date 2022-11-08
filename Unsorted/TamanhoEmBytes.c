#include <stdio.h>

int main(void)
{
    //Fun��o sizeof permite saber o n�mero de bytes ocupado por um determinado tipo de vari�vel.

    printf("TAMANHO EM BYTES\n");
    printf("int: %d bytes\n", sizeof(int));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n", sizeof(double));
    printf("char: %d byte\n", sizeof(char));

    printf("\nMODIFICADORES DE INT\n");
    printf("short int: %d bytes\n", sizeof(short int));
    printf("long int: %d bytes\n", sizeof (long int));
    printf("long long int: %d bytes\n", sizeof (long long int));


    return 0;
}
