#include<cstdio>

const int maxn = 50000;
int casas[maxn];
int entregas[maxn];
int tempo, atual;

void ir_ate(int destino){
    while(casas[atual] != destino){
        if (casas[atual] < destino)
            ++atual, ++tempo;
        else
            --atual, ++tempo;
    }
}

int main(){
    int n, m;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &casas[i]);

    entregas[0] = casas[0];
    for(int i = 1; i<=m; ++i)
        scanf(" %d", &entregas[i]);

    atual = 0;
    for(int i = 0; i<=m; ++i)
        ir_ate(entregas[i]);

    printf("%d\n", tempo);

    return 0;
}
