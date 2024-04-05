#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int tam;
    int item[150];
}Lista;
void inverter(Lista *lista){
    for(int esq=0,dir=lista->tam-1;esq<dir;esq++,dir--){
        int aux=lista->item[esq];
        lista->item[esq]=lista->item[dir],lista->item[dir]=aux;
    }
}
//duas atribuicoes, uma subtracao, uma comparacao, 3 atribuicoes, 2 incrementos, uma comparacao
//2+1+(n/2)(1+3+2)+1
//4+3n instrucoes
//O(4+3n)=O(4)+O(3n)= O(1)+ O(n) = 0 + O(n) = O(n)
/*int main(){
    Lista l = {9,{1,2,3,4,5,6,7,8,9}};
    inverter(&l);
    for(int i=0;i<l.tam;i++)
        printf("%d ",l.item[i]);
    return 0;
}*/
