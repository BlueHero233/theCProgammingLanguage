//Calcular a média aritmética de 5 alunos (sem usar vetor):

#include <stdio.h>

int main(void)
{
    int nota1, nota2, nota3, nota4, nota5;
    float media;

    printf("Digite a nota do aluno 1: ");
    scanf("%d", &nota1);
    printf("Digite a nota do aluno 2: ");
    scanf("%d", &nota2);
    printf("Digite a nota do aluno 3: ");
    scanf("%d", &nota3);
    printf("Digite a nota do aluno 4: ");
    scanf("%d", &nota4);
    printf("Digite a nota do aluno 5: ");
    scanf("%d", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5)/5.0;

    printf("\nMedia das notas: %.2f\n", media);

    return 0;
}
