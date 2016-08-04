#include<cstdio>

const int maxn = 10010;
int array[maxn];

int main(){
    int n, n_anterior, pontos_atual=1, pontos=1;

    scanf(" %d", &n);

    for (int i =0; i<n; ++i)
        scanf(" %d", &array[i]);

    for (int i = 1; i<n; ++i){
        n_anterior = array[i-1];

        if(array[i] == n_anterior)
            ++pontos_atual;
        else
            pontos_atual = 1;
        
        if (pontos_atual>pontos)
            pontos = pontos_atual;
    }

    printf("%d\n", pontos);

    return 0;
}
