#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
8
clementino
hastrides
edineia
ivan
amanda
beraldo
danieli
francisco
4
*/
void quickNSimpleString(char **v, int esq, int dir, int m){
    int i=esq;
    int j=dir-1;
    char *pivo=v[dir], *aux;
    if(dir-esq>m){
        do{
            while((strcmp(v[i],pivo)<0)&&(i<dir))
                i++;
            while((strcmp(v[j],pivo)>0)&&(j>esq))
                j--;
            if(i<=j){
                strcpy(aux,v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],aux);
                i++;
                j--;
            }
        }while(i<=j);
        if(j>esq)
            quickNSimpleString(v,esq,j,m);
        if(i<dir)
            quickNSimpleString(v,i,dir,m);
    }else{
        for(i=0;i<dir-esq;i++){
            for(j=esq;j<dir-i;j++){
                if(strcmp(v[j],v[j+1])>0){
                    strcpy(aux,v[j]);
                    strcpy(v[j],v[j+1]);
                    strcpy(v[j+1],aux);
                }
            }
        }
    }
}
int main(){
    int i,tam,m;
    scanf("%d",&tam);
    char **v=(char**)malloc(tam*sizeof(char*));
    for(i=0;i<tam;i++){
        v[i]=(char*)malloc(100*sizeof(char));
        scanf("%s", v[i]);
    }
    scanf("%d", &m);
    quickNSimpleString(v,0,tam,m);
    for(i=0;i<tam;i++){
        printf("%s\n", v[i]);
        free(v[i]);
    }
    free(v);
    return 0;
}


