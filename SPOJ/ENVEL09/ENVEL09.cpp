#include<cstdio>

int main(){
    int n, k, x, menor=1000100;
    int array[1100];

    scanf(" %d %d", &n, &k);

    array[0] = 1000100;

    for (int i = 1; i<=k; ++i)
        array[i] = 0;

    for (int i = 1; i<=n; ++i){
        scanf(" %d", &x);
        array[x]++;
    }

    for(int i=0; i<=k; ++i) if(array[i] < menor) menor = array[i];

    printf("%d\n", menor);

    return 0;
}
