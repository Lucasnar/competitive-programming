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
const int maxn = 128;

int graph[maxn][maxn];
int dist[maxn];
bool visited[maxn];

int n, f, r, x, y, z;

typedef long long int huge;

int agm(){
    int cost = 0;
    dist[0] = 0;

    for(int i = 0; i<n; ++i){

        int min_index, min_dist=inf;
        
        for(int j = 0; j < n; ++j)
            if(!visited[j] && dist[j] < min_dist)
                min_index = j, min_dist = dist[j];

        visited[min_index] = true;
        if (min_dist > 10000) min_dist -= 10001;
        cost += min_dist;

        for(int j = 0; j < n; ++j)
            if(graph[min_index][j] < dist[j])
                dist[j] = graph[min_index][j];
    }

    return cost;
}

int main(){

    scanf(" %d %d %d", &n, &f, &r);

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j)
            graph[i][j] = inf;
        dist[i] = inf;
        visited[i] = false;
    }

    for(int i = 0; i<f; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        graph[--x][--y] = graph[y][x] = min(z, graph[x][y]);
    }

    for(int i = 0; i<r; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        z += 10001;
        graph[--x][--y] = graph[y][x] = min(z, graph[x][y]);
    }

    printf("%d\n", agm());

    return 0;
}
