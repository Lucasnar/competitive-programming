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

const int maxn = 1024;

int mtx[maxn][maxn];
int visited[maxn][maxn];

struct {
  int x;
  int y;
} end_position;

int ii[] = {-1, 0, 0, 1};
int jj[] = {0, -1, 1, 0};

typedef pair<int, int> pii;

void bfs(int x, int y){
  queue<pii> q;
  pii cur;
  q.push(pii (x, y));
  visited[x][y] = 1;
  while(!q.empty()){
    cur = q.front();
    q.pop();
    for(int i = 0; i<4; ++i){
      int cur_i = cur.first + ii[i];
      int cur_j = cur.second + jj[i];
      if(!visited[cur_i][cur_j] && mtx[cur_i][cur_j]){
        visited[cur_i][cur_j] = 1;
        end_position.x = cur_i, end_position.y = cur_j;
        q.push(pii (cur_i, cur_j));
      }
    }
  }
}

int main(){
  int n, m, x, y;

  scanf(" %d %d %d %d", &n, &m, &x, &y);

  for(int i = 0; i<=n+1; ++i)
    for(int j = 0; j<=m+1; ++j)
      visited[i][j] = mtx[i][j] = 0;

  for(int i = 1; i<=n; ++i)
    for(int j = 1; j<=m; ++j)
      scanf(" %d", &mtx[i][j]);

  bfs(x, y);
  printf("%d %d\n", end_position.x, end_position.y);

  return 0;
}
