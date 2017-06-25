// NOT FINISHED
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
const int maxn = 128;

char grid[maxn][maxn];
bool visited[maxn][maxn];

typedef long long int huge;

int ii[] = {-1, 0, 0, 1};
int jj[] = {0, -1, 1, 0};

void dfs(int x, int y){
  visited[x][y] = true;

  for(int i = 0; i<4; ++i){
    int ci = x + ii[i];
    int cj = y + jj[i];
    if(grid[ci][cj] == ' ')
      dfs(ci, cj);
    else if(grid[ci][cj] == 'X')
      grid[x][y] = '#';
  }

}

int main(){
  int t, n, i, j;

  scanf("%d%*c", &t);

  while(t--){
    n = 0;
    while(1){
      gets(grid[n]);
      n++;
      if(grid[n-1][0] == '_')
        break;
    }

    for(i = 0; i < maxn; ++i)
      for(j = 0; j < maxn; ++j)
        visited[i][j] = false;

    for(i = 0; i < n; ++i)
      for(j = 0; grid[i][j]; ++j)
        if(grid[i][j] == '*'){
          dfs(i, j);
          break;
        }

    for(i = 0; i < n; ++i)
      puts(grid[i]);
  }

  return 0;
}
