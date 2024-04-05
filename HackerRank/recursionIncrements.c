int somaR(int soma, int count){
    if(count!=0){
        soma++;
        somaR(soma,count-1);
    }
    else
        return soma;
}
int main() {
    int n,a,b;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        v[i]=somaR(a,b);
    }
    for(int i=0;i<n;i++)
        printf("%d\n",v[i]);
    return 0;
}
