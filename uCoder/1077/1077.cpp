#include<bits/stdc++.h>

#define pii pair<int, int>

using namespace std;

int mtx[24][24];
int vis[24][24];
int c;

void bfs(pii v){
    c++;
    vis[v.first][v.second] = 1;
    //printf(" %d %d\n", v.first, v.second);
    queue <pii> q;
    q.push(v);
    while(!q.empty()){
        if (!vis[q.front().first+1][q.front().second] && mtx[q.front().first+1][q.front().second]){
            q.push(pii(q.front().first+1, q.front().second));
            //printf("!vis[q.front().first+1][q.front().second] %d!\n", !vis[q.front().first+1][q.front().second]);
            vis[q.front().first+1][q.front().second] = 1;
            //printf("visitei o %d %d!\n", q.front().first+1, q.front().second);
            //printf("c %d if 1\n", c);
        }
        if (!vis[q.front().first-1][q.front().second] && mtx[q.front().first-1][q.front().second]){
            q.push(pii(q.front().first-1, q.front().second));
            //printf("!vis[q.front().first-1][q.front().second] %d!\n", !vis[q.front().first-1][q.front().second]);
            //printf("mtx[q.front().first-1][q.front().second]) %d!\n", mtx[q.front().first-1][q.front().second]);
            vis[q.front().first-1][q.front().second] = 1;
            //printf("visitei o %d %d!\n", q.front().first-1, q.front().second);
            //printf("c %d if 2\n", c);
        }
        if (!vis[q.front().first][q.front().second+1] && mtx[q.front().first][q.front().second+1]){
            q.push(pii(q.front().first, q.front().second+1));
            //printf("!vis[q.front().first][q.front().second+1] %d!\n", !vis[q.front().first][q.front().second+1]);
            vis[q.front().first][q.front().second+1] = 1;
            //printf("visitei o %d %d!\n", q.front().first, q.front().second+1);
            //printf("c %d if 3\n", c);
        }
        if (!vis[q.front().first][q.front().second-1] && mtx[q.front().first][q.front().second-1]){
            q.push(pii(q.front().first, q.front().second-1));
            //printf("!vis[q.front().first][q.front().second-1] %d!\n", !vis[q.front().first-1][q.front().second-1]);
            vis[q.front().first][q.front().second-1] = 1;
            //printf("visitei o %d %d!\n", q.front().first, q.front().second-1);
            //printf("c %d if 4\n", c);
        }
        //printf("entrou aqui %d vez(es)!\n", ++c);
        //printf("q.front().first: %d q.front().second: %d\n", q.front().first, q.front().second);
        q.pop();
    }
}

int main(){
    int h, v;// c;

    while(scanf(" %d %d", &h, &v) == 2){

        memset(mtx, 0, sizeof(mtx));
        memset(vis, 0, sizeof(vis));

        for(int i=1; i<=v; ++i)
            for(int j =1; j<=h; ++j)
                scanf(" %d", &mtx[i][j]);

        c=0;
        for(int i=1; i<=v; ++i)
            for(int j =1; j<=h; ++j){
                if(!vis[i][j] && mtx[i][j]){
                    bfs(pii(i, j));
                    //printf("c %d mtx[%d][%d]\n", c, i, j);
                }
            }

        printf("%d\n", c);
    }

    return 0;
}
