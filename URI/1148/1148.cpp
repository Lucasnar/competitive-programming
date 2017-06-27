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
const int maxn = 512 * 512;

typedef pair<int, int> ii;

vector<ii> graph[maxn];
int dist[maxn];

int djk(int start, int goal){
  set<ii> q;
  int cur;
  dist[start] = 0;
  q.insert(ii (0, start));
  while(!q.empty()){
    cur = q.begin()->second;
    q.erase(q.begin());
    for(int i = 0, size = (int) graph[cur].size(); i < size; ++i){
      if(dist[graph[cur][i].first] > dist[cur] + graph[cur][i].second){
        dist[graph[cur][i].first] = dist[cur] + graph[cur][i].second;
        q.insert(ii (dist[cur] + graph[cur][i].second, graph[cur][i].first));
      }
    }
  }

  return dist[goal];
}

void debug(int n){
  for(int i = 0; i < n; ++i){
    printf("%d ->", i);
    for(auto edge : graph[i]){
      printf(" (%d, %d)", edge.first, edge.second);
    }
    printf("\n");
  }
}

int were_connected(int v, int u, int n){
  for(int i = 0, size = (int) graph[u].size(); i < size; ++i){
    if(graph[u][i].first == v){
      graph[u][i].second = 0;
      return 1;
    }
  }
  return 0;
}

int main(){
  int n, e, u, v, w, k, flag = 0;

  while(scanf(" %d %d", &n, &e) && n){
//    if(flag)
//      printf("\n");
//    flag = 1;

    for(int i = 0; i < n; ++i){
      graph[i].clear();
      dist[i] = inf;
    }
    for(int i = 0; i < e; ++i){
      scanf(" %d %d %d", &v, &u, &w);
      --v, --u;
      if(were_connected(v, u, n))
        w = 0;
      graph[v].push_back(ii (u, w));
    }
    //debug(n);
    scanf(" %d", &k);
    for(int i = 0; i < k; ++i){
      scanf(" %d %d", &u, &v);
      --u, --v;
      for(int i = 0; i < n; ++i)
        dist[i] = inf;
      int ans = djk(u, v);
      if(ans == inf)
        printf("Nao e possivel entregar a carta\n");
      else
        printf("%d\n", ans);
    }
    printf("\n");
  }
  return 0;
}
