#include<stdio.h>
int main (void){
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    printf("%d%d%d",a,c,d);
    return 0;
}