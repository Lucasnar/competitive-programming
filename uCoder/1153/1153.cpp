#include<cstdio>
#include<queue>
#include<algorithm>

// NOT FINISHED. RECEIVEING TLE.

using namespace std;

const int maxn = 512;
pair<int, pair<int, int> > graph[maxn][maxn];
int visited[maxn][maxn];
int distance[maxn][maxn];
int n, m;

int ii[] = {0, 0, -1, 1};
int jj[] = {1, -1, 0, 0};

int bfs(int x, int y){
    ++c;
    queue<pair<int, int> > q;
    pair<int, int> v;
    q.push(make_pair(x, y));
    graph[x][y].second = make_pair(-1, -1);
    int dist=0, i_atual, j_atual;

    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=m+1; ++j)
            visited[i][j] = 0;

    while(!q.empty()){
        v = q.front();
        q.pop();
        visited[v.first][v.second] = 1;
        for(int i = 0, j = 0; i<4; ++i, ++j){
                i_atual = v.first + ii[i];
                j_atual = v.second + jj[j];
                if (graph[i_atual][j_atual].first && !visited[i_atual][j_atual]){
                    //printf("adding graph[%d][%d] == %d\n", i_atual, j_atual, graph[i_atual][j_atual]);
                    visited[i_atual][j_atual] = 1;
                    q.push(make_pair(i_atual, j_atual));
                    graph[i_atual][j_atual].second = make_pair(v.first, v.second);
                }
        }
    }

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            ++dist;
            v = graph[v.first][v.second].second;
            if (v.first == -1)
                break;
        }
        if (v.first == -1)
            break;
    }
            
    return dist;
}

int main(){
    int r;
    char c1;

    while(1){
        scanf(" %d %d", &n, &m);
        if(!n) break;

        for(int i = 0; i<=n+1; ++i)
            for(int j = 0; j<=m+1; ++j)
                graph[i][j].first = visited[i][j] = 0;

        for(int i = 1; i<=n; ++i){
            for(int j = 1; j<=m; ++j){
                scanf(" %c", &c1);
                graph[i][j].first = c1 == '.'; 
            }
        }

        //printf("graph\n");
        //for(int i = 1; i<=n; ++i){
            //for(int j = 1; j<=m; ++j)
                //printf("%d ", graph[i][j]);
            //printf("\n");
        //}

        r = 0;
        for(int i = 1; i<=n; ++i)
            for(int j = 1; j<=m; ++j)
                if(graph[i][j].first)
                    r = max(r, bfs(i, j));

        printf("%d\n", --r);
    }

    return 0;
}
