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

vector<int> graph[maxn];
int visited[maxn];

void dfs(int v){
  visited[v] = 1;

  for(int i = 0; i<graph[v].size(); ++i)
    if(!visited[graph[v][i]])
      dfs(graph[v][i]);
}

int main(){
  int t, n, x, y, c, not_first=0;
  char aux;
  scanf(" %d", &t);

  while(t--){
    scanf(" %c%*c", &aux);
    n = (int) aux - 64;
    //printf("n %d aux %c\n", n, aux);

    for(int i = 0; i<n; ++i)
      visited[i] = 0, graph[i].clear();

    while(1){
      if(scanf("%c", &aux) != 1) break;
      //printf("aux %c\n",aux);
      if(aux == '\n'){
        //printf("blah");
        break;
      }
      else{
        x = (int) aux - 65;
        scanf("%c%*c", &aux);
        y = (int) aux - 65;
        graph[x].push_back(y);
        graph[y].push_back(x);
        //printf("%d %d\n", x, y);
        //break;
      }
    }

    c=0;
    for(int i = 0; i<n; ++i)
      if(!visited[i])
        dfs(i), c++;

    if(not_first++)
      printf("\n");
    printf("%d\n", c);
  }

  return 0;
}
