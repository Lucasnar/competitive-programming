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
const int maxn = 16;

// made no sense. I don't actually know what I was thinking.
struct vertex {
  int v;
  int parent;
};

typedef pair<vertex, int> vi;
typedef pair<int, int> ii;
vector<vi> graph[maxn];
int dist[maxn];
int parent[maxn];

typedef long long int huge;

void djk(int start){
  set<ii> s;
  dist[start] = 0;
  s.insert(ii (0, start));
  //graph[start].first.parent = start;
  parent[start] = start;
  while(!s.empty()){
    int cur = s.begin()->second;
    s.erase(s.begin());
    for(auto edge : graph[cur]){
      //printf("cur %d\n", cur);
      if(dist[edge.first.v] > dist[cur] + edge.second){
        //printf("edge.first.v %d edge.second %d\n", edge.first.v, edge.second);
        dist[edge.first.v] = dist[cur] + edge.second;
        edge.first.parent = cur;
        //printf("parent[%d] = %d\n", edge.first.v, cur);
        parent[edge.first.v] = cur;
        s.insert(ii (dist[edge.first.v], edge.first.v));
      }
    }
  }
}

void print_parents(int s, int t){
  vector<int> parent_print;
  while(t != s) {
    parent_print.push_back(t);
    t = parent[t];
  }
  parent_print.push_back(s);

  for(int i = (int) parent_print.size()-1; i != -1; --i)
    printf(" %d", parent_print[i] + 1);
}

int main(){
  int n, c = 0, conns, v, w, s, t;
  vertex aux;
  while(scanf(" %d", &n) && n){
    for(int i = 0; i<n; ++i){
      graph[i].clear();
      dist[i] = inf;
      parent[i] = 0;
    }

    for(int i = 0; i<n; ++i){
      scanf(" %d", &conns);
      for(int j = 0; j<conns; ++j){
        scanf(" %d %d", &v, &w);
        aux.parent = 0;
        aux.v = v-1;
        graph[i].push_back(vi (aux, w));
      }
    }

    scanf(" %d %d", &s, &t);
    --s, --t;

    for(int i = 0; i<n; ++i){
      //printf("%d ->", i);
      for(auto edge : graph[i]){
        //printf(" (%d, %d)", edge.first.v, edge.second);
      }
      //printf("\n");
    }

    djk(s);

    //printf("parent => ");
    //for(int i = 0; i<n; ++i)
      //printf(" %d", parent[i]);
    //printf("\n");

    printf("Case %d: Path =", ++c);
    print_parents(s, t);
    printf("; %d second delay\n", dist[t]);
  }

  return 0;
}
