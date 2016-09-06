#include<cstdio>

const int maxn = 100;
int rodadas[maxn][maxn];
int b[maxn];

int main(){
    int n, m, p1=0, p2=0, soma_atual;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i<m; ++i){
        scanf(" %d", &b[i]);

        for(int j = 0; j<n; ++j)
            scanf(" %d", &rodadas[i][j]);
    }

    for(int i = 0; i<m; ++i){
        soma_atual = 0;
        for(int j = 0; j<n; ++j)
            soma_atual += rodadas[i][j];
        if (soma_atual <= b[i])
            p1 += rodadas[i][0];
    }

    for(int i = 0; i<m; ++i){
        soma_atual = 0;

        for(int j = 1; j<n; ++j)
            soma_atual += rodadas[i][j];
        
        //printf("soma_atual: %d, i: %d\n", soma_atual, i); 
        if(soma_atual < b[i]){
            if (soma_atual + 10000 <= b[i])
                p2 += 10000;
            else if (soma_atual + 1000 <= b[i])
                p2 += 1000;
            else if (soma_atual + 100 <= b[i])
                p2 += 100;
            else if (soma_atual + 10 <= b[i])
                p2 += 10;
            else if (soma_atual + 1 <= b[i])
                p2 += 1;
            //printf("soma_atual: %d, i: %d, p2: %d\n", soma_atual, i, p2); 
        }
    }

    printf("%d\n", p2 - p1);

    return 0;
}
