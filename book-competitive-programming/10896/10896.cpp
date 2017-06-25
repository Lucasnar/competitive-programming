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
const int maxn = 1024 * 32;

#define ii pair<int, int>

int dist[maxn];
vector<ii> adj[maxn];

void dijkstra(int start){
  set<ii> s;
  int cur = start;
  s.insert(ii (0, cur));
  dist[cur] = 0;
  while(!s.empty()){
    cur = s.begin()->second;
    s.erase(s.begin());
    for(ii edge : adj[cur]){
      if(dist[edge.first] > dist[cur] + edge.second){
        dist[edge.first] = dist[cur] + edge.second;
        s.insert(ii (dist[edge.first], edge.first));
      }
    }
  }
}

int n;
void debug(){
  for(int i = 0; i<n; ++i){
    printf("%d ->", i);
    for(ii edge : adj[i]){
      printf(" (%d, %d)", edge.first, edge.second);
    }
    printf("\n");
  }
}

int main(){
  int te, m, s, t, a, b, w;

  scanf(" %d", &te);

  for(int c = 0; ++c <= te;){
    scanf(" %d %d", &n, &m);
    scanf(" %d %d", &s, &t);

    for(int i = 0; i<n; ++i){
      dist[i] = inf;
      adj[i].clear();
    }

    for(int j = 0; j<m; ++j){
      scanf(" %d %d %d", &a, &b, &w);
      adj[a].push_back(ii (b, w));
      adj[b].push_back(ii (a, w));
    }

    //debug();

    dijkstra(s);

    printf("Case #%d: ", c);
    if(dist[t] == inf)
      printf("unreachable\n");
    else
      printf("%d\n", dist[t]);
  }

  return 0;
}
