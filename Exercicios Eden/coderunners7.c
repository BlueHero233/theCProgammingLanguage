#include <stdio.h>
int main(void){
   float d,t;
   int v;
   scanf(" %f%f%d",&d,&t,&v);
   if(d/t>v/3.6)
       printf("EXCEDEU");
   else
       printf("NAO EXCEDEU");
   return 0;
}