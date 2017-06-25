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

char grid[maxn][maxn];
char countour = 'X';

typedef long long int huge;

int ii[] = {-1, 0, 0, 1};
int jj[] = {0, -1, 1, 0};

void dfs(int x, int y, char z){
  grid[x][y] = z;

  for(int i = 0; i<4; ++i){
    int ci = x + ii[i];
    int cj = y + jj[i];
    if(grid[ci][cj] == ' ')
      dfs(ci, cj, z);
  }
}

int main(){
  int i, x, y;

  while(1){
    i=0;
    while(1)
      if(!gets(grid[i]))
        return 0;
      else if(grid[i][0] == '_')
        break;
      else
        ++i;

    for(x = 0; x < i; ++x)
      for(y = 0; grid[x][y]; ++y)
        if(grid[x][y] != 'X' && grid[x][y] != ' ')
          dfs(x, y, grid[x][y]);

    for(x = 0; x < i; ++x){
      for(y = 0; grid[x][y]; ++y)
        printf("%c", grid[x][y]);
      printf("\n");
    }
    printf("_____________________________\n");
  }
}
