#include<cstdio>

int n, m, i, j;
const int V = 1100;
int arestas[V][V];
int time[V];
int quantidade[V];

void dfs(int v, int c){
    if (time[v] == -1){
        time[v] = c;
        for (int k=0; k<quantidade[v]; k++){
           dfs(arestas[v][k], c);
        }    
    }
}
int main(){
    scanf(" %d %d", &n, &m);
    for (int k = 0; k<=n; k++){
        quantidade[k] = 0;
        time[k] = -1;
    } 

    for(int k=0; k < m; k++){
        scanf(" %d %d", &i, &j);
        arestas[i][quantidade[i]] = j;
        arestas[j][quantidade[j]] = i;
        quantidade[i] += 1;
        quantidade[j] += 1;
    }
    int c = 0;
    for(int k = 1; k<=n; k++){
        if (time[k] == -1){
            dfs(k, c++);
        }
    }
    printf("%d\n", c);

    return 0;
}
