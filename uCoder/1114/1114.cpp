// NAO RESOLVIDO

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const int maxn = 10100;

vector<pair<pair<int, int>, int> > adj[maxn];
int mtx[100][100];
int dist[maxn];

void dijkstra(int start) {
    int v = start;
  dist[start]=0;
  set<pair<int, int> > q;
  q.insert(make_pair(dist[start], start));
  while(!q.empty()) {
    int current = q.begin()->second;
    q.erase(q.begin());
    for(auto it = adj[current].begin(); it!=adj[current].end(); ++it) {
      int k = it->second;
      v++;
      if(dist[v] > dist[current]+k) {
        auto tmp = q.find(make_pair(dist[v], v));
        if (tmp!=q.end()) {
          q.erase(tmp);
        }
        dist[v] = dist[current]+k;
        q.insert(make_pair(dist[v], v));
      }
    }
  }
}

int main() {
  int n, m, a, b;
  scanf(" %d", &n);
  for(int i=0; i<n; ++i) {
    adj[i].clear();
    dist[i] = inf;
  }

  for(int i=0; i<=n+1; ++i)
      for(int j=0; j<=n+1; ++j)
          mtx[i][j] = 1;

  for(int i=1; i<=n; ++i) {
      for(int j=1; j<=n; ++j) {
          scanf(" %d", &mtx[i][j]);
      }
  }

  for(int i=1, k=1; i<=n; ++i)
      for(int j=1; j<=n; ++j){
          if(mtx[i-1][j])
              adj[k].push_back(make_pair(make_pair(i, j), 1));
          else
              adj[k].push_back(make_pair(make_pair(i, j), 0));

          if(mtx[i][j+1])
              adj[k].push_back(make_pair(make_pair(i, j), 1));
          else
              adj[k].push_back(make_pair(make_pair(i, j), 0));
          
          if(mtx[i+1][j])
              adj[k].push_back(make_pair(make_pair(i, j), 1));
          else
              adj[k].push_back(make_pair(make_pair(i, j), 0));

          if(mtx[i+1][j+1])
              adj[k].push_back(make_pair(make_pair(i, j), 1));
          else
              adj[k].push_back(make_pair(make_pair(i, j), 0));
          ++k;
      }

  dijkstra(1);
  printf("%d\n", dist[n]);
  return 0;
}
