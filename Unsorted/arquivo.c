#include <stdio.h>  //#include "fib.h" 
void fib(int n);    //fib.h
int main(void)      //main.c
{   
    int num;
    scanf("%d", &num);
    fib(num);
    return 0;
}
void fib(int n)     //fib.c
{
    int i, a=0, b=1, c;
    for (i=0;i<n;i++)
        {
            c=a+b;  //c=0+1
            a=b;    //a=1
            b=c;    //b=1
        }
    printf("%d\n", a);
}