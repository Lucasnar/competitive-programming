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
const int maxn = 256;

int mtx[maxn][maxn];
int visited[maxn][maxn];

int ii[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int jj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

/*
   |-1, -1|-1, 0|-1, 1|
   |0, -1 |0, 0 |0, 1|
   |1, -1 |1, 0 |1, 1|
*/

int flood_fill(int x, int y){

    queue<pair<int, int> > q;
    pair<int, int> v = make_pair(x, y);
    int c = 1, cur_i, cur_j;
    visited[x][y] = 1;
    q.push(v);

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int i = 0; i<8; ++i){
            cur_i = v.first + ii[i];
            cur_j = v.second + jj[i];

            if(!visited[cur_i][cur_j] && !mtx[cur_i][cur_j]){
                visited[cur_i][cur_j] = 1;
                q.push(make_pair(cur_i, cur_j));
                c++;
            }

        }
    }

    return c;
}


typedef long long int huge;

int main(){

    int n, m, x, y, k, aux1, aux2;

    scanf(" %d %d %d %d %d", &n, &m, &x, &y, &k);

    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=m+1; ++j){
            mtx[i][j] = 0;
            visited[i][j] = 1;
        }

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
            visited[i][j] = 0;


    for(int i = 1; i<=k; ++i){
        scanf(" %d %d", &aux1, &aux2);
        mtx[aux1][aux2] = 1;
    }

    printf("%d\n", flood_fill(x, y));

    return 0;
}
