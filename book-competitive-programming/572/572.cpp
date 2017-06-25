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

const int maxn = 128;

int tab[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int jj[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int cur_i, cur_j;

typedef long long int huge;

void dfs(int x, int y){
  visited[x][y] = 1;

  for(int i = 0; i<8; ++i){
    cur_i = x + ii[i];
    cur_j = y + jj[i];
    if(!visited[cur_i][cur_j] && tab[cur_i][cur_j] == 64)
      dfs(cur_i, cur_j);
  }

}

int main(){
  int n, m, count = 0;
  char aux;

//ascii * 42 @ 64
  while(1){
    scanf(" %d %d", &n, &m);
    if(!n) break;

    count = 0;
    for(int i = 0; i<=n+1; ++i){
      for(int j = 0; j<=m+1; ++j){
        tab[i][j] = 0;
        visited[i][j] = 0;
      }
    }

    //for(int i = 1; i<=n; ++i)
      //for(int j = 1; j<=m; ++j)
        //scanf(" %d", &tab[i][j]);

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j){
        scanf(" %c", &aux);
        tab[i][j] = (int) aux;
      }

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j)
        if(!visited[i][j] && tab[i][j] == 64)
          dfs(i, j), ++count;

    printf("%d\n", count);
  }
  return 0;
}
