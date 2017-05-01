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
const int maxn = 16;

struct pos{
  int visited;
  int level;
};

pos board[maxn][maxn];
char line[maxn];
int xt, yt, n;

int ii[] = {-1, -2, -2, -1, 1, 2, 1, 2};
int jj[] = {-2, -1, 1, 2, -2, -1, 2, 1};

void bfs(int x, int y, int d){
  board[x][y].visited = 1;
  queue<pair<int, int> > q;
  q.push(make_pair(x, y));
  pair<int, int> v;

  while(!q.empty()){
    v = q.front(); q.pop();

    for(int i = 0; i<8; ++i){
      int ci = v.first + ii[i];
      int cj = v.second + jj[i];
      if(!board[ci][cj].visited){
        board[ci][cj].visited = 1;
        q.push(make_pair(ci, cj));
        board[ci][cj].level = board[v.first][v.second].level + 1;
        if(ci == xt && cj == yt){
          n = board[ci][cj].level;
          while(!q.empty())
            q.pop();
        }
      }
    }
  }
}

int main(){
  int x, y;
  for(int i = 0; i<maxn; ++i)
    for(int j = 0; j<maxn; ++j)
      board[i][j].visited = 1;

  while(gets(line)){
    for(int i = 2; i<10; ++i)
      for(int j = 2; j<10; ++j)
        board[i][j].visited = board[i][j].level = 0;

    x = 10 - (line[1] - 48);
    y = (line[0] - 'a') + 2;

    xt = 10 - (line[4] - 48);
    yt = (line[3] - 'a') + 2;

    n = 0;
    bfs(x, y, 0);

    printf("To get from %c%c to %c%c takes %d knight moves.\n", line[0], line[1], line[3], line[4], n);
  }

  return 0;
}

