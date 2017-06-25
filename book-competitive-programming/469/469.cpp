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
char line[maxn];
int land[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int jj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

typedef long long int huge;

int dfs(int x, int y, int k){
  visited[x][y] = 1;

  for(int i = 0; i<8; ++i){
    int ci = x + ii[i];
    int cj = y + jj[i];
    if(!visited[ci][cj] && land[ci][cj])
      k += dfs(ci, cj, 1);
  }

  return k;
}

int main(){
  int t, x, y, i, l, j, count=0;

  scanf("%d%*c%*c", &t);

  while(t--){
    for(i = 0; i<maxn; ++i)
      for(j = 0; j<maxn; ++j)
        land[i][j] = visited[i][j] = 0;
    i = 1;

    while(gets(line)){
      //printf("%d\n", ++count);
      if (!line[0])
          break;
      for(l = 0; l<maxn; ++l)
        for(j = 0; j<maxn; ++j)
          visited[l][j] = 0;
      //printf("%s\n", line);

      if (sscanf(line, "%d %d%*c", &x, &y) == 2)
        printf("%d\n", dfs(x, y, 1));
      else
        for(int j = 0, k = 1; line[j]; ++j, ++k)
          land[i][k] = line[j] == 'W' ? 1 : 0;
      ++i;
    }

    if(t) printf("\n");
  }

  return 0;
}
