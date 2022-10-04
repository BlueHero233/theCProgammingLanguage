//algoritimo de media aritimetica de tres notas
#include <stdio.h>
int main(void)
{
    float notaUm, notaDois, notaTres, media;
    printf("Insira a primeira nota\n");
    scanf("%f",&notaUm);
    printf("Insira a segunda nota\n");
    scanf("%f",&notaDois);
    printf("Insira a terceira nota\n");
    scanf("%f",&notaTres);
    media=(notaUm+notaDois+notaTres)/3;
    printf("A media eh %.2f\n", media);
}
