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

typedef long long int huge;

char maze[maxn][maxn];
int graph[maxn][maxn];

int main(){
  int t, n, m, n_graph;
  char aux;
  pair<int, int> souce;

  while(t--){
    scanf(" %d %d", &n, &m);
    for(int i = 0; i<n; ++i){
      for(int j = 0; j<n; ++j){
        scanf("%c", &maze[i][j]);
        if(maze[i][j] == 'S')
          source = make_pair(i, j);
      }
      scanf("%*c");
    }
  }

  return 0;
}
