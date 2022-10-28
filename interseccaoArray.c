/*funcao para achar a interseccao de dois vetores nao sorteados, cortesia de Virbox no yt*/
#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    int *const vetor;
    size_t comprimento;
} intvetor;

const intvetor intersect(const intvetor a, const intvetor b)
{
    size_t clen=a.comprimento>b.comprimento?a.comprimento:b.comprimento;
    intvetor c={calloc(clen,1),clen};
    size_t ci=0;
    if (c.vetor==NULL) return c;
    for (size_t ai = 0; ai < a.comprimento; ai++)
    {
        for (size_t bi = 0; bi < b.comprimento; bi++)
        {
            if (a.vetor[ai]==b.vetor[bi])
            {
                c.vetor[ci++]=a.vetor[ai];
            }
        } 
    }
    c.comprimento=ci;
    return c;
}
int main (void)
{
    int vetorUm[]={8,3,1,5};
    int vetorDois[]={5,3,4,6,9};
    intvetor a={vetorUm, sizeof(vetorUm)/sizeof(int)},
             b={vetorDois, sizeof(vetorDois)/sizeof(int)};
    intvetor c=intersect(a,b);
    if(c.vetor==NULL) return 1;
    for (size_t i=0;i<c.comprimento;i++)
    {
        printf("%zu \n", c.vetor[i]);
    }
    putchar('\n');
    free(c.vetor);
    return 0;
}