/*6) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.
Exemplo:
Informe um numero: -1
Informe um numero: -2
Informe um numero: -3
Informe um numero: 1
Informe um numero: 2
Informe um numero: 3
Informe um numero: 0
Numeros positivos: 3
Numeros negativos que sao pares: 1
A media dos numeros divisiveis por 3 eh: 3.0
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num=1;
    while (num!=0)
    {
        scanf("%d", &num);
        if (num!=0)
        {
            if (num>0)
            {
                /* code */
            }
            
        }
        
    }
    return 0;
}