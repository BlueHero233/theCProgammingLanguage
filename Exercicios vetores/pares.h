#include <stdio.h>
void mostrarPares(int n){
    int i;
    for (i = 0; i < n; i++)
        if (i%2==0)
            printf("%d\t",i);  
}
int somaPares(int n){
    int i, soma=0;
    for (i = 0; i < n; i++){
        if (i%2==0){
            printf("%d\t",i);
            soma+=i;  
        }
    }
    return soma;
}