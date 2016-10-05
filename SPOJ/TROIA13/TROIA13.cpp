#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 50500;

typedef long long int huge;

int n, m, x, y, c = 0;

int visited[maxn];
vector<int> graph[maxn];

void dfs(int v){

    visited[v] = 1;

    for(int i = 0, s = graph[v].size(); i<s; ++i)
        if(!visited[graph[v][i]])
            dfs(graph[v][i]);
}

int main(){
    scanf(" %d %d", &n, &m);

    for(int i = 0; i<n; ++i){
        graph[i].clear();
        visited[i] = 0;
    }

    for(int i = 0; i<m; ++i){
        scanf(" %d %d", &x, &y);
        --x, --y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i = 0; i<n; ++i)
        if(!visited[i]){
            dfs(i);
            c++;
        }

    printf("%d\n", c);

    return 0;
}
