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
const int maxn = 32;
typedef pair<int, int> pii;

char maze[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, 0, 1, 0};
int jj[] = {0, 1, 0, -1};

bool bfs(pii st, pii ed){
  queue<pii> q;
  pii cur;
  visited[st.first][st.second] = 1;
  q.push(st);
  while(!q.empty()){
    cur = q.front();
    q.pop();
    //printf("on position %d %d\n", cur.first, cur.second);
    for(int i = 0; i<4; ++i){
      int ci = cur.first + ii[i];
      int cj = cur.second + jj[i];
      if(!visited[ci][cj] && (maze[ci][cj] == ' ' || maze[ci][cj] == 'T')){
        //printf("  visited %d %d\n", ci, cj);
        visited[ci][cj] = 1;
        q.push(pii (ci, cj));
        if(ci == ed.first && cj == ed.second)
          return true;
      }
    }
  }

  return false;
}

int main(){
  int n;
  pii st, ed;

  while(scanf(" %d%*c", &n) == 1){
    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=n+1; ++j)
        visited[i][j] = 0, maze[i][j] = '*';

    for(int i = 1; i<=n; ++i){
      for(int j = 1; j<=n; ++j){
        scanf("%c", &maze[i][j]);
        if(maze[i][j] == 'I')
          st = pii (i, j);
        if(maze[i][j] == 'T')
          ed = pii (i, j);
      }
      scanf("%*c");
    }

    printf("%s\n", bfs(st, ed) ? "S" : "N");
  }

  return 0;
}
