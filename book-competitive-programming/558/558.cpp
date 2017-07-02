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
const int maxn = 2048;

typedef pair<int, int> pii;
vector<pii> adj[maxn];
int dist[maxn];

typedef long long int huge;

int main(){
  int t, n, m, u, v, w;

  scanf(" %d", &t);

  while(t--){
    scanf(" %d %d", &n, &m);
    for(int i = 0; i<n; ++i){
      adj[i].clear();
      dist[i] = inf;
    }

    for(int i = 0; i<m; ++i){
      scanf(" %d %d %d", &u, &v, &w);
      adj[u].push_back(pii (v, w));
    }

    dist[0] = 0;
    for(int i = 0; i<n; ++i){
      for(int u = 0; u<n; ++u){
        for(int v = 0; v<adj[u].size(); ++v){
          dist[adj[u][v].first] =
            min(dist[adj[u][v].first], dist[u] + adj[u][v].second);
        }
      }
    }
    int negative_cycle = 0;
    for(int u = 0; u<n; ++u){
      for(int v = 0; v<adj[u].size(); ++v){
        if(dist[adj[u][v].first] > dist[u] + adj[u][v].second){
          negative_cycle = 1;
          goto end;
        }
      }
    }
end: printf("%s\n", negative_cycle? "possible" : "not possible");
  }

  return 0;
}
