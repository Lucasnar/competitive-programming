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

int maze[maxn][maxn];
vector<pair<int, int> > adj[maxn * maxn];
int dist[maxn * maxn];

typedef long long int huge;

int ii[] = {-1, 0, 0, 1};
int jj[] = {0, -1, 1, 0};

void djk(int start) {
  set<pair<int, int> > q;
  dist[start]=0;
  q.insert(make_pair(0, start));
  while(!q.empty()) {
    int current = q.begin()->second;
    q.erase(q.begin());
    for(auto edge : adj[current]) {
      if (dist[edge.first] > dist[current]+edge.second) {
        //remove from q
        auto it = q.find(make_pair(dist[edge.first], edge.first));
        if (it!=q.end())
          q.erase(it);
        //update distance
        dist[edge.first]=dist[current]+edge.second;
        //insert into q
        q.insert(make_pair(dist[edge.first], edge.first));
      }
    }
  }
}

int main(){
  int t, n, m;

  scanf(" %d", &t);

  while(t--){
    scanf(" %d %d", &n, &m);
    int kk[] = {m * -1, -1, 1, m};

    for(int i = 0; i<=n+1; ++i)
      for(int j = 0; j<=m+1; ++j)
        maze[i][j] = inf;

    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j)
        scanf(" %d", &maze[i][j]);

    //for(int i = 0; i<=n+1; ++i){
      //for(int j = 0; j<=m+1; ++j)
        //printf(" %d", maze[i][j]);
      //printf("\n");
    //}

    int k = 0;
    for(int i = 1; i<=n; ++i)
      for(int j = 1; j<=m; ++j){
        k++;
        adj[k].clear();
        dist[k] = inf;
        for(int l = 0; l<4; ++l)
          if(k + kk[l] > 0 && maze[i + ii[l]][j + jj[l]] != inf)
            adj[k].push_back(make_pair(k + kk[l], maze[i + ii[l]][j + jj[l]]));
      }

    //for(int i = 1; i<=k; ++i){
    //  printf("%d ->", i);
    //  for(auto edge : adj[i])
    //    printf(" (%d, %d)", edge.first, edge.second);
    //  printf("\n");
    //}

    djk(1);
    //printf("dist ");
    //for(int i = 1; i<=k; ++i)
    //  printf("%d ", dist[i]);
    //printf("\n");
    printf("%d\n", dist[k]+maze[1][1]);
  }
  return 0;
}
