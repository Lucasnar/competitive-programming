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

vector<int> graph[maxn];
int visited[maxn];
int n, t, y, c, maximum, ans;

typedef long long int huge;

void dfs(int x){
  ++c;
  visited[x] = 1;

  for(int i = 0; i < graph[x].size(); ++i)
    if(!visited[graph[x][i]])
      dfs(graph[x][i]);
}

int main(){
  while(true){
    scanf(" %d", &n);
    if(!n)
      break;

    for(int i = 0; i<=n; ++i){
      graph[i].clear();
      visited[i] = 0;
    }

    for(int i = 0; i<n; ++i){
      scanf(" %d", &t);
      while(t--){
        scanf(" %d", &y);
        graph[i].push_back(--y);
      }
    }

    maximum = ans = c = 0;
    for(int i = 0; i<n; ++i){
      for(int T = 0; T<=n; ++T){
        visited[T] = 0;
      }
      //printf("dfs(%d)\n", i);
      //printf("c antes %d ", c);
      c = 0;
      dfs(i);
      //printf("c depois %d ", c);
      //printf("\n");
      if(c > maximum){
        maximum = c, ans = i;
      }
    }

    printf("%d\n", ans+1);
  }
  return 0;
}
