#include <stdio.h>
#include <stdlib.h>
#include "listaE.h"
struct Cell{
    int item; // Pode ser uma struct, union, ou qualquer tipo de dados.
              // Para possibilitar o reuso dessa célula para qualquer
              // tipo de informação, recomendo o uso de ponteiro
              // genérico. Exemplo: void* item;
    int next;
};
// Estrutura para representar listas encadeadas
struct ListaE{
    Cell *head;
    Cell *next; 
    // Ponteiro para o primeiro elemento da lista
};
// Cria uma nova célula
Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;
    c->next = NULL;
    return c;
}
ListaE* criar_listaE(){
    ListaE* l = (ListaE*) malloc(sizeof(ListaE));
    l->head = NULL;
    return l;
}
int removerRecursiva(int key, ListaE *l){
    Cell *cellAtual, *cellAntes = NULL;
    if (!listaE_vazia(l)){
        cellAtual = l->head;
        if(cellAtual->item == key)
            l->head = l->head->next;
        else
            l->next = removerRecursiva(key, l->next);
    }
    return l;
}