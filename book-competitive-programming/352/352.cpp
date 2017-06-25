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

int tigerville[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int jj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

typedef long long int huge;

int dfs(int x, int y){
  visited[x][y] = 1;
  //printf("%d %d\n", x, y);

  for(int i = 0; i<8; ++i){
    int cur_i = x + ii[i];
    int cur_j = y + jj[i];
    if(tigerville[cur_i][cur_j] && !visited[cur_i][cur_j])
      dfs(cur_i, cur_j);
  }
}

int main(){
  int n, aux, count = 0, war_eagles;

  while(scanf(" %d", &n) == 1){
    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=n+1; ++j)
        tigerville[i][j] = visited[i][j] = 0;

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=n; ++j)
        scanf(" %1d", &tigerville[i][j]);

    war_eagles = 0;
    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=n; ++j)
        if(tigerville[i][j] && !visited[i][j])
          dfs(i, j), ++war_eagles;

    printf("Image number %d contains %d war eagles.\n", ++count, war_eagles);
  }

  return 0;
}
