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

const int inf = 16;
const int maxn = 1024;

int board[maxn][maxn];
int visited[maxn][maxn];
int parent[maxn][maxn];

typedef long long int huge;
typedef pair<int, int> pii;

int ii[] = { -1, 0, 1, 0 };
int jj[] = { 0, 1, 0, -1 };
int n;

void bfs(pii start){
  for(int i = max(start.first-16, 0); i<=start.first+16; ++i)
    for(int j = max(start.second-16, 0); j<=start.second+16; ++j)
      visited[i][j] = 0;

  queue<pii> q;
  pii cur;
  visited[start.first][start.second] = 1;
  parent[start.first][start.second] = 0;
  q.push(start);

  while(!q.empty()){
    cur = q.front();
    q.pop();
    //printf("cur.first %d cur.second %d\n", cur.first, cur.second);
    if(parent[cur.first][cur.second] >= 9)
      break;
    for(int i = 0; i<4; ++i){
      int ci = cur.first + ii[i];
      int cj = cur.second + jj[i];
      if(!visited[ci][cj] &&
          board[ci][cj] &&
          parent[ci][cj] > parent[cur.first][cur.second] + 1){

        visited[ci][cj] = 1;
        parent[ci][cj] = parent[cur.first][cur.second] + 1;
        q.push(pii (ci, cj));
      }
    }
  }
}

int main(){
  char aux;

  scanf(" %d%*c", &n);

  for(int i = 0; i<n+1; ++i)
    for(int j = 0; j<=n+1; ++j){
      board[i][j] = -1;
      visited[i][j] = 0;
      parent[i][j] = inf;
    }

  for(int i = 1; i<=n; ++i){
    for(int j = 1; j<=n; ++j){
      scanf("%c", &aux);
      if(aux == '0'){
        board[i][j] = 0;
        parent[i][j] = 0;
      }
      else
        board[i][j] = 1;
    }
    scanf("%*c");
  }

  //for(int i = 1; i<=n; ++i){
    //for(int j = 1; j<=n; ++j)
      //printf("%d ", board[i][j]);
    //printf("\n");
  //}

  for(int i = 1; i<=n; ++i)
    for(int j = 1; j<=n; ++j)
      if(!board[i][j])
        bfs(pii (i, j));

  for(int i = 1; i<=n; ++i){
    for(int j = 1; j<=n; ++j)
      printf("%d", min(parent[i][j], 9));
    printf("\n");
  }

  return 0;
}
