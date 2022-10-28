/*) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido
a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa função para:
a) Verificar se um número, informado pelo usuário, é retangular.
b) Mostrar quais números de um intervalo são retangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.
*/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h> //Biblioteca do toupper.
void verifica(int numero, int escolha) //Função verificadora de número retangular.
{
    int soma=0, quantidade=0, contador;
    for (contador = 0; soma < numero; contador = contador + 2) //Soma até o valor do número informado.
    {
        soma = (soma + contador);
        quantidade++; //Quantidade de números pares até o número informado.
    }
    if (escolha == 1) //Verifica se o número é retangular.
    {
        if (soma == numero && soma != 0) //Validação de número retangular.
        {
            printf("eh retangular ==> ");
            if (soma != 2) //Validação para número maior que 2.
            {
                contador = 0;
                do
                {
                    contador = (contador + 2);
                    printf("%d + ", contador); //Valores da soma do número retangular
                    quantidade--;
                }
                while (quantidade > 2);//Decrescimo da quantidade de números até 2.
                contador = (contador + 2); //Contador assume último valor da soma.
                printf("%d = %d\n", contador, numero); //Num é o valor retangular.
            }
            else
            {
                printf("%d = %d", soma, numero);//Validação para número informado igual a 2.
            }
        }
        else
        {
            printf("sim eh retangular\n");
        }
    }
    else if (escolha == 2) //Mostra os numeros retangulares que pertencem a um intervalo.
    {
        if (soma == numero && soma != 0) //Validação para número diferente de 0 e validação de número retangular.
        {
            printf("%d eh retangular ==> ", numero);
            if (soma != 2) //Validação para soma maior que 2.
            {
                contador = 0;
                do
                {
                    contador = (contador + 2);
                    printf("%d + ", contador);//Valores da soma do número retangular.
                    quantidade--;
                }
                while (quantidade > 2);//Decrescimo da quantidade de números até 2.
                contador = (contador + 2); //Contador assume último valor da soma.
                printf("%d = %d\n", contador, numero);//Num é o valor retangular.
            }
            else
            {
                printf("%d = %d\n", soma, numero); //Número retangular igual a 2.
            }
        }
    }
}

int main(void) //Função principal
{
    //Declaração de variáveis.
    char continuar;//Repetição do programa.
    int opcao, numero, limiteInferior, limiteSuperior;//inf e sup referem-se aos limites; opcao é usada no switch case e o numero é o valor informado.    //Repetição do programa.
    do
    {
        printf("1 - Verifica se um numero eh retangular\n");
        printf("2 - Mostra os numeros retangulares que pertencem a um intervalo\n");
        scanf("%d", &opcao);//Leitura da opção do switch.
        switch (opcao)
        {
        case 1: //Verifica se um numero eh retangular
            printf("Infome um numero:\n");//Entrada de dados do valor a ser testado.
            scanf("%d", &numero);

            verifica(numero, opcao);
            break; //Quebra ao final da execução da função de verificação.
        case 2: //Mostra os numeros retangulares que pertencem a um intervalo
            do
            {
                printf("\nInforme um limite inferior:");//Entrada de dados do interevalo inferior.
                scanf("%d", &limiteInferior);

                printf("\nInforme um limite superior:");//Entrada de dados do intervalo superior.
                scanf("%d", &limiteSuperior);
            }
            while (limiteInferior > limiteSuperior); //Validação de intervalo.
            for (limiteInferior; limiteInferior <= limiteSuperior; limiteInferior++)//Execução da função de verificação por todo o intervalo.
            {
                verifica(limiteInferior, opcao);
            }
            break; //Quebra ao final do intervalo.
        default:
        {
            printf("Opcao informada invalida\n"); //Validação de opção escolhida.
            break;
        }
        }
        printf("\nDeseja repetir a execucao do programa? <S/s>\n");//Repetição do programa
        setbuf(stdin, NULL); //Limpeza do buffer do teclado.
        scanf("%c", &continuar); //Entrada de dado para continuar o programa.
        continuar = toupper(continuar);//Tranformação de letra minúscula para maiúscula.
    }
    while (continuar == 'S');
    //Termino do programa.
    system("pause");
    return 0;
}
