#include<cstdio>

const int maxn = 201;
int notas[maxn];

int main(){
    int n, nota;
    int mais_frequente = 0;

    scanf(" %d", &n);

    for (int i =0 ; i<=100; ++i)
        notas[i] = 0;

    for (int i =0 ; i<n; ++i){
        scanf(" %d", &nota);
        //printf("%d\n", nota);
        notas[nota]++;
    }

    //printf("notas[] = [ ");
    //for (int i = 0; i<10; ++i) printf("%d ", notas[i]);
    //printf("]\n\n");

    for (int i = 0; i<=100; ++i)
        if (notas[i]>=notas[mais_frequente]) mais_frequente = i;

    printf("%d\n", mais_frequente);

    return 0;
}
