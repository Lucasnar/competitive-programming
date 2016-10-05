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
const int maxn = 256;

int mtx[maxn][maxn];
int visited[maxn][maxn];
int ii[] = {0, 1, 0, -1};
int jj[] = {1, 0, -1, 0};

typedef long long int huge;

int bfs(int x, int y){ // Flood Fill
    int c=1, cur_i, cur_j;
    queue<pair<int, int> > q;
    pair<int, int> v = make_pair(x, y);
    visited[x][y] = 1;
    q.push(v);

    while(!q.empty()){
        v = q.front(); q.pop();

        for(int i = 0; i<4; ++i){
            cur_i = v.first + ii[i];
            cur_j = v.second + jj[i];

            if(!visited[cur_i][cur_j] && mtx[cur_i][cur_j] == mtx[v.first][v.second]){
                visited[cur_i][cur_j] = 1;
                q.push(make_pair(cur_i, cur_j));
                c++;
            }
        }
    }

    return c;
}

int main(){
    int n, m, ans = inf;

    scanf("%d %d", &n, &m);

    for(int i = 0; i<=n+1; ++i){
        for(int j = 0; j<=m+1; ++j){
            mtx[i][j] = -1;
            visited[i][j] = 0;
        }
    }

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            scanf(" %d", &mtx[i][j]);

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            if(!visited[i][j])
                ans = min(bfs(i, j), ans);

    printf("%d\n", ans);

    return 0;
}
