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

const int maxn = 1024 * 16;

vector<int> graph[maxn];
vector<int> reversed_graph[maxn];
int visited[maxn];
int n;

typedef long long int huge;

int bfs(vector<int> *cur_graph){
  queue<int> q;
  int cur;
  q.push(1);
  visited[1] = 1;
  while(!q.empty()){
    cur = q.front();
    q.pop();
    for(int i = 0, size = (int) cur_graph[cur].size(); i < size; ++i){
      if(!visited[cur_graph[cur][i]]){
        visited[cur_graph[cur][i]] = 1;
        q.push(cur_graph[cur][i]);
      }
    }
  }

  for(int i = 1; i<=n; ++i)
    if(!visited[i])
      return 0;

  for(int i = 1; i<=n; ++i)
    visited[i] = 0;

  return 1;
}

int main(){
  int u, v;

  scanf(" %d", &n);

  for(int i = 0; i<=n; ++i){
    visited[i] = 0;
    graph[i].clear();
    reversed_graph[i].clear();
  }

  for(int i = 0; i<n; ++i){
    scanf(" %d %d", &u, &v);
    graph[u].push_back(v);
    reversed_graph[v].push_back(u);
  }

  if(bfs(graph) && bfs(reversed_graph))
    printf("S\n");
  else
    printf("N\n");

  return 0;
}
