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
const int maxn = 10;

int mtx[maxn][maxn];
int visited[maxn][maxn];

mtx = {{0, 1, 1, 0, 1},
       {1, 0, 1, 0, 1},
       {1, 1, 0, 1, 1},
       {0, 0, 1, 0, 1},
       {1, 1, 1, 1, 0}}

int main(){
  for(int i = 0; i<5; ++i)
    for(int j = 0; j<5; ++j)
      visited[i][j] = 0;

  return 0;
}
