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
const int maxn = 1024*128;

typedef long long int huge;

//struct node{
  //int id;
  //int ttl;
  //int reached;
//};

//vector<node> nodes[maxn];
set<int> s;
vector<int> nodes[maxn];
int visited[maxn];
int ttls[maxn];
int c;

void bfs(int start, int ttl){
  queue<int> q;
  int cur;

  q.push(start);
  ttls[start] = ttl;
  visited[start] = 1;

  while(!q.empty()){
    cur = q.front(); q.pop();
    //printf("ttls[cur] %d\n", ttls[cur]);
    //printf("nodes[cur] %d\n", nodes[cur].size());
    if(!ttls[cur])
      break;
    for(int i = 0; i < nodes[cur].size(); ++i){
      if(!visited[nodes[cur][i]]){
        //printf("nodes[cur][i] %d\n", nodes[cur][i]);
        visited[nodes[cur][i]] = 1;
        q.push(nodes[cur][i]);
        ttls[nodes[cur][i]] = ttls[cur] - 1;
        //if(ttls[nodes[cur][i]]) ++c;
        ++c;
      }
    }
  }
}

int main(){

  int n, a, b, cases=0;
  //node node_a, node_b;

  while(1){
    scanf(" %d", &n);
    if(!n) break;

    for(int i = 0; i < maxn; ++i)
      nodes[i].clear();
    s.clear();

    for(int i = 0; i < n; ++i){
      scanf(" %d %d", &a, &b);

      //node_a.id = a; node_b.id = b;
      --a, --b;
      nodes[a].push_back(b);
      nodes[b].push_back(a);
      s.insert(a);
      s.insert(b);
    }

    while(1){
      //for(int i = 0; i < maxn; ++i)
      //nodes[i][j].ttl = nodes[i][j].reached = 0;
      for(int i = 0; i < maxn; ++i)
        visited[i] = ttls[i] = 0;

      scanf(" %d %d", &a, &b);
      if(!a && !b) break;

      --a;
      c = 0;

      bfs(a, b);

      //printf("s.size() %d c %d\n", s.size(), c);
      printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",
          ++cases, s.size()-c-1, ++a, b);
    }
  }

  return 0;
}
