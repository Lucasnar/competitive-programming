// NOT FINISHED
// Can't figure out how to print the vertices ¬¬

#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 110; // 10 ^ 5

int graph[maxn][maxn];
int visited[maxn];
int dist[maxn];
int n, m, x, y, z;

typedef long long int huge;

void agm(){

    dist[0] = 0;
    int custo = 0, menor_indice_ligado;

    for(int i = 0; i<n; ++i){

        int menor, menor_dist = inf;

        for(int j = 0; j<n; ++j)
            if(!visited[j] && dist[j] < menor_dist){
                menor = j;
                menor_dist = dist[j];
            }

        visited[menor] = 1;

        for(int j = 0; j<n; ++j)
            if(!visited[j] && graph[menor][j] < dist[j]){
                dist[j] = graph[menor][j];
            }

    }
}

int main(){
    int c=0;

    while(1){
        scanf(" %d %d", &n, &m);
        if(!n) break;

        printf("Teste %d\n", ++c);

        for(int i = 0; i<n; ++i){
            for(int j = 0; j<n; ++j)
                graph[i][j] = inf;

            dist[i] = inf;
            visited[i] = 0;
        }

        for(int i = 0; i<m; ++i){
            scanf(" %d %d %d", &x, &y, &z);
            graph[--x][--y] = graph[y][x] = z;
        }

        //for(int i = 0; i<n; ++i){
            //for(int j = 0; j<n; ++j)
                //printf("%d ", graph[i][j]);
            ////printf("\n");
        //}
            

        agm();
    }

    return 0;
}
