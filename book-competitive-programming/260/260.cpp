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
const int maxn = 256;

int ii[] = {-1, -1, 0, 0, 1, 1};
int jj[] = {-1, 0, -1, 1, 0, 1};

int board[maxn][maxn];
int visited[maxn][maxn];
int n, flag;

int dfs(int x, int y){
  visited[x][y] = 1;
  //printf("%d %d\n", x, y);

  for(int i = 0; i<6; ++i){
    int cur_i = x + ii[i];
    int cur_j = y + jj[i];

    if(!visited[cur_i][cur_j] && board[cur_i][cur_j]){
      if(cur_i == n+2 && cur_j == n+2)
        flag = 1;
      dfs(cur_i, cur_j);
    }
  }
  return 0;
}

int main(){
  int count=0;
  char aux;

  while(1){
    scanf("%d%*c", &n);
    if(!n) break;

    for(int i = 0; i<=n+3; ++i)
      for(int j = 0; j<=n+3; ++j)
        board[i][j] = visited[i][j] = 0;


    printf("%d ", ++count);
    for(int i = 1; i<=n+2; ++i)
      board[1][i] = 0;
    for(int i = 1; i<=n+2; ++i)
      board[i][1] = 1;
    for(int i = 1; i<=n+2; ++i)
      board[n+2][i] = 0;
    for(int i = 2; i<=n+2; ++i)
      board[i][n+2] = 1;

    for(int i = 2; i<=n+1; ++i){
      for(int j = 2; j<=n+1; ++j){
        scanf(" %c", &aux);
        board[i][j] = aux == 'b' ? 0 : 1;
      }
    }

    //for(int i = 0; i<=n+3; ++i){
      //for(int j = 0; j<=n+3; ++j)
        //printf("%d ", board[i][j]);
      //printf("\n");
    //}

    flag = 0;
    dfs(1,1);
    printf("%c\n", flag ? 'W' : 'B');
  }

  return 0;
}
