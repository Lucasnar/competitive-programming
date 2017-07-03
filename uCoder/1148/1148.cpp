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
const int maxn = 1024 * 16;

typedef pair<int, int> pii;

vector<int> adj[maxn];
vector<int> key[maxn];
set<int> keychain;
set<int> connected;
int visited[maxn];

typedef long long int huge;

int main(){
  int n, m, u, v;

  while(scanf(" %d %d", &n, &m) == 2){
    for(int i = 0; i<n; ++i){
      key[i].clear();
      adj[i].clear();
      visited[i] = 0;
    }
    connected.clear();
    keychain.clear();
    //printf(" %d %d \n", n, m);
    for(int i = 0; i<m; ++i){
      scanf(" %d %d", &u, &v);
      adj[--u].push_back(--v);
      adj[v].push_back(u);
    }

    for(int i = 1; i<n; ++i){
      scanf(" %d", &u);
      key[--u].push_back(i);
    }

    connected.insert(0);
    visited[0] = 0;
    int cur = 0, last_cur = 0;
    while(!connected.empty()){
      for(int i = 0, size = adj[cur].size(); i<size; ++i)
        if(!visited[adj[cur][i]]) connected.insert(adj[cur][i]);
      for(int i = 0, size = key[cur].size(); i<size; ++i)
        keychain.insert(key[cur][i]);
      auto it = find(connected.begin(), connected.end(), cur);
      if(it != connected.end()) connected.erase(it);
      it = find(keychain.begin(), keychain.end(), cur);
      if(it != keychain.end()) keychain.erase(it);
      visited[cur] = 1;
      last_cur = cur;
      for(auto cit : connected){
        if(find(keychain.begin(), keychain.end(), cit) != keychain.end()){
          cur = cit;
          goto there;
        }
      }
there:
      if(cur == last_cur) break;
    }

    int win = 1;
    for(int i = 0; i<n; ++i)
      if(!visited[i])
        win = 0;
    printf("%s\n", win? "sim" : "nao");
  }

  return 0;
}
