//algoritimo de media ponderada
#include <stdio.h>
int main(void)
{
    float notaUm, notaDois, notaTres, pesoUm, pesoDois, pesoTres, media;
    printf("Informe a primeira nota\n");
    scanf("%f", &notaUm);
    printf("Informe a segunda nota\n");
    scanf("%f", &notaDois);
    printf("Informe a terceira nota\n");
    scanf("%f", &notaTres);
    printf("Informe o peso um\n");
    scanf("%f", &pesoUm);
    printf("Informe o peso dois\n");
    scanf("%f", &pesoDois);
    printf("Informe o peso tres\n");
    scanf("%f", &pesoTres);
    media= ((notaUm*pesoUm)+(notaDois*pesoDois)+(notaTres*pesoTres))/(pesoUm*pesoDois*pesoTres);
    printf("A media ponderada eh %.2f\n", media);
    return 0;
}
