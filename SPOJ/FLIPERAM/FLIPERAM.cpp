#include<cstdio>
#include<cstdlib>

const int maxn = 10100;
int array[maxn];

int cmp(const void *n1, const void *n2){
        return (*(int *)n2 - *(int *)n1);
}

int main(){
    int n, m, n_atual;

    scanf (" %d %d", &n, &m);

    for (int i = 0; i<n; ++i){
        scanf(" %d", &n_atual);
        array[i] = n_atual;
    }

    qsort(array, n, 4, cmp); 

    for (int i =0 ; i<m; ++i) printf("%d\n", array[i]);


    return 0;
}
