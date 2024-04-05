#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    if(n>0)
        printf("POSITIVO");
    if(n<0)
        printf("NEGATIVO");
    if(n==0)
        printf("NULO");
    return 0;
}