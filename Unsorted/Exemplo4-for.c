#include <stdio.h>
/*
A inicialização, a condição de repetição do loop e o incremento/decremento podem ser compostos
O "incremento" pode ser negativo ou positivo.
Quando negativo representa uma contagem progressiva
Quando negativo representa uma contagem regressiva
*/
int main()
{
    int x, y;

	for(x=0, y=10; x<=10 && y>=0; x++, y--)
     {
		printf("x = %d\t y = %d\n", x, y);
     }

}
