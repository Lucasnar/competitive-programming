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
const int maxn = 512;

int graph[maxn][maxn];
int dist[maxn];
bool visited[maxn];

typedef long long int huge;

int mst(int size, int start){ // keywords for searching: agm, arvore minima, geradora, minimum spanning tree
    int cost = 0;
    dist[start] = 0;

    for(int i = 0; i<size; ++i){

        int min_index, min_dist=inf;
        for(int j = 0; j < size; ++j)
            if(!visited[j] && dist[j] < min_dist)
                min_index = j, min_dist = dist[j];

        visited[min_index] = true;
        cost += min_dist;

        for(int j = 0; j<size; ++j)
            if(graph[min_index][j] < dist[j])
                dist[j] = graph[min_index][j];
    }
    return cost;
}

int main(){
    int n, m, x, y, z;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j)
            graph[i][j] = inf;

        dist[i] = inf;
        visited[i] = false;
    }

    for(int i = 0; i<m; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        graph[--x][--y] = graph[y][x] = z;
    }

    printf("%d\n", mst(n, 0));

    return 0;
}
