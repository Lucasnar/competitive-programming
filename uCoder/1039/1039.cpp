#include<cstdio>

// Algoritmo de Kadane.
// Maior soma em sublista continua.

int main(){
    int n, max, max_atual;

    scanf(" %d", &n);

    int arr[n+1];

    for(int i = 0; i<n; ++i)
        scanf(" %d", &arr[i]);

    max_atual = max = 0;

    for(int i = 0; i<n; ++i){

        max_atual = max_atual + arr[i];
        if(max_atual < 0)
            max_atual = 0;

        if(max < max_atual)
            max = max_atual;
    }

    printf("%d\n", max);

    return 0;
}
