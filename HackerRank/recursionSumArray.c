int somaRV(int v[], int n){
    if(n<0) return 0;
    else return v[n]+somaRV(v,n-1);
}
int main() {
    int n,a,b;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        v[i]=a;
    }
    b=somaRV(v,n);
        printf("%d",b);
    return 0;
}
