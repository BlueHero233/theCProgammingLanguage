int remover(int key, ListaE *l){
    Cell *auxA, *auxP = NULL; // células auxiliares
    if (!listaE_vazia(l)){
        auxA = l->head; // apontar o auxA para a cabeça da lista
        // Verificar se o elemento está na cabeça da lista
        if(auxA->item == key){
            // Atualizar a cabeça
            l->head = l->head->next;
        }else{
            // apontar auxP para auxA
            auxP = auxA;
            // Procurar a célula que deve ser removida
            while((auxA != NULL) && (auxA->item != key)){
                auxP = auxA; // Guardar o endereço auxA
                auxA = auxA->next; // Atualizar auxA
            }
        }
        if (auxA != NULL){
            // Caso a chave seja encontrada, ou seja, auxA diferente de
            // nulo, fazer a célula predecessora (auxP) apontar o ponteiro
            // "next" para o próximo elemento de auxA.
            // Esta comparação é necessária, pois o elemento a ser removido
            // pode ser a primeira célula da lista, na qual auxP == NULL
            if (auxP != NULL)
            	auxP->next = auxA->next; // funciona mesmo se auxP for igual a auxA
            // Agora, a célula auxA pode ser removida com segurança
            free(auxA);
            return 1; // Operação bem-sucedida
        }
    }
    return 0;
}