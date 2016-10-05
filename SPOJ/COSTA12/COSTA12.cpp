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
const int maxn = 10010;

int mtx[maxn][maxn];
bool visited[maxn][maxn];

int ii[] = {-1, 0, 1, 0};
int jj[] = {0, 1, 0, -1};

typedef long long int huge;

int shore_count(int x, int y){

    queue<pair<int, int> > q;
    pair<int, int> v = make_pair(x, y);
    int cur_i, cur_j, c=0;
    visited[x][y] = true;
    q.push(v);

    while(!q.empty()){
        v = q.front(); q.pop();

        for(int i = 0; i<4; ++i){
            cur_i = v.first + ii[i];
            cur_j = v.second + jj[i];
            if(mtx[cur_i][cur_j] && !visited[cur_i][cur_j]){
                q.push(make_pair(cur_i, cur_j));
                visited[cur_i][cur_j] = true;
            } else if (!mtx[cur_i][cur_j]){
                c++;
                break;
            }
        }
    }

    return c;
}

int main(){

    int n, m, c=0;
    char aux;

    scanf(" %d %d", &n, &m);

    for(int i = 0; i < n+2; ++i){
        for(int j = 0; j < m+2; ++j){
            mtx[i][j] = 0;
            visited[i][j] = false;
        }
    }

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            scanf(" %c", &aux);
            if(aux == '#')
                mtx[i][j] = 1;
        }
    }

    //for(int i = 1; i<=n; ++i){
        //for(int j = 1; j<=m; ++j)
            //printf("%d ", mtx[i][j]);
        //printf("\n");
    //}

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            if(mtx[i][j] && !visited[i][j]){
                c += shore_count(i, j);
            }
        }
    }

    printf("%d\n", c);

    return 0;
}
