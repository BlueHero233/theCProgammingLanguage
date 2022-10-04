/* 5) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em variável e mostrá-los com uma única instrução.
Exemplo: 
Informe o primeiro numero: 5
Informe o segundo numero: 3
Informe o terceiro numero: 2
Menor: 2 Meio: 3 Maior: 5 */
#include <stdio.h>
int main(void)
{
    int primeiro, segundo, terceiro, menor, meio, maior;
    printf("Informe o primeiro numero:\n");
    scanf("%d",&primeiro);
    printf("Informe o segundo numero:\n");
    scanf("%d",&segundo);
    printf("Informe o terceiro numero:\n");
    scanf("%d",&terceiro);
    if (primeiro < segundo && primeiro < terceiro)
    {
        menor=primeiro;
        if (segundo < terceiro)
        {
            meio=segundo;
            maior=terceiro;
        }
        else
        {
            meio=terceiro;
            maior=segundo;
        }
    }
    if (segundo < primeiro && segundo < terceiro)
    {
        menor=segundo;
        if (primeiro < terceiro)
        {
            meio=primeiro;
            maior=terceiro;
        }
        else
        {
            meio=terceiro;
            maior=primeiro;
        }
    }
    if (terceiro < primeiro && terceiro < segundo)
    {
        menor=terceiro;
        if (primeiro < segundo)
        {
            meio=primeiro;
            maior=segundo;
        }
        else
        {
            meio=segundo;
            maior=primeiro;
        }
    }
    printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
    return 0;
}