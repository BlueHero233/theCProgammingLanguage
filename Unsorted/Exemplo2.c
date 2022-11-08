//Calcular a média aritmética de 5 alunos (usando vetor sem repetição):

#include <stdio.h>

int main(void)
{
    int nota[5];
    float media;

    printf("Digite a nota do aluno 1: ");
    scanf("%d", &nota[0]);
    printf("Digite a nota do aluno 2: ");
    scanf("%d", &nota[1]);
    printf("Digite a nota do aluno 3: ");
    scanf("%d", &nota[2]);
    printf("Digite a nota do aluno 4: ");
    scanf("%d", &nota[3]);
    printf("Digite a nota do aluno 5: ");
    scanf("%d", &nota[4]);

    media = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4])/5.0;

    printf("\nMedia das notas: %.2f\n", media);

    return 0;
}
