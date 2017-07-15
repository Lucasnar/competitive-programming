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
int seen[maxn];
int path[maxn];

int augmented_path(int n, int source, int sink){
  for(int i = 0; i<n; ++i)
    seen[i] = 0;

  queue<int> q;
  int cur;
  seen[source] = 1;
  path[source] = source;
  q.push(source);

  while(!q.empty()){
    cur = q.front();
    q.pop();
    for(int i = 0; i<n; ++i){
      if(graph[cur][i] && !seen[i]){
        q.push(i);
        seen[i] = 1;
        path[i] = cur;
      }
    }
  }

  return seen[sink];
}

int max_flow(int n, int source, int sink){
  int flow = 0, cur_flow, cur_node;
  while(augmented_path(n, source, sink)){
    cur_flow = inf, cur_node = sink;
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
  int n, m, u, v, w, source, sink, c=0;

  while(scanf(" %d", &n) && n){
    for(int i = 0; i<n; ++i)
      for(int j = 0; j<n; ++j)
        graph[i][j] = 0;
    scanf(" %d %d %d", &source, &sink, &m);
    for(int i = 0; i<m; ++i){
      scanf(" %d %d %d", &u, &v, &w);
      graph[--u][--v] += w;
      graph[v][u] += w;
    }

    printf("Network %d\nThe bandwidth is %d.\n\n", ++c, max_flow(n, --source, --sink));
  }
  return 0;
}
