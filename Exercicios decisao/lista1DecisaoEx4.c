/* Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação. */
#include <stdio.h>
int main(void)
{
    float notaUm, notaDois, notaTres, mediaPonderada, notaRecu, mediaRecu;
    printf("Informe a primeira nota: \n");
    scanf("%f", &notaUm);
    printf("Informe a segunda nota: \n");
    scanf("%f", &notaDois);
    printf("Informe a terceira nota: \n");
    scanf("%f", &notaTres);
    mediaPonderada=(notaUm*1+notaDois*3+notaTres*4)/8;
    if (mediaPonderada>=6&&mediaPonderada<=10)
        printf("O aluno está aprovado\n");
    else if(mediaPonderada>=4&&mediaPonderada<=5.9)
    {
        printf("O aluno está em recuperação\n");
        printf("Insira a nota de recuperacao\n");
        scanf("%f", &notaRecu);
        mediaRecu=(mediaPonderada+notaRecu)/2;
        if (mediaRecu>=5)
            printf("O aluno está aprovado após recuperação");
        else
            printf("O aluno está reprovado após recuperação");
    }
    else
        printf("o aluno está reprovado antes da recuperação");
    return 0;
}