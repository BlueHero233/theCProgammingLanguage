#include<stdio.h>
int main (void){
    int n,a,b,c;
    scanf("%d",&n);
    a=n/100;
    b=n/10%10;
    c=n%10;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}