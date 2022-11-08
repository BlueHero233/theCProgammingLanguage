//Chamada à função que ordena vetores
#include <stdio.h>

void ordenarVetor(int vetor[], int tam);

int main(void)
{
    int n, i, j;

    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);

    int vet[n];

    for(i=0; i<n; i++)
    {
        printf("Informe o valor da posicao %d do vetor: ", i);
        scanf("%d",&vet[i]);
    }

    printf("\n===VETOR ORIGINAL ===\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", vet[i]);
    }

    ordenarVetor(vet, n);

    printf("\n\n===VETOR ORDENADO ===\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", vet[i]);
    }
}

void ordenarVetor(int vetor[], int tam)
{
    int aux, i, j;

    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}
