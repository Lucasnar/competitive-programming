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
const int maxn = 124;

int graph[maxn][maxn];

void printf_graph(){
  for(int i = 0; i<10; ++i){
    for(int j = 0; j<10; ++j)
      printf("%d ", graph[i][j] == inf ? 0 : graph[i][j]);
    printf("\n");
  }
}

int main(){
  int u, v, n, c= 0;
  while(scanf(" %d %d", &u, &v) && u) {
    for(int i = 0; i<maxn; ++i)
      for(int j = 0; j<maxn; ++j)
        graph[i][j] = inf;
    n = 0;

    graph[--u][--v] = 1;
    while(scanf(" %d %d", &u, &v) && u)
      graph[--u][--v] = 1;

    //printf_graph();

    for(int k = 0; k<maxn; ++k)
      for(int i = 0; i<maxn; ++i)
        for(int j = 0; j<maxn; ++j)
          graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
    //printf("\n\n");
    //printf_graph();

    int sum = 0, n =  0;
    for(int i = 0; i<maxn; ++i)
      for(int j = 0; j<maxn; ++j)
        if(graph[i][j] != inf && i != j)
          sum +=  graph[i][j], ++n;
    double summ = (double) sum;
    double nn = (double) n;

    printf("Case %d: average length between pages = %.3lf clicks\n", ++c, summ / nn);
  }
  return 0;
}
