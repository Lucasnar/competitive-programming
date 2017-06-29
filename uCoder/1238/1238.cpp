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
const int maxn = 1024;

typedef pair<int, int> pii;

vector<pii> graph[maxn];
int visited[maxn];

void bfs(int start, int maximum_distance, int n){
  queue<int> q;
  int cur;
  q.push(start);
  while(!q.empty()){
    cur = q.front();
    q.pop();
    // graph[i][0] would represent the point itself and
    // was used only to calculate the distances.
    for(int i = 1; i<n; ++i){
      if(!visited[graph[cur][i].first] && graph[cur][i].second <= maximum_distance){
        visited[graph[cur][i].first] = 1;
        q.push(graph[cur][i].first);
      }
    }
  }
}

inline int power2(int a){
  return a * a;
}
inline int calculate_distance(pii p1, pii p2){
  return power2(p1.first - p2.first) + power2(p1.second - p2.second);
}

void calculate_distances(int n){
  for(int i = 0; i<n; ++i){
    for(int j = i; j<n; ++j){
      if(i != j){
        int dist = calculate_distance(graph[i][0], graph[j][0]);
        graph[i].push_back(pii (j, dist));
        graph[j].push_back(pii (i, dist));
      }
    }
  }
}

int main(){
  int n, d, x, y;

  scanf(" %d %d", &n, &d);
  d *= d;

  for(int i = 0; i<n; ++i){
    visited[i] = 0;
    scanf(" %d %d", &x, &y);
    graph[i].push_back(pii (x, y));
  }

  calculate_distances(n);
  bfs(0, d, n);

  for(int i = 0; i<n; ++i)
    if(!visited[i]){
      printf("N\n"); return 0;
    }
  printf("S\n");

  return 0;
}
