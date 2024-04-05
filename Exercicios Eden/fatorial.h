unsigned long long fatorial(int a){
    int fat=1, i;
    for (i=a;i>=1;i--)
        fat*=i;
    return fat;
}