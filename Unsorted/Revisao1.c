/*Ler uma string e criar uma função que receba a string e retorne quantas palavras a mesma possui. Criar
uma segunda função para contar quantas letras têm em cada palavra da string, armazenando essa contagem
em um vetor passado por parâmetro para a função (esse vetor terá como tamanho o número de palavras da
string). Na sequência, ordenar o vetor e mostrar o vetor. Construir uma matriz de n linhas e duas colunas,
sendo que n representa a quantidade de elementos do vetor (se o elemento ocorrer mais de uma vez,
considerar apenas uma ocorrência). Na segunda coluna da matriz armazenar a quantidade de divisores que o
elemento possui será armazenada. Percorrer a matriz mostrando os elementos das colunas 0 e 1 e
escrevendo “Sim” quando o elemento que está na coluna 0 for primo e “Não” caso contrário.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/
#include <stdio.h>
#include <string.h>
void quantPalavras(char string[]);
int main(void)
{
    int palavras;
    char string[255];
    gets(string);
    quantPalavras(string);
    
    return 0;
}
void quantPalavras(char string[]){
    int i, palavras;
    i=0, palavras=0;
    while(string[i]!='\0'){
        if(string[i]==' ')
            palavras++;
        i++;
    }
    printf("%d\n", palavras);
}