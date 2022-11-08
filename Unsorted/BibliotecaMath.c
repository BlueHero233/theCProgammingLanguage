
/*
A biblioteca math.h permite usar funções matemáticas básicas, tais como senos, cossenos, exponenciais,
logarítmos, etc. Para usá-la, é necessário adicionar a linha #include <math.h> no cabeçalho
*/

#include <stdio.h>
#include <math.h>

main (void)
{
    float x = 8.62;

    printf("Biblioteca math.h \n\n");

    printf("Numero informado: %f\n", x);
    printf("-----------------------------------------------------------------\n");

    printf("Valor aproximado para baixo: %f\n", floor(x) );
    printf("Valor aproximado para cima:  %f\n", ceil(x));
    printf("-----------------------------------------------------------------\n");

    printf("Raiz quadrada: %f\n", sqrt(x));
    printf("%.2lf ao quadrado e: %.2f \n",x,pow(x,2));
    printf("-----------------------------------------------------------------\n");

    printf("SENO: %.2f \n",sin(x));
    printf("COSSENO: %.2f \n",cos(x));
    printf("TANGENTE: %.2f \n",tan(x));
    printf("-----------------------------------------------------------------\n");

    printf("Logaritmo natural= %.2f \n",log(x));
    printf("Logaritmo de %.2f  na base 10 = %.2f \n",x,log10(x));
    printf("Exponencial de %.2f = %e \n",x,exp(x));
    printf("-----------------------------------------------------------------\n");

    printf("Valor aproximado de pi: %e \n",M_PI);
    printf("Valor aproximado de pi/2: %e \n",M_PI_2);
    printf("-----------------------------------------------------------------\n");

    printf("O modulo de -3.2 e %f \n",fabs(-3.2));
    printf("O modulo de -3 e %d \n",abs(-3));
    printf("-----------------------------------------------------------------\n");
}
