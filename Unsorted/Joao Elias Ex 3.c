/*Ler caracteres ate ser informado o caractere '0', que representa a saida
 e nao deve ser considerado no processamento. quando o caractere informado
 eh uma letra do alfabeto (minuscula ou maiuscula), verificar e mostrar se
 o numero correspondente ao codigo decimal ASCII desse caractere eh ou nao
 um numero primo. calcular e mostrar o percentual dos caracteres informados
 que nao sao letras do alfabeto.
 Se o caractere informado for 'a', o valor ASCII correspondente a esse caractere
 eh 97, entao verificar se 97 eh ou nao um numero primo. se ao todo forem
 informados 30 caracteres e destes 15 nao sao letras do alfabeto, ou seja,
 nao estao entre 'a' a 'z' e 'A' a 'Z' ou entre 97 a 122 e 65 a 90, entao 15
 representa um porcentual de 50%.
 Exemplo:
 Informe um caractere: 5
 Informe um caractere: *
 Informe um caractere: @
 Informe um caractere: a
 'a' que corresponde ao decimal 97 na tabela ASCII eh primo
 Informe um caractere: i
 'i' que corresponde ao decimal 105 na tabela ASCII nao eh primo
 Informe um caractere: B
'B' que corresponde ao decimal 66 na tabela ASCII nao eh primo
Informe um caractere: 0

 Percentual de caracteres que nao sao letras: 50.00%

 Deseja esecutar novamente (S/s)?
 */
#include <stdio.h>
int main(void)
{   
    char opcao='s', caract;
    int i, j, count=0;
    float percentual, naoLetras, letras;
    do
    {   
        percentual=0, naoLetras=0, letras=0;
        do
        {
        printf("Informe um caractere:\n");
        scanf(" %c", &caract);
        if((caract>=97&&caract<=122)||(caract>=65&&caract<=90))
        {
            letras++;
            for (i = 2; i <= caract / 2; i++)
            {
                if (caract % i == 0)
                {
                    count++;
                }
            } // verificacao primo
            if (count == 0)
            {
                printf("'%c' que corresponde ao decimal %d na tabela ASCII eh primo\n", caract, caract);
            }
            if (count != 0)
            {
                printf("'%c' que corresponde ao decimal %d na tabela ASCII nao eh primo\n", caract, caract);
            }
            count = 0;
        }
        else
        {
            if(caract!='0')
            {
                naoLetras++;
            }
            //contador nao letras
        }
        } while (caract!='0');
        percentual=(naoLetras/(naoLetras+letras))*100;
        printf("Percentual de caracteres que nao sao letras: %.2f%%\n", percentual);
        printf("Deseja executar novamente (S/s)?");
        fflush(stdin);
        scanf("%c", &opcao);
    }while(opcao=='s'||opcao=='S');
    return 0;
}
