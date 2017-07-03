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
const int maxn = 124;

typedef pair<int, int> pii;
int mtx[maxn][maxn];
int dist[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, 0, 1, 0};
int jj[] = {0, 1, 0, -1};

void dj(pii start){
  set<pair<int, pii> > pq;
  pii cur, v;
  dist[start.first][start.second] = 0;
  pq.insert(pair<int, pii> (0, pii (start.first, start.second)));
  while(!pq.empty()){
    cur = pq.begin()->second;
    pq.erase(pq.begin());
    visited[cur.first][cur.second] = 1;

    for(int i = 0; i<4; ++i){
      v = pii (cur.first + ii[i], cur.second + jj[i]);
      if( !visited[v.first][v.second] &&
          dist[v.first][v.second] >
          dist[cur.first][cur.second] + mtx[v.first][v.second]){
        dist[v.first][v.second] =
          dist[cur.first][cur.second] + mtx[v.first][v.second];
        pq.insert(pair<int, pii> (dist[v.first][v.second], v));
      }
    }
  }
}

int main(){
  int n;
  scanf(" %d", &n);

  for(int i = 0; i<=n+1; ++i)
    for(int j = 0; j<=n+1; ++j){
      mtx[i][j] = dist[i][j] = inf;
      visited[i][j] = 0;
    }
  for(int i = 1; i<=n; ++i)
    for(int j = 1; j<=n; ++j)
      scanf(" %d", &mtx[i][j]);

  dj(pii (1, 1));
  printf("%d\n", dist[n][n]);

  return 0;
}
