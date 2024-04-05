void selection_sort(int v[], int n){
    int i, j, min, aux;
    for (i = 0; i < (n - 1); i++){   1+(n-1)(1+(2+3n)+4+1)+1 = 3n^2+5n-6
        min = i;                     1
        for (j = (i+1); j < n; j++){ 1+(n)(3)+1 = 2+3n (n(n-1))/2
            if(v[j] < v[min])        1
                min = j;             1
        }
        if (v[i] != v[min]){         1
            aux = v[i];              1
            v[i] = v[min];           1
            v[min] = aux;            1
        }
    }
}
// x = k(k+1)/2
// x = n(n-1)/2
#define min(a, b) b < a ? b : a
int menor(int *v, int ini, int fim){
    if ((fim - ini) <= 1)
        return min(v[ini], v[fim]);
    else{
        int t = (fim + ini) / 2;
        return min(menor(v, ini, t), menor(v, t + 1, fim));
    }
}
