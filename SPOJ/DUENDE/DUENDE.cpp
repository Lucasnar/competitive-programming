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

struct room{
    int num;
    int cost;
};

room dung[maxn][maxn];
bool visited[maxn][maxn];
int ii[] = {0, 1, 0, -1};
int jj[] = {1, 0, -1, 0};
int n, m, x, y;

typedef long long int huge;

int bfs(pair<int, int> v){

    queue<pair<int, int> > q;
    q.push(v);
    visited[v.first][v.second] = true;
    int cur_i, cur_j;
    int min_cost = inf;

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int i = 0; i<4; ++i){
            cur_i = v.first + ii[i];
            cur_j = v.second + jj[i];

            if(!visited[cur_i][cur_j] && dung[cur_i][cur_j].num != -1 &&
               dung[cur_i][cur_j].num != 2){

                visited[cur_i][cur_j] = true;
                dung[cur_i][cur_j].cost = dung[v.first][v.second].cost + 1;

                q.push(make_pair(cur_i, cur_j));

                if(!dung[cur_i][cur_j].num)
                    min_cost = min(min_cost, dung[cur_i][cur_j].cost);
            }
        }
    }

    return min_cost;

}


int main(){
    pair<int, int> start;
    
    scanf(" %d %d", &n, &m);

    for(int i = 0; i<=n+1; ++i){
        for(int j = 0; j<=m+1; ++j){
            dung[i][j].num = -1;
            dung[i][j].cost = 0;
        }
    }
    

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            scanf(" %d", &x);
            dung[i][j].num = x;
            if(x == 3)
                start = make_pair(i, j);
        }
    }

    printf("%d\n", bfs(start));


    return 0;
}
