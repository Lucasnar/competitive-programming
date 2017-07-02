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
const int maxn = 1024;

typedef pair<int, int> pii;

vector<pii> graph[maxn];
int dist[maxn];

void clear_graph(int n){
  for(int i = 0; i<n; ++i)
    graph[i].clear();
}

void reset_dist(int n){
  for(int i = 0; i<n; ++i)
    dist[i] = inf;
}

void erase_from_graph(int u, int v){
  for(int i = 0, size = (int) graph[u].size(); i<size; ++i)
    if(graph[u][i].first == v){
      graph[u].erase(graph[u].begin() + i);
      return;
    }
}

int dj(int goal){
  set<pii> s;
  int cur;
  s.insert(pii (0, 0));
  dist[0] = 0;
  while(!s.empty()){
    cur = s.begin()->second;
    s.erase(s.begin());
    for(pii edge : graph[cur]){
      if(dist[edge.first] > dist[cur] + edge.second){
        dist[edge.first] = dist[cur] + edge.second;
        s.insert(pii (dist[edge.first], edge.first));
      }
    }
  }

  return dist[goal] == inf ? -1: dist[goal];
}

int main(){
  int n, m, u, v, w, q;
  char query;

  while(scanf(" %d %d", &n, &m) && n){
    clear_graph(n);

    for(int i = 0; i<m; ++i){
      scanf(" %d %d %d", &u, &v, &w);
      graph[--u].push_back(pii (--v, w));
    }

    scanf(" %d", &q);

    for(int i = 0; i<q; ++i){
      scanf(" %c", &query);
      if(query == 'R'){
        scanf(" %d %d", &u, &v);
        erase_from_graph(--u, --v);
      }
      else if(query == 'I'){
        scanf(" %d %d %d", &u, &v, &w);
        graph[--u].push_back(pii (--v, w));
      }
      else if(query == 'P'){
        scanf(" %d", &u);
        reset_dist(n);
        printf("%d\n", dj(--u));
      }
      else {
        printf("WTH!");
      }
    }

    printf("\n");
  }


  return 0;
}
