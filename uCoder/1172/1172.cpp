#include<cstdio>
#include<stdlib.h>

int cmp(const void * a, const void * b){
    return *(int *) b - *(int *) a;
}
        
int main(){
    int t, n, c;

    int fila[1000];
    int fila_original[1000];

    scanf(" %d", &t);

    while(t--){

        scanf(" %d", &n);

        for(int i = 0; i<n; ++i){
            scanf(" %d", &fila[i]);
            fila_original[i] = fila[i];
        }
    
        qsort(fila, n, sizeof(int), cmp);

        c=0;
        for(int i = 0; i<n; ++i)
            if (fila[i] == fila_original[i])
                c++;

        printf("%d\n", c);
    } 

    return 0;
}
