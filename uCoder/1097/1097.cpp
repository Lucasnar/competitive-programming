#include<cstdio>
#include<utility>
#include<queue>

// NAO TERMINADO! CODIGO RUIM.

using namespace std;

const int maxn = 128;
pair <int, pair<int, int> > park[maxn][maxn];
int visited[maxn][maxn];
int repeated[maxn*maxn];
int n;

int ii[] = {0, 0, 1, -1};
int jj[] = {1, -1, 0, 0};

int bfs(pair<int, int> v, pair<int, int> target){ // Returns distance between v and target.

    queue<pair<int, int> > q;
    q.push(v);
    visited[1][1] = 1;

    if(park[1][1].first < 97){
        repeated[park[1][1].first + 32] = 1;
        printf("park[1][1].first == %d < 97\n", park[1][1].first );
    }
    else{
        repeated[park[1][1].first - 32] = 1;
        printf("park[1][1].first %d >= 97\n",  park[1][1].first);
    }

    int dist=0, b = 0, i_atual, j_atual;

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int i = 0; i<4; ++i){
                i_atual = v.first + ii[i];
                j_atual = v.second + jj[i];

                if(!repeated[park[i_atual][j_atual].first] && !visited[i_atual][j_atual] && park[i_atual][j_atual].first){
                    visited[i_atual][j_atual] = 1;
                    park[i_atual][j_atual].second = v;
                    if(park[i_atual][j_atual].first < 97)
                        repeated[park[i_atual][j_atual].first + 32] = 1;
                    else
                        repeated[park[i_atual][j_atual].first - 32] = 1;

                    q.push(make_pair(i_atual, j_atual));
                    printf("adding %d to queue\nv.first %d v.second %d\n", park[i_atual][j_atual].first, v.first, v.second);

                    if (make_pair(i_atual, j_atual) == target){
                        printf("fui pra bosta i_atual %d j_atual %d\n", i_atual, j_atual);
                        goto bosta;
                    }
                }
        }
    }

    bosta:
    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=n; ++j){
            v = park[v.first][v.second].second;
            ++dist;
            if(v == make_pair(-1, -1))
                break;
        }


    return dist > 0 ? dist : -1;
}

int main(){
    scanf(" %d", &n);

    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=n+1; ++j)
            park[i][j].first = visited[i][j] = 0;

    for(int i = 0; i<=n+1; ++i)
        for(int j = 0; j<=n+1; ++j)
            park[i][j].second = make_pair(-1, -1);

    for(int i = 0; i<128; ++i)
        repeated[i] = 0;

    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=n; ++j)
            scanf(" %c", &park[i][j].first);

    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j)
            printf("%d ", park[i][j].first);
        printf("\n");
    }

    //printf("a %d A %d\n", 'a', 'A');

    printf("%d\n", bfs(make_pair(1, 1), make_pair(n, n)));

    return 0;
}
