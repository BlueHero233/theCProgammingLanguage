/* A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão */
#include <stdio.h>
int main(void)
{   
    int temperatura;
    char sim;
    printf("Paciente se sente bem? (S/N)\n");
    scanf("%c", &sim);
    if (sim=='S'||sim=='s') 
        printf("Paciente esta saudavel");
    else
    {
        fflush(stdin);
        printf("Paciente sente dor? (S/N)\n");
        scanf("%c", &sim);
        if (sim=='S'||sim=='s')
        {  
            printf("Temperatura do paciente\n ");
            scanf("%d", &temperatura);
            if (temperatura<=37)
                printf("Paciente esta saudavel");
            else
                printf("Paciente esta doente");;
        }
        else
            printf("Paciente esta saudavel");
    }
    return 0;
}