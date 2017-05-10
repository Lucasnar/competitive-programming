#include<cstdio>
#include<queue>
#include<algorithm>

using namespace std;

const int maxn = 512;
struct {
  int node;
  int level;
} graph[maxn][maxn];
int visited[maxn][maxn];
int n, m;

int ii[] = {0, 0, -1, 1};
int jj[] = {1, -1, 0, 0};
int dist, i_atual, j_atual, blah, bleh, size;

void bfs(int x, int y){
  queue<pair<int, int> > q;
  pair<int, int> v;
  q.push(make_pair(x, y));
  for(int i = 0; i<=n+1; ++i)
    for(int j = 0; j<=m+1; ++j)
      visited[i][j] = 0;
  visited[x][y] = 1;
  graph[x][y].level = 0;


  while(!q.empty()){
    v = q.front();
    q.pop();
    for(int i = 0; i<4; ++i){
      i_atual = v.first + ii[i];
      j_atual = v.second + jj[i];
      if (graph[i_atual][j_atual].node && !visited[i_atual][j_atual]){
        //printf("adding graph[%d][%d] == %d\n", i_atual, j_atual, graph[i_atual][j_atual]);
        visited[i_atual][j_atual] = 1;
        q.push(make_pair(i_atual, j_atual));
        dist = graph[i_atual][j_atual].level = graph[v.first][v.second].level + 1;
        blah = i_atual, bleh = j_atual;
      }
    }
  }
}

int main(){
  char c1;

  while(1){
    scanf(" %d %d", &n, &m);
    if(!n) break;

    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=m+1; ++j)
        graph[i][j].node = graph[i][j].level = visited[i][j] = 0;

    for(int i = 1; i<=n; ++i){
      for(int j = 1; j<=m; ++j){
        scanf(" %c", &c1);
        graph[i][j].node = c1 == '.';
      }
    }

    //printf("graph\n");
    //for(int i = 1; i<=n; ++i){
    //for(int j = 1; j<=m; ++j)
    //printf("%d ", graph[i][j]);
    //printf("\n");
    //}

    dist = -1;
    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j)
        if(graph[i][j].node && dist == -1)
          bfs(i, j);
    bfs(blah, bleh);

    printf("%d\n", dist);
  }

  return 0;
}
