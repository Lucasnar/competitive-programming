#include<cstdio>

const int maxe = 110;
int grafo[maxe][maxe];
int visitados[maxe];
int n_visitados,e;

int dfs(int v){
    visitados[v] = 1;
    ++n_visitados;

    for (int i = 1; i<=e; ++i)
        if (grafo[v][i] && !visitados[i])
            dfs(i);
}


int main(){
    int l, x, y, count=0;

    while (true){
        scanf(" %d %d", &e, &l);
        if (e==0) break;

        printf("Teste %d\n", ++count);

        n_visitados =0;
        for (int i = 1; i<=e; ++i){
            for (int j = 1; j<=e; ++j) grafo[i][j] = grafo[j][i] = 0;
            visitados[i] = 0;
        }

        for (int i = 1; i<=l; ++i)
            scanf(" %d %d", &x, &y), grafo[x][y] = grafo[y][x] = 1;

        dfs(1);

        //printf("%d\n\n", n_visitados);

        if (n_visitados == e) printf("normal\n");
        else printf("falha\n");
        printf("\n");
    }


    return 0;
}
