//Calcular a média aritmética de 5 alunos (usando vetor e repetição):

#include <stdio.h>

int main(void)
{
    int nota[5], i;
    float media=0;

    for(i=0; i<5; i++)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%d", &nota[i]);
        media = media + nota[i];
    }

    media = media/5.0;

    printf("\nMedia das notas: %.2f\n", media);

    return 0;
}
