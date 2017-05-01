#include<cstdio>
#include<queue>

using namespace std;

const int maxn = 1024;

int mtx[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, 1, 0, 0};
int jj[] = {0, 0, 1, -1};

int flood_fill(int x, int y){
  queue<pair<int, int> > q;
  int count = 0;
  int cur_i, cur_j;
  pair<int, int> v;
  q.push(make_pair(x, y));

  while(!q.empty()){
    v = q.front(); q.pop();

    for(int i = 0; i<4; ++i){
      cur_i = v.first + ii[i];
      cur_j = v.second + jj[i];
      if(!visited[cur_i][cur_j] &&
          mtx[cur_i][cur_j] == mtx[v.first][v.second]){
        visited[cur_i][cur_j] = 1;
        ++count;
        q.push(make_pair(cur_i, cur_j));
      }
    }
  }

  return count;
}

int main(){
  int n, m, x, y;

  while(scanf(" %d %d", &n, &m) && (n || m)){
    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=m+1; ++j){
        mtx[i][j] = -1;
        visited[i][j] = 0;
      }


    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j){
        scanf(" %d", &x);
        mtx[i][j] = x;
      }

    scanf(" %d %d", &x, &y);

    n = flood_fill(x, y);
    printf("%d\n", n ? n : 1);
  }

  return 0;
}
