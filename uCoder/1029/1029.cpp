#include<bits/stdc++.h>
//#include<cstdio>
//#include<queue>
//#include<utility>

#define pii pair<int, int>

using namespace std;
// A 1
// > 2
// V 3
// < 4

const int maxn = 512;
int mtx[maxn][maxn];
int vis[maxn][maxn];
int mau[maxn][maxn];
int c=0, cs=0;
vector <pii> sequencia_atual;

void bfs(pii v){

    pii proximo;
    sequencia_atual.clear();
    vis[v.first][v.second] = 1;
    queue <pii> q;
    q.push(v);

    while(!q.empty()){
        ++c;
        vis[q.front().first][q.front().second] = 1;
        sequencia_atual.push_back(pii(q.front().first, q.front().second));

        if (mtx[q.front().first][q.front().second] == 1){
            proximo.first = q.front().first-1;
            proximo.second = q.front().second;
        }

        else if (mtx[q.front().first][q.front().second] == 2){
            proximo.first = q.front().first;
            proximo.second = q.front().second+1;
        }
        else if (mtx[q.front().first][q.front().second] == 3){
            proximo.first = q.front().first+1;
            proximo.second = q.front().second;
        }
        else if (mtx[q.front().first][q.front().second] == 4){
            proximo.first = q.front().first;
            proximo.second = q.front().second-1;
        }

        if(mau[proximo.first][proximo.second] || !mtx[proximo.first][proximo.second]){
            c = 0;
            //mau[q.front().first][q.front().second] = 1;
            for(int i = 0, s = sequencia_atual.size(); i<s; ++i){
                mau[sequencia_atual[i].first][sequencia_atual[i].second] = 1;
            }
        }
        else if(vis[proximo.first][proximo.second]){
            cs += c;
            c = 0;
        }
        else if(!vis[proximo.first][proximo.second])
            q.push(pii(proximo.first, proximo.second));
        q.pop();
    }
}

int main(){
    int n;
    char temp;

    scanf(" %d ", &n);

    for(int i = 0; i<= n+1; ++i)
        for(int j = 0; j<= n+1; ++j)
            mtx[i][j] = vis[i][j] = mau[i][j] = 0;

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=n; ++j){
            scanf(" %c", &temp);
            switch(temp){
                case 'A':
                    mtx[i][j] = 1;
                    break;
                case '>':
                    mtx[i][j] = 2;
                    break;
                case 'V':
                    mtx[i][j] = 3;
                    break;
                case '<':
                    mtx[i][j] = 4;
                    break;
            }
        }

    pii v;
    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=n; ++j)
            if(!vis[i][j])
                bfs(pii(i, j));

    //for(int i = 0; i<=n+1;++i){
        //for(int j = 0; j<=1+n; ++j)
            //printf("%d ", mtx[i][j]);
        //printf("\n");
    //}

    printf("%d\n", cs);

    return 0;
}
