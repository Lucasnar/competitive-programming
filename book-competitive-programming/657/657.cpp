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

const int maxn = 64;
const int inf = 0x3f3f3f;

int ans[maxn*maxn];
char img[maxn][maxn];
bool visited[maxn][maxn];
bool visited_x[maxn][maxn];

int ii[] = {-1, 0, 0, 1};
int jj[] = {0, -1, 1, 0};

void dfs_x(int x, int y){
  visited_x[x][y] = true;

  for(int i = 0; i<4; ++i){
   int ci = x + ii[i];
   int cj = y + jj[i];

   if(!visited_x[ci][cj] && img[ci][cj] == 'X')
     dfs_x(ci, cj);
  }

}

int dfs(int x, int y){
  int c = 0;
  visited[x][y] = true;

  if(!visited_x[x][y] && img[x][y] == 'X')
    ++c, dfs_x(x, y);

  for(int i = 0; i<4; ++i){
   int ci = x + ii[i];
   int cj = y + jj[i];

   if(!visited[ci][cj] && img[ci][cj] != '.')
     c += dfs(ci, cj);
  }

  return c;
}

typedef long long int huge;

int main(){
  int a, n, m, c = 0;

  while(1){
    scanf(" %d %d", &m, &n);
    if(!n)
      break;

    printf("Throw %d\n", ++c);

    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=m+1; ++j)
        img[i][j] = '.', visited[i][j] = visited_x[i][j] = false;
    a = 0;

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j)
        scanf(" %c", &img[i][j]);

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j)
        if(!visited[i][j])
          if (img[i][j] == '*' || img[i][j] == 'X'){
            ans[a++] = dfs(i, j);
          }

    sort(ans, ans+a);

    printf("%d", ans[0]);
    for(int i = 1; i<a; ++i)
      printf(" %d", ans[i]);
    printf("\n\n");
  }
  return 0;
}
