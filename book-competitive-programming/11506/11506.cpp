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
int path[maxn];
bool seen[maxn];
int cost[maxn];
int n;

bool bfs(int source, int sink){
  for(int i = 0; i<n; ++i)
    seen[i] = 0;

  queue<int> q;
  int cur;
  seen[source] = 1;
  path[source] = source;
  q.push(source);
  while(!q.empty()){
    cur = q.front(); q.pop();
    //printf("cur = %d\n", cur);
    for(int i = 0; i<n; ++i){
      if(graph[cur][i] && !seen[i]){
        q.push(i);
        seen[i] = 1;
        path[i] = cur;
      }
    }
  }

  //printf("\n");
  return seen[sink] == 1;
}

int max_flow(int source, int sink){
  int flow = 0, cur_node, cur_flow;
  while(bfs(source, sink)){
    cur_node = sink; cur_flow = inf;
    while(path[cur_node] != cur_node){
      cur_flow = min(cur_flow, graph[path[cur_node]][cur_node]);
      cur_node = path[cur_node];
    }
    flow += cur_flow;
    cur_node = sink;
    while(path[cur_node] != cur_node){
      graph[path[cur_node]][cur_node] -= cur_flow;
      graph[cur_node][path[cur_node]] += cur_flow;
      cur_node = path[cur_node];
    }
  }

  return flow;
}

int main(){
  int m, u, v, w;

  while(scanf(" %d %d", &n, &m) && n){
    for(int i = 0; i<n*2; ++i)
      for(int j = 0; j<n*2; ++j)
        graph[i][j] = 0;

    graph[1][0] = graph[0][1] = inf;
    graph[2*(n-1)][2*(n-1)+1] = graph[2*(n-1)+1][2*(n-1)] = inf;

    for(int i = 0; i<n-2; ++i){
      scanf(" %d %d", &u, &w);
      --u;
      v = 2*u;
      u = 2*u+1;
      graph[u][v] = graph[v][u] = w;
    }

    for(int i = 0; i<m; ++i){
      scanf(" %d %d %d", &u, &v, &w);
      --u, --v;
      graph[2*u+1][2*v] = graph[2*v+1][2*u] = w;
    }

    n *= 2;
    printf("%d\n", max_flow(1, n-1));
  }
  return 0;
}
